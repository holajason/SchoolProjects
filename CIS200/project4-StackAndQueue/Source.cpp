#include "TrainStack.h"
#include "planeQue.h"
#include "Unloading.h"
int main() {
	int train, plane, numberOfItemPerTrian, numberOfItemPerPlane;
	int trainNumber, cargoNumber;
    int planeNumber, planeItemDestNo;
	bool valid = false;
	int numberOfTimeToLoadOnTrain = 0, numberOfTimeToLoadOnPlane = 0;

	do {
		try {
			cin >> train >> plane >> numberOfItemPerTrian >> numberOfItemPerPlane;
			StackAndQueue<int> Trains(train);
			Trains.getNumberOfTrains();
			Trains.getNumberOfItems(numberOfItemPerTrian);
			StackAndQueue<int> Planes(plane);
			Planes.getNumberOfPlanes();
			Planes.getNumberOfItems(numberOfItemPerPlane);

			for (int index = 0; index < train; index++) {
				cin >> trainNumber;
				Trains.itemToLoad(trainNumber);
				numberOfTimeToLoadOnTrain += trainNumber;
			}
			for (int index = 0; index < plane; index++) {
				cin >> planeNumber;
				Planes.itemToLoad(planeNumber);
				numberOfTimeToLoadOnPlane += planeNumber;
			}

			for (int i = 0; i < numberOfTimeToLoadOnTrain; i++) {
				cin >> cargoNumber;
				Trains.createStackOfItem(cargoNumber);
			}


			for (int i = 0; i < numberOfTimeToLoadOnPlane; i++) {
				cin >> planeItemDestNo;
				Planes.planeItemAssenblyLine(planeItemDestNo);
			}

			cout << Trains;
			cout << Planes << endl;
			valid = true;
		}
		catch (invalid_argument & e) {
			cout << e.what() << endl;
		}
	} while (!valid);

	
	return 0;
}
