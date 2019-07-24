#include <iostream>
#include <ostream>
#include <fstream>
#include <string>
#include "Maze.h"

using namespace std;

int main() {
	vector<vector<char>> board;
	string line;
	int row = 0, column = 0;
	cout << "File Name: ";
	getline(cin, line);
	ifstream myfile(line);
	if (myfile.is_open())
	{
		//https://stackoverflow.com/questions/33108785/reading-characters-from-a-file-one-at-a-time-c-and-storing-to-a-2d-array
		while (getline(myfile, line)) {
			vector<char>temp(line.begin(), line.end());
			board.push_back(temp);
		}
		myfile.close();
	}
	else {
		cout << "Unable to open file";
	}
	Maze mazeSolver(board);

	try {
		mazeSolver.solved();
	}
	catch (exception & e)
	{
		cout << e.what();
	}
	return 0;
}