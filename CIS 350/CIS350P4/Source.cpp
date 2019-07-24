/*
BY: Jason Lu
CIS 350
Description: This program uses the backtracking techinque to solve an given undirected graph,
such that no two adjacent vertices of the graph are colored with the same color.
The program first accept a line of input which indicate the number of components and 
the number of target sub companies. The next line of input which hold information about 
which companies should not be combined together. The program will first assign a color to the
first componenets and move the next componenets and assign it with a new color. If the assigning
node color matches the pervious node color, try aother differnt color until it found a new color.
If no color can be assign to the vertices. Display not solution,
else display all the sub companies that are assigned to the
same color.
*/

#include<iostream>
#include<vector>
using namespace std;
class graph {
public:
	 graph(vector<vector<bool>>& matrix, int size) {
		 vector<bool> temp;
	 for (int i = 0; i <= size; i++)
		 temp.push_back(false);
	 for (int j = 0; j <= size; j++) {
		 matrix.push_back(temp);
	 }
}
	//check if the current color is safe for vertex[i]
	bool isSafe(vector<vector<bool>> & matrix, vector<int> &subComps, int node, int color) {
		for (int i = 1; i < subComps.size(); i++) {
			if (matrix[node][i] && subComps[i] == color)
				return false;
		}
		return true;
	}

	//Function will assign color to the vertices
	bool coloringTool(vector<vector<bool>> & matrix, vector<int> &subComps, int vertices, int color) {
		if (vertices == subComps.size()) {
			return true;
		}
		for (int i = 1; i <= color; i++) {
			//check for all possible solution/color
			if (isSafe(matrix, subComps, vertices, i)) {
				subComps[vertices] = i;
				if (coloringTool(matrix, subComps, vertices + 1, color)) {
					return true;
				}
				//remove the vertices if no color can be assign
				subComps[vertices] = 0;
			}
		}
		return false;
	}

	//Back track the graph for all possible solution
	void graphColoring(vector<vector<bool>> & matrix, vector<int> &subComps, int color) {
		if (coloringTool(matrix, subComps, 1, color) == true) {
			print(subComps, color);
		}
		else {
			cout << "no solution" << endl;
		}
	}

	void print(vector<int> &subComps, int color) {
		for (int i = 1; i < color + 1; i++) {
			for (int j = 0; j < subComps.size(); j++) {
				if (subComps[j] == i) {
					cout << j << " ";
				}
			}
			cout << endl;
		}
	}
};
int main() {
	vector<int> subComps;
	vector<vector <bool>> matrix;
	int numComp, subComp, data;
	cin >> numComp >> subComp;
	subComps.resize(numComp+1);
	graph Graph(matrix, numComp);
	for (int i = 1; i <= numComp; i++) {
		while (1) {
			cin >> data;
			if (data == 0) {
				break;
			}
			else {
				matrix[i][data] = true;
			}
		}
	}
	Graph.graphColoring(matrix, subComps, subComp);
	return 0;
}


/*
10 3
5 6 2 0
1 7 3 0
2 8 4 0
5 9 3 0
4 10 1 0
1 9 8 0
2 10 9 0
6 10 3 0
4 6 7 0
5 7 8 0
*/


