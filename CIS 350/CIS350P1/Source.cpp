
//
//  nagagram.cpp
//  nagagram
//
//  Created by Jason Lu on 1/30/18.
//  Copyright ?2018 Jason Lu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class EquiClassess
{
private:
	vector<vector<string>>classes;
	vector<string>temp;
public:
	// The function will sort the list by its size
	// If the class size is less than the next class, swap the classes
	//Precondition
	//PostCondition : classes will be sorted by the size
	static bool sortList(const vector<string>& list1, const vector<string>& list2)
	{
		return list1.size() > list2.size();
	}

	//The function will sort the classes in alphabetical order
	//PreCondition:
	//PostCondition: Every classes/row will be sorted in alphabetical order
	static bool sortWord(const vector<string>& word1, const vector<string>& word2)
	{
		return word1 < word2;
	}

	// The function will determine if the word entered are ananagram to any exitence word
	//PreCondition: Determine if both word are anagram by the length of each word by their
	// length and characters in the word
	//PostCondition: Check if both word are equally match to each other after sorting
	bool isAnagram(string word1, string word2)
	{
		//Check if both word have the same length
		if (word1.length() != word2.length())
		{
			return false;
		}
		// If both word have the same length
		if (word1.length() == word2.length())
		{
			// Using the build in sort function to sort both word
			// into alphabetical order
			sort(word1.begin(), word1.end());
			sort(word2.begin(), word2.end());
			//If both word have the same characters, return true
			if (word1 == word2)
			{
				return true;
			}
		}
		return false;
	}

	// The function is pass by reference and accept the word from the user
	//PreCondition: The word will push into the same class if the length and the word
	//are equally match after sorted
	//PostCondition: Once both word are anagram, push the word into the same class
	void add(string word)
	{
		//This is used to clear the list after the user enter a word
		temp.clear();
		//Push_back is used to add the word in the back of the list
		temp.push_back(word);
		//This for loop is used to check if the word enter are
		//anagram to any other word in the classes
		for (unsigned int i = 0; i < classes.size(); i++)
		{
			//Set the first word in the class as an comparison word
			string word2 = classes[i][0];
			if (isAnagram(word, word2))
			{
				//If the word enter match the word in the list
				//push the entered word into the class
				classes[i].push_back(word);
				return;
			}

		}
		// If no match of the word is found inside any of those
		//classes, create a new class to store the word
		classes.push_back(temp);
	}

	//The function is pass by reference, it will dipslay
	//the number of classes of the anagram that the user enter
	//PreCondition: The classes not empty, num2Print >= 0 and num2Print <= classes size
	//PostCondition: The function will print the number of classes that
	//the user enter or the maximum size of the classes
	void print(unsigned long num2Print)
	{
		//If the user enter the number to print is greater the class size,
		//set num2Print equal to the class size
		if (num2Print > classes.size())
		{
			num2Print = classes.size();
		}
		// Using a nested for loop to print the number of classes
		// and and the word inside of the classes;
		for (unsigned int i = 0; i < num2Print; i++) {
			{
				cout << "Class of size " << classes[i].size() << ": ";
				// sort the word inside the classes
				sort(classes[i].begin(), classes[i].end());
				//Another for loop is used to print the word inside the class
				for (unsigned int j = 0; j < classes[i].size(); j++) {
					//print the in the classes will print in 2d vector
					cout << classes[i][j] << " ";
				}
				cout << "." << endl;
			}
		}
	}

	// This function is used to sort the classes, by its size or
	//equivalence classes size, sort the member words in lexicographically
	//PreCondition
	//PostCondition: The list will be sort by the size of the class and the row
	// will be sort in alphabtical order
	void sortClasses()
	{
		//check for duplicate word by using build in algorithm "unique"
		unique(classes.begin(), classes.end());
		for (unsigned int i = 0; i < classes.size(); i++)
		{
			//Resize the list of the class, from the beginning of the class
			//to the unqiue/dupicate word, and from the duplicate to the end
			//the duplicate word will only print out once
			classes[i].resize(distance(classes[i].begin(), unique(classes[i].begin(), classes[i].end())));
		}
		//This function will sort the classes in alphabetical order
		sort(classes.begin(), classes.end(), sortWord);
		//This function will sort the size of the classes
		sort(classes.begin(), classes.end(), sortList);
	}
};


//PreCondition: The program will determines if the word anagram, and then it will
//print out the class of the anagram by the size of the classes, the class will also be
//sorted into alphabetical order
//PostCodition: The program will accept input and display the output by the size
//of the class in sorted order
int main()
{
	EquiClassess anagram;
	string word;
	int numString, num2Print;
	//ask the user for the number of word to consider
	// and the number of classes to print
	cin >> numString;
	cin >> num2Print;
	//number of word to consider
	for (int i = 0; i < numString; i++)
	{
		cin >> word;
		//calls the add function, push the word into the temporary vector
		anagram.add(word);
	}
	//call the sort function class
	anagram.sortClasses();
	//display the word from the classes vector
	anagram.print(num2Print);
	return 0;
}
