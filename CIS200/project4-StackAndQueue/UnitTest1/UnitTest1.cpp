#include "pch.h"
#include "CppUnitTest.h"
#include "..\Unloading.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		//https://github.com/EricCharnesky/CIS200-Summer2019-holajason/blob/master/Project3%20-%20Maze%20Solver%20Recursion/UnitTest1/UnitTest1.cpp
		TEST_METHOD(TestTrainGreaterThan100)
		{
			//AAA
			//Arrage
			int expectNumberOfTrain = 101;
			string expectedString = "Invalid Amount(Train 0-100). Please Re-Enter All Values";
			//Act
			StackAndQueue<int> Trains(expectNumberOfTrain);
			string actualOutString = " ";
			//Assert
			try {
				Trains.getNumberOfTrains();
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				actualOutString = e.what();
			}
			Assert::IsTrue(expectedString == actualOutString);
		}
		TEST_METHOD(TestTrainLessThan0)
		{
			//AAA
			//Arrage
			int expectNumberOfTrain = -1;
			string expectedString = "Invalid Amount(Train 0-100). Please Re-Enter All Values";
			//Act
			StackAndQueue<int> Trains(expectNumberOfTrain);
			string actualOutString = " ";
			//Assert
			try {
				Trains.getNumberOfTrains();
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				actualOutString = e.what();
			}
			Assert::IsTrue(expectedString == actualOutString);
		}
		TEST_METHOD(TestNumberOfTrain)
		{
			//AAA
			//Arrage
			int expectNumberOfTrain = 56;
			int actualNumberTrians;
			//Act
			StackAndQueue<int> Trains(expectNumberOfTrain);
			try {
				Trains.getNumberOfTrains();
				actualNumberTrians = Trains.getTotalTrain();
			}
			catch (invalid_argument & e) {
			}
			Assert::AreEqual(expectNumberOfTrain, actualNumberTrians);
		}

		TEST_METHOD(TestPlaneGreaterThan10)
		{
			//AAA
			//Arrage
			int expectNumberOfPlanes = 101;
			string expectedString = "Invalid Amount(Plane 0-10). Please Re-Enter All Values";
			//Act
			StackAndQueue<int> Planes(expectNumberOfPlanes);
			string actualOutString = " ";
			//Assert
			try {
				Planes.getNumberOfPlanes();
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				actualOutString = e.what();
			}
			Assert::IsTrue(expectedString == actualOutString);
		}
		TEST_METHOD(TestPlaneLessThan0)
		{
			//AAA
			//Arrage
			int expectNumberOfPlane = -1;
			string expectedString = "Invalid Amount(Plane 0-10). Please Re-Enter All Values";
			//Act
			StackAndQueue<int> Planes(expectNumberOfPlane);
			string actualOutString = " ";
			//Assert
			try {
				Planes.getNumberOfPlanes();
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				actualOutString = e.what();
			}
			Assert::IsTrue(expectedString == actualOutString);
		}
		TEST_METHOD(TestNumberOfPlane)
		{
			//AAA
			//Arrage
			int expectNumberOfPlanes = 5;
			int actualNumberPlanes;
			//Act
			StackAndQueue<int> Planes(expectNumberOfPlanes);
			try {
				Planes.getNumberOfPlanes();
				actualNumberPlanes = Planes.getTotalPlanes();
			}
			catch (invalid_argument & e) {
			}
			Assert::AreEqual(expectNumberOfPlanes, actualNumberPlanes);
		}

		TEST_METHOD(TestNumberOfItemsLessThan0)
		{
			//AAA
			//Arrage
			int expectNumberOfPlanes = 5;
			int expectNumberOfItems= -1;
			string expectedString = "Invalid Item Amount(Item Cannot be Negative)";
			//Act
			StackAndQueue<int> Planes(expectNumberOfPlanes);
			string actualOutString = " ";
			//Assert
			try {
				Planes.getNumberOfItems(expectNumberOfItems);
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				actualOutString = e.what();
			}
			Assert::IsTrue(expectedString == actualOutString);
		}


		TEST_METHOD(TestNumberOfItemsGreaterThan0)
		{
			//AAA
			//Arrage
			int expectNumberOfPlanes = 5;
			int expectNumberOfItems = 20;
			int acutalItems;
			//Act
			StackAndQueue<int> Planes(expectNumberOfPlanes);
			//Assert
			try {
				Planes.getNumberOfItems(expectNumberOfItems);
				acutalItems = Planes.getNumberOfItems();
			}
			catch (invalid_argument & e) {

			}
			Assert::AreEqual(expectNumberOfItems, acutalItems);
		}


		TEST_METHOD(TestStackOfFiveItems)
		{
			//AAA
			//Arrage
			int NumberOfTrain = 3;
			int expectedStack = 2;
			vector<int> expectedItemToLoad = { 2,7,1 };
			vector<int> expectedItem = { 1, 2 ,2 ,3, 2, 1, 3, 2, 2, 2, 1, 2, 3, };
			//Act
			StackAndQueue<int> Train(NumberOfTrain);
			int actualStack;
			//Assert
			try {
				Train.itemToLoad(expectedItemToLoad.size());
				Train.createStackOfItem(1);
				Train.createStackOfItem(2);
				Train.createStackOfItem(2);
				Train.createStackOfItem(3);
				Train.createStackOfItem(2);
				Train.createStackOfItem(1);
				Train.createStackOfItem(3);
				Train.createStackOfItem(2);
				Train.createStackOfItem(2);
				Train.createStackOfItem(2);
				Train.createStackOfItem(1);
				Train.createStackOfItem(2);
				Train.createStackOfItem(3);
				actualStack = Train.getStackOfFive();
			}
			catch (invalid_argument & e) {
				e.what();
			}
		
			Assert::AreEqual(expectedStack, actualStack);
		}

		TEST_METHOD(TestForRemaingStack)
		{
			//AAA
			//Arrage
			int NumberOfTrain = 5;
			int expectedStack = 4;
			vector<int> expectedItemToLoad = { 3, 5, 2, 5, 1 };
			vector<int> expectedItem = { 1, 4, 2, 2, 1, 2, 2, 4, 4, 3, 4, 2, 3, 4, 1, 5 };
			//Act
			StackAndQueue<int> Train(NumberOfTrain);
			int actualStack;
			//Assert
			try {
				Train.itemToLoad(expectedItemToLoad.size());
				Train.createStackOfItem(1);
				Train.createStackOfItem(4);
				Train.createStackOfItem(2);
				Train.createStackOfItem(2);
				Train.createStackOfItem(1);
				Train.createStackOfItem(2);
				Train.createStackOfItem(2);
				Train.createStackOfItem(4);
				Train.createStackOfItem(4);
				Train.createStackOfItem(3);
				Train.createStackOfItem(4);
				Train.createStackOfItem(2);
				Train.createStackOfItem(3);
				Train.createStackOfItem(4);
				Train.createStackOfItem(1);
				Train.createStackOfItem(5);
				actualStack = Train.getTotalStack();
			}
			catch (invalid_argument & e) {
				e.what();
			}

			Assert::AreEqual(expectedStack, actualStack);
		}

	};
}
