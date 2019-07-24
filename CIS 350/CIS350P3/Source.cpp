/*
By: Jason Lu
CIS 350
Description: This program will accept two input, first a number of germs from 1 to 2000
second input accept sequences of integers that end with 0;
After all inputs are entered, the program will display the germs with the less amount of 
ancestors but with the most offspring from the list. If germs have the same number of 
ancestors and offspring, the germs will display from the order are entered.
*/
#include <iostream>
#include <vector>
using namespace std;

class graph
{
public:
	//preCondition: This function will create a graph with 2D vector, the size of the graph equal the number of vertices + 1
	//indgree is initialize to 0 with an empty queue of size 0
	//PostCondition: A 2D graph are created with the number vertices 
	graph(int Vertices){
		vector<int> temp;
		vertices = Vertices;
		for (int i = 0; i < vertices; i++)	{
			minQueue.push_back(0);
		}
		//if vertices less or equal 0
		for (int i = 0; i <= vertices; i++)	{
			germs.push_back(temp);
			inDegree.push_back(0);
		}
		//If the indegee is equal 0, it will change to -1
		inDegree[0] = -1;
	}

	//preCondition: This function will add edges(germ) to the graph(germType)
	//PostCondition: germs are added to the germType element in the 2D vector
	void addEdge(int germType, int germ){
		germs[germType].push_back(germ);
	}

	//preCondition: This function will iterate through germs vector and fill vertices with indegree
	//PostCondition: Traverse through the germs vertor and fill indegree if vertices
	void inDegreeCount(){
		for (int i = 1; i <= vertices; i++)	{
			vector<int>::iterator itr;
			for(itr= germs[i].begin(); itr != germs[i].end(); itr++){
				inDegree[*itr]++;
			}
		}
	}

	//preCondition: This functill will preform a sorting into a minPriority queue of the minQue vector
	//PostCondition: The minQue vector are sorted into a minPriority queue, with the lowest valueon top
	void sortQue(){
		int iterator = 0, smallest = 0, count = 1;
		int  sizeOfQueue = 0;
		for (int i = 1; i < inDegree.size(); i++) {			//Increment the sizeOfQueue if -1 is found in the inDegree vector
			if (inDegree[i] == -1) {
				sizeOfQueue++;
			}
		}
		int sizes = vertices - sizeOfQueue;
		while (sizes > iterator){
			if (smallest == inDegree[count]){		
				minQueue[iterator] = count;
				iterator++;
			}
			if (count % (vertices + 1) == vertices){	
				smallest++;
				count = 0;
			}
			count++;
		}
	}

	//preCondition: This function will perform a dequeue of the smallest value
	//PostCondition: The lowest value in the queue are removed and update the queue with new value
	void deleteMinQue()
	{
		int zeroInDegree = 0;
		for (int i = 1; i <= vertices; i++) {
			if (inDegree[i] == 0) {
				zeroInDegree++;
			}
		}
		vector<int> temp(minQueue.begin(), minQueue.begin() + zeroInDegree);
		//update the queue
		minQueue.erase(minQueue.begin(), minQueue.begin() + zeroInDegree);
		for (int i = 0; i < temp.size(); i++) {
			inDegree[temp[i]] = -1;
			cout << temp[i] << " ";
			vector<int>::iterator itr;
			for (itr = germs[temp[i]].begin(); itr != germs[temp[i]].end(); itr++) {
				inDegree[*itr]--;
			}
		}
		sortQue();
	}

	//preCondition: This functill will perform a delet min and print the vertices with 0 indegess and its childs
	//PostCondition: Print the verties with 0 indegree and its child
	void topSort()
	{
		while (minQueue.size() != 0) {
			deleteMinQue();
		}
		cout << endl;
	}

private:
	vector<vector<int>>germs;
	vector<int>inDegree;
	vector<int>minQueue;
	int vertices;
};

int main()
{
	//PreCondition: Will display the verties with 0 indegree and its child
	//PostCondition: Display the verties with 0 indegree and its child
	int numGerms, germ, list = 1;
	cin >> numGerms;
	graph germs(numGerms);
	while (list <= numGerms){
		cin >> germ;
		if (germ == 0){
			list++;
		}
		else{
			germs.addEdge(list , germ);
		}
	}
	germs.inDegreeCount();
	germs.sortQue();
	germs.topSort();
	return 0;
}

/*
5
0
4 5 1 0
1 0
5 3 0
3 0
*/