#include "pch.h"
#include "CppUnitTest.h"
#include "..\ship.h"
#include "..\Repair.h"
#include "..\battleShip.h"
#include "..\Corvette.h"
#include "..\Cruiser.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		/****************************************************************************/
		/*				Test for Battle Ship Attack Method							*/
		/****************************************************************************/
		TEST_METHOD(TestForBattleShipAttack) {
			//AAA
			//Arrange
			Battle battleShip("BattleX", -1, -1, chaotic);
			Battle dutchMan("FlyingDutchMan", -3, -4, chaotic);
			//Act
			battleShip.attack(&dutchMan);
			//Assert
			Assert::AreEqual(dutchMan.getMaxHealth(), 100);
			Assert::AreEqual(dutchMan.getCurrentHealth(), 80);
			Assert::AreEqual(battleShip.getDistanceBetween(&dutchMan), 3.61, .1);
			Assert::AreEqual(battleShip.getTorpedoesCounts(), 0);
		}

		TEST_METHOD(TestForAttackingSameAlign, invalid_argument) {
			//AAA
			//Arrange
			Battle battleShip("BattleX", -1, -1, us);
			Battle dutchMan("FlyingDutchMan", -5, -6, us);
			//Act
			bool exceptionThrow = false;
			try {
				battleShip.attack(&dutchMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}

		//https://stackoverflow.com/questions/23270078/test-a-specific-exception-type-is-thrown-and-the-exception-has-the-right-propert
		//https://blogs.msdn.microsoft.com/dgartner/2012/04/22/using-assertexpectexception-with-native-unit-testing-in-vs11/
		TEST_METHOD(battleShipOutOfRangeAttack, invalid_argument) {
			//AAA
			//Arrange
			Battle battleShip("BattleX", -1, -1, us);
			Battle dutchMan("FlyingDutchMan", -23, -24, them);
			//Act
			bool exceptionThrow = false;
			try {
				battleShip.attack(&dutchMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}

		TEST_METHOD(OppositeShipReach0HP, invalid_argument) {
			//AAA
			//Arrange
			Battle battleShip("BattleX", -1, -1, us);
			Corvette dutchMan("FlyingDutchMan", -23, -24, them);
			//Act
			bool exceptionThrow = false;
			try {
				battleShip.attack(&dutchMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}


		/****************************************************************************/
		/*				Test for Battle Ship Move Method							*/
		/****************************************************************************/
		TEST_METHOD(TestMoveFunction)
		{
			//AAA
			//Arrange
			Battle battleShip("BattleX", -1, -1, chaotic);
			Battle dutchMan("FlyingDutchMan", -3, -4, them);
			//Act
			battleShip.attack(&dutchMan);
			//Assert
			Assert::AreEqual(dutchMan.getCurrentHealth(), 80);
			//Act
			dutchMan.move();
			//Assert
			Assert::AreEqual(dutchMan.getX(), -4);
			Assert::AreEqual(dutchMan.getY(), -5);
			Assert::AreEqual(dutchMan.getCurrentHealth(), 81);
			//Act
			//Torpedoes = 0
			battleShip.attack(&dutchMan);
			//Assert
			Assert::AreEqual(dutchMan.getX(), -4);
			Assert::AreEqual(dutchMan.getY(), -5);
			Assert::AreEqual(dutchMan.getCurrentHealth(), 71);
		}
	

		/****************************************************************************/
		/*				Test for Corvette Ship Attack Method						*/
		/****************************************************************************/

		TEST_METHOD(TestIfTheShipReach0HP) {
			//AAA
			//Arrange
			Battle SeaMonkey("SeaMonkey", 10, 10, us);
			Corvette SeaSpider("SeaSpider", 10, 10, them);
			//Act
			bool exceptionThrow = false;
			try {
				SeaMonkey.attack(&SeaSpider);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}
		/*	  Change align from -> | us to them |<- 	*/
		TEST_METHOD(TestChangeAlignToThem) {
			//AAA
			//Arrange
			Corvette SeaSpider("SeaSpider", 10, 10, them);
			Battle SeaMonkey("SeaMonkey", 10, 10, us);
			//Act
			SeaSpider.attack(&SeaMonkey);
			//Assert
			Assert::IsTrue(SeaMonkey.getAlign() == them);
		}

		/*	Change align from -> | us to Them |<-	*/
		TEST_METHOD(TestChangeAlignUsAndAttack) {
			//AAA
			//Arrange
			Corvette SeaSpider("SeaSpider", 15, 15, us);
			Battle SeaMonkey("SeaMonkey", 10, 10, them);
			//Act
			SeaSpider.attack(&SeaMonkey);
			//Assert
			Assert::IsTrue(SeaMonkey.getAlign() == us);
			Assert::AreEqual(SeaSpider.getDistanceBetween(&SeaMonkey), 7.07,.1);
		}

		TEST_METHOD(TestForOutOfRangeAttack, invalid_argument) {
			//AAA
			//Arrange
			Battle SeaMonkey("SeaMonkey", 10, 10, them);
			Corvette SeaSpider("SeaSpider", 40, 40, them);
			//Act
			bool exceptionThrow = false;
			try {
				SeaSpider.attack(&SeaMonkey);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}

		/****************************************************************************/
		/*		Test for Corvette Ship Attack And Move Method						*/
		/****************************************************************************/
		TEST_METHOD(TestCorvetteMoveAt0Health, invalid_argument) {
			//AAA
			//Arrange
			Battle SeaMonkey("SeaMonkey", 10, 10, chaotic);
			Corvette SeaSpider("SeaSpider", 10, 10, them);
			//Act
			bool exceptionThrow = false;
			try {
				SeaMonkey.attack(&SeaSpider);
				SeaSpider.move();
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}
		TEST_METHOD(TestForCorvetteMoveMethod) {
			//AAA
			//Arrange
			Cruiser SeaMonkey("SeaMonkey", 10, 10, them);
			Corvette SeaSpider("SeaSpider", 10, 10, us);
			//Act
			SeaMonkey.attack(&SeaSpider);
			//Assert
			Assert::AreEqual(SeaSpider.getCurrentHealth(), 15);
			//Act
			SeaSpider.move();
			//Assert
			Assert::AreEqual(SeaSpider.getX(), 15);
			Assert::AreEqual(SeaSpider.getY(), 15);
			Assert::AreEqual(SeaSpider.getCurrentHealth(), 16);
		}


		/****************************************************************************/
		/*		Test for Cruiser Move Function										*/
		/****************************************************************************/
		TEST_METHOD(TestCruiserMoveFunction)
		{
			//AAA
			//Arrange
			Cruiser TomCruse("FlyingSupaMan", 7, 8, chaotic);
			//Act
			TomCruse.move();
			//Assert
			Assert::AreEqual(TomCruse.getX(), 8);
			Assert::AreEqual(TomCruse.getY(), 10);
		}


		/****************************************************************************/
		/*		Test for Crusier Ship Attack Method									*/
		/****************************************************************************/

		TEST_METHOD(crusierAttackingSameAlign, invalid_argument) {
			//AAA
			//Arrange
			Cruiser TomCruse("TommyCruiser", 10, 10, them);
			Battle FlyingSupaMan("FlyingSupaMan", 7, 8, them);
			//Act
			bool exceptionThrow = false;
			try {
				TomCruse.attack(&FlyingSupaMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}
		TEST_METHOD(cruiserOutOfRangeAttack, invalid_argument) {
			//AAA
			//Arrange
			Cruiser TomCruse("TommyCruiser", 60, 62, them);
			Battle FlyingSupaMan("FlyingSupaMan", 7, 8, us);
			//Act
			bool exceptionThrow = false;
			try {
				TomCruse.attack(&FlyingSupaMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}

		TEST_METHOD(TestCruiserShipAttack)
		{
			//AAA
			//Arrange
			Cruiser TomCruse("TommyCruiser", 10, 10, chaotic);
			Battle FlyingSupaMan("FlyingSupaMan", 7, 8, chaotic);
			//Act
			TomCruse.attack(&FlyingSupaMan);
			//Assert
			Assert::AreEqual(FlyingSupaMan.getCurrentHealth(), 95);
		}

		/****************************************************************************/
		/*		Test for Crusier Ship Attack And Move Method						*/
		/****************************************************************************/
		TEST_METHOD(TestCruiserAttackAndMoveMethod)
		{
			//AAA
			//Arrange
			Cruiser TomCruse("TommyCruiser", 10, 10, us);
			Corvette FlyingSupaMan("FlyingSupaMan", 7, 8, them);
			//Act
			TomCruse.attack(&FlyingSupaMan);
			//Assert
			Assert::AreEqual(FlyingSupaMan.getCurrentHealth(), 15);
			//Act
			FlyingSupaMan.move();
			//Assert
			Assert::AreEqual(FlyingSupaMan.getCurrentHealth(), 16);
		}

		/****************************************************************************/
		/*		Test for Repair Ship Attack Method									*/
		/****************************************************************************/
		TEST_METHOD(TestToRepairOppositeAlign, invalid_argument) {
			//AAA
			//Arrange
			Repair Come2Resure("Come2Resure", 10, 10, us);
			Battle FlyingSupaMan("FlyingSupaMan", 7, 8, them);
			//Act
			bool exceptionThrow = false;
			try {
				Come2Resure.attack(&FlyingSupaMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}
	
		TEST_METHOD(AttempRepairSameAlignWithZeroHealth, invalid_argument) {
			//AAA
			//Arrange
			Repair Come2Resure("Come2Resure", 10, 10, us);
			Corvette FlyingSupaMan("FlyingSupaMan", 7, 8, us);
			FlyingSupaMan.setCurrentHealt(0);
			//Act
			bool exceptionThrow = false;
			try {
				Come2Resure.attack(&FlyingSupaMan);
			}
			catch (invalid_argument const& outOfRangeErr) {
				outOfRangeErr.what();
				exceptionThrow = true;
			}
			//Assert
			Assert::IsTrue(exceptionThrow);
		}

		TEST_METHOD(TestRepairAlignShipToMaxHealth)
		{
			//AAA
			//Arrange
			Repair Come2Resure("Come2Resure", 10, 10, us);
			Battle FlyingSuperMan("FlyingSupaMan", 5, 6, them);
			Battle FlyingSupaMan("FlyingSupaMan", 7, 8, us);
			//Act
			FlyingSupaMan.attack(&FlyingSuperMan);
			Assert::AreEqual(FlyingSuperMan.getCurrentHealth(), 80);
			//Act
			Come2Resure.attack(&FlyingSupaMan);
			//Assert
			Assert::AreEqual(FlyingSupaMan.getCurrentHealth(), 100);
		}
	};
}
