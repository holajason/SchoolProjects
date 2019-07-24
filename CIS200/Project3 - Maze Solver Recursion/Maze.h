#pragma once
#include <vector> 
#include <iostream>
#include <ostream>
using namespace std;
class Maze {
friend ostream& operator << (ostream& os, const Maze& maze);
public:
	Maze(vector<vector<char>> board) {
		//https://learn.zybooks.com/zybook/UMDEARBORNCIS200CharneskySummer2019/chapter/11/section/8?content_resource_id=32106408
		solution = board;
	}

	void solved() {
		if (solve(solution)) {
			print();
		}
		else {
			throw invalid_argument("Longest path: 0");
		}
	}
	bool solve(vector<vector<char>>solution) {
		for (int row = 0; row < solution.size(); row++) {
			for (int column = 0; column < solution[row].size(); column++) {
				if (startLocation(row, column) == true) {
					return check(row, column);
				}
			}
		}
		return false;
	}


	bool isSafeOnRow(int row) {
		for (int i = 0; i < solution.size(); i++) {
			if (solution[row][i] == 'O') {
				solution[row][i] = '+';
			}
		}
	}

	void print() {
		for (int i = 0; i < solution.size(); i++) {
			for (int k = 0; k < solution[i].size(); k++) {
				cout << solution[i][k] << " ";
			}
			cout << endl;
		}
	}


	bool isValid(int row, int column) {
		return (row >= 0 && row < solution.size() && column >= 0 && column < solution[0].size());
		
	}

	bool startLocation(int row, int column) {
		this->startingRow = row;
		this->startingCol = column;
		return (solution[row][column] == 'S');
	}

	bool endLocation(int row, int column) {
		this->endingRow = row;
		this->endingCol = column;
		return (solution[row][column] == 'E');
	}



	//https://www.techiedelight.com/find-shortest-path-in-maze/
	bool check(int row, int column) {
		if (isValid(row, column)) {
			if (endLocation(row,column)) {
				numOfSolution++;
				return true;
			}
			if (solution[row][column] == 'W' || solution[row][column] == '+') {
				return false;
			}
			solution[row][column] = '+';
			if (check(row + 1, column) || check(row, column-1)) {
				numberOfMoves++;
				return true;
			}
			if (check(row , column+1) || check(row-1, column)) {
				numberOfMoves++;
				return true;
			}
			solution[row][column] = ' ';
			return false;
		}
	/*	else {
			throw out_of_range("Out Of Range");
		}*/
		return false;
	}

	int getNumberOfSolutions() {
		return this->numOfSolution;
	}
	int getNumberOfMoves() {
		return this->numberOfMoves;
	}

	int getStartingRow() {
		return this->startingRow;
	}

	int getStartColumn() {
		return this->startingCol;
	}

	int getEndingRow() {
		return this->endingRow;
	}

	int getEndingColumn() {
		return this->endingCol;
	}

private:
	vector<vector<char>>solution;
	vector<int>moves;
	int numberOfMoves;
	int numOfSolution;
	int startingRow, startingCol;
	int endingRow, endingCol;

};

ostream& operator <<(ostream& os, const Maze& maze) {
	os << "";
	for (int row = 0; row < maze.solution.size() ; row++) {
		for (int column = 0; column < maze.solution[row].size(); column++) {
			os << maze.solution[row][column] << " ";
		}
		os << "\n";
	}
	return os;
}