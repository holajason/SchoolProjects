#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

template <typename T>

class StackAndQueue {
private:
	T numberOfTransportation;
	T loadingTime;
	T numTrains, numPlanes, totalItems;
	T stackOfFive, totalStack;
	vector<T>parkingLots;
	vector<T>unloadingDock;
	vector<T>QueueOfStack;
	stack<T>trainItemStack;
	queue<T>ItemAssemblyLine;
public:

	//Constructor that accepts the number of train or plane
	 StackAndQueue(T numberOfTransportation) {
		 loadingTime = 0;
		 numTrains = 0;
		 numPlanes = 0;
		 totalItems = 0;
		this->numberOfTransportation = numberOfTransportation;
	}

	 /***********************************************************************************************/
	 /*                                   Train                                                     */
	 /***********************************************************************************************/

	 // The Train Station and waiting to be loaded
	 void itemToLoad(T numberOfItemForEachTrans) {
		 parkingLots.push_back(numberOfItemForEachTrans);
	 }

	 void getNumberOfTrains() {
		 if (numberOfTransportation < 0 || numberOfTransportation > 100) {
			 throw invalid_argument("Invalid Amount(Train 0-100). Please Re-Enter All Values");
		 }
		 else {
			 numTrains = numberOfTransportation;
		 }
	 }

	 void getNumberOfPlanes() {
		 if (this->numberOfTransportation < 0 || this->numberOfTransportation > 10) {
			 throw invalid_argument("Invalid Amount(Plane 0-10). Please Re-Enter All Values");
		 }
		 this->numPlanes = this->numberOfTransportation;
	 }

	 void getNumberOfItems(T items) {
		 if (items < 0) {
			 throw invalid_argument("Invalid Item Amount(Item Cannot be Negative)");
		 }
		 this->totalItems = items;
	 }

	 //Create stack of five item
	 void createStackOfItem(T itemNumber) {
		 int count = 0;
		 trainItemStack.push(itemNumber);
		 if (trainItemStack.size() >= 5) {
			 while (!trainItemStack.empty()) {
				 QueueOfStack.push_back(trainItemStack.top());
				 loadItemsToTrain(trainItemStack.top());
				 trainItemStack.pop();
			 }
			 stackOfFive++;
			 totalStack++;
		 }
	 }

	 //Get the remaining item from a non-five-item stack
	 void getRemainingStack() {
		 while (!trainItemStack.empty()) {
			 QueueOfStack.push_back(trainItemStack.top());
			 loadItemsToTrain(trainItemStack.top());
			 trainItemStack.pop();
			 totalStack++;
		 }
	 }

	 //Load item to the waiting train
	 void loadItemsToTrain(T itemDestNo) {
		 for (int index = 0; index < parkingLots.size(); index++) {
			 if (index == itemDestNo - 1) {
				 parkingLots[index]--;
				 parkingLots[index] = getDepartureTime(parkingLots[index], itemDestNo);
				 if (parkingLots[index] == 0) {
					 parkingLots[index] = loadingTime;
				 }
				 else {
					 parkingLots[index] = loadingTime + itemDestNo;
				 }
				 loadingTime += (itemDestNo * 2);
			 }
			 //Track current Time for each trip
			// cout << transportationLots[index] << " ";
		 }
		// cout << endl;
	 }

	 //Get the train timer when there's no more item to load
	 T getDepartureTime(T itemToLoad, T itemName) {
		 int loadingTime = 0;
		 if (itemToLoad == 0) {
			 loadingTime += itemName;
		 }
		 loadingTime += loadingTime + itemName;
		 return loadingTime;
	 }

	 T getTotalStack() {
		 getRemainingStack();
		 for (int i = 0; i < QueueOfStack.size(); i++) {}
		 return this-> totalStack;
	 }

	 T getStackOfFive() { return stackOfFive; }

	 T getTotalTrain() { return numTrains;}

	 T getTotalItems() { return this->totalItems; }

	 T getTotalPlanes() {	 return this->numPlanes; }

	 /***********************************************************************************************/
	 /*                                        Plane                                                */
	 /***********************************************************************************************/

	 //Airport assembly line for air plane
	 void planeItemAssenblyLine(T itemDestNumber) {
		 ItemAssemblyLine.push(itemDestNumber);
		 while (!ItemAssemblyLine.empty()) {
			 loadItemToPlane(ItemAssemblyLine.front());
			 ItemAssemblyLine.pop();
		 }
	 }

	 void loadItemToPlane(T itemDestinationNo) {
		 for (int index = 0; index < parkingLots.size(); index++) {
			 if (index == itemDestinationNo - 1) { // If the item destination number match the plane number
				 parkingLots[index]--; // decrease the item count for each plane by 1
				 //Get the time when there's no more item to put on plane
				 parkingLots[index] = getLoadingTime(parkingLots[index], itemDestinationNo);
				 if (parkingLots[index] == 0) {
					 parkingLots[index] = loadingTime;
				 }
				 else {
					 //Single Trip
					 parkingLots[index] = loadingTime + itemDestinationNo * 5;
				 }
				 //Round trip
				 loadingTime += (itemDestinationNo * 10);
			 }
		 }
	 }

	 //Timer when there's no more item to load
	T getLoadingTime(T itemToLoad, T itemNumber) {
		 T loadingTime = 0;
		 if (itemToLoad == 0) {
			 loadingTime += itemNumber * 10;
		 }
		loadingTime += loadingTime + itemNumber * 10;
		return loadingTime;
	 }

	T getLoadingTime(){
		 return this->loadingTime;
	}


	friend ostream& operator << (ostream& os, StackAndQueue& stack) {
		stack.getRemainingStack(); //Needed  calculating time for remaing item
	/*	for (int index = 0; index < stack.QueueOfStack.size(); index++) {
			os << stack.QueueOfStack[index] << " ";
		}*/
		os << endl;
		for (int index = 0; index < stack.parkingLots.size(); index++) {
			os << stack.parkingLots[index] << " ";
		}
		return os;
	}
};
