/*
BY: Jason Lu
CIS 350 Program2a
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

class Node {
public:

	Node(string label) :name (label) {};
	//Description: This function will return pointer of the name == toFind, if 
	//the name is not found, return a nullptr
	//PreCondition: This function will return a pointer if name == toFind
	//PostCondition: This function will return a pointer of the name == toFind 
	Node *find(string toFind){
		// return this pointer if its found for the first try
		if ( name == toFind){ 
			return this;
		}
		//use a for loop to loop through the class
		for (int i = 0; i < children.size(); i++){
			//create a pointer that start from the class
			Node * toFindPtr = children[i];
			if (toFindPtr->find(toFind) != nullptr)	{
				//return a pointer if name ==toFind
				return toFindPtr->find(toFind);
			}
		}
		return nullptr;
	}

	//Description: This function will add/update the children and the extends vector
	//of the class
	//PreCondition: This function will adds the node into the tree
	//PostCondition: This function will updates the childrens/extends vector of the tree
	void addChild(Node*childptr){
		childptr->extends.push_back(this);
		children.push_back(childptr);
	}

	//Description: This function contain two for loop, one are used to create spacing and 
	// the other is used to indent 5 space between each extension
	//PreCondition: This function will print the element from the tree
	//PostCondition: This function will print the element from the tree with correct spacing
	void print(int space){
		//start with 0 space
		for (int i = 0; i < space; i++)	{
			cout << " ";
		}
		cout << this->name << endl;
		for (int i = 0; i < children.size(); i++)	{
			//Indent with 5 space for each extension class
			children[i]->print(space+5);
		}
	}

	//Description: The function will print the element from the tree
	//PreCondition: This function will print the tree
	//PostCondition: Tree will be printed
	void print(){
		print(0);
	}

	string getName(){
		return name;
	}

private:
	string name;
	vector<Node*>children;
	vector<Node*> extends;
};

class Program {
public:
	//Description: The function will return a pointer of the node if its found
	//and return a nullptr if its not found
	//PreCondition: This function will return a pointer to the node in the forest == toFind
	//PostCondition: Function will return a pointer to the node once its found
	Node *find(string toFind){
		for (int i = 0; i < classes.size(); i++)
		{
			//create a pointer that start from the class 
			Node * toFindPtr = classes[i];
			//if the pointer is found inside the class
			if (toFindPtr->find(toFind) != nullptr)
			{
				return toFindPtr->find(toFind);
			}
		}
		return nullptr;
	}

	//Description: This function will print the forest and separate by 10 dashes
	//This function will print the dashes that separate each base class 
	//PreCondition: This function will display the root of each class
	//PostCondition: Each root of the class will be print and separate by 10 dashes
	void print() {
		for (int i = 0; i < classes.size(); i++){
			classes[i]->print();
			cout << "----------"<<endl;
		}
	}
	//Description: This function add name1 and name2 into the forest
	//PreCondition: Name1 and Name2 will add to the forest
	//PostCondition: Name1 and Name2 are add to the forest
	void add(string derivedName, string baseName){
		Node * rootPtr = find(baseName);
		Node * subPtr = find(derivedName);
		//if the root is a nullptr
		if (rootPtr == nullptr){
			//create a pointer with name2
			rootPtr = new Node(baseName);
			//push the pointer into the tree
			classes.push_back(rootPtr);
		}
		//check if the derived class is a nullptr
		if (subPtr == nullptr){
			//set the derived class pointer with name1
			subPtr = new Node(derivedName);
		}
		//if both pointer are not a nullptr and not in the forest
		else {
			//search for the dervied class point in the class
			auto found = std::find(classes.begin(), classes.end(), subPtr);
			
			if (found != classes.end()){
				//if the parent is found, erase the point
				classes.erase(found);
			}
		}
		//add the pointer to the root
		rootPtr->addChild(subPtr);
	}

	/*
	if(rootPtr == nullptr && subPtr == nullPtr)
	{
	rootPtr = new Node(baseName);
	subPtr = new Node(derivedName);
	rootPtr->add(subPtr);
	classes.push_back(rootPtr);
	}
	else if(subPtr == nullPtr){
	subPtr = new Node(derviedName);
	rootPtr->add(subPtr);
	}
	else if(rootPtr->find(derviedName) != nullptr){}
	else
	{
	rootPtr->add(subPtr);
	}
	*/
	
private:
	vector<Node *>classes;
};

//Description: The user will enter an integer of the number of extends, once the input is read
//the program will display each of the base class and the classes that extend it
//PreCondition: The user will enter the number of extends and classes name with given relationship
//PostCondition: The program will display the output with the base classes and the classes that extend it
int main()
{
	Program program;
	string base, subClass;
	int numClass;
	//number of extends
	cin >> numClass;
	for (int i = 0; i < numClass; i++){
	cin >> base >> subClass;
	//add the relations into the tree
	program.add(base, subClass);
	}
	program.print();
	return 0;
}