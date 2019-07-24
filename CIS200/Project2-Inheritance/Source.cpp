#include "ship.h"
#include "battleShip.h"
#include "Corvette.h"
#include "Cruiser.h"
#include "Repair.h"

int main() {

	Battle battleShip("BattleX", -1, -1, chaotic);
	Battle dutchMan("FlyingDutchMan", -3, -4, us);
	Battle battleShip2("BattleX", -1, -1, us);
	Battle dutchMan2("FlyingDutchMan", -5, -6, us);
	Battle SeaMonkey("SeaMonkey", 10, 10, them);
	Corvette SeaSpider("SeaSpider", 10, 10, chaotic);
	Cruiser TomCruse("TommyCruiser", 10, 10, us);
	Corvette FlyingSupaMan("FlyingSupaMan", 7, 8, them);
	Repair Come2Resure("Come2Resure", 2, 2, us);

	cout << "BattleX Attacked FlyingDutchMan" << endl;
	battleShip.attack(&dutchMan);
	cout << dutchMan.status()<< endl;
	cout << battleShip.status() << endl;

	cout << "Come2Resure joined the battle to aid the align: " << endl;

	Come2Resure.attack(&dutchMan);
	cout << dutchMan.status() << endl;

	//Blowing up ship
	cout << "Battle is getting out of control\nSeaMonkey jumped on SeaSpider and start to attack!\n" << endl;
	cout << SeaMonkey.status() << endl;
	cout << "Oh My! SeaSpider is dead! What an Attack!\n" << endl;
	try {
		SeaMonkey.attack(&SeaSpider);
	}
	catch (invalid_argument const& e) {
		cout << e.what() << endl;
	}
	cout << SeaSpider.status() << endl;

	cout << "Here come the Flying Supa Man!" << endl;
	cout << "He's after tom Cruse! Run Tommy! RUNNN!!!" <<endl;
	cout << FlyingSupaMan.status() << endl;
	FlyingSupaMan.attack(&TomCruse);
	TomCruse.move();
	cout << TomCruse.status() << endl;;
    
    //Repairing align ship after being attacked
	cout << "Attempting to repair opposite align" << endl;
	try {
		Come2Resure.attack(&battleShip);
	}
	catch (invalid_argument const& outOfRangeErr) {
		cout << outOfRangeErr.what() << endl;
	}
    
	cout << endl;
	cout << "Attempting to attack the same align player: " << endl;
	try {
		battleShip2.attack(&dutchMan2);
	}
	catch (invalid_argument const& outOfRangeErr) {
		cout << outOfRangeErr.what() << endl;;
	}

	cout << "\nAttempt to attack out of reach target: " << endl;
	Battle battleShip3("BattleX", -1, -1, us);
	Battle dutchMan3("FlyingDutchMan", -23, -24, chaotic);
	try {
		battleShip3.attack(&dutchMan3);
	}
	catch (invalid_argument const& outOfRangeErr) {
		cout << outOfRangeErr.what() << endl;
	}
	return 0;
}
