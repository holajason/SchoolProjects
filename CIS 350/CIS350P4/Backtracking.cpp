////
////  CIS350P4.cpp
////  CIS350P4
////
////  Created by Jason Lu on 4/17/18.
////  Copyright © 2018 Jason Lu. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class graph {
//public:
//	vector<vector<bool>>matrix;
//	vector<vector<int>>subComps;
//	vector<int>vertices;
//	graph(int numComps, int subComp) {
//		vector<bool>temp;
//		for (int i = 0; i < numComps; i++)
//		{
//			vertices.push_back(i);
//			for (int j = 0; j < numComps; j++) {
//				temp.push_back(false);
//			}
//			matrix.push_back(temp);
//		}
//
//		for (int i = 0; i < subComps.size(); i++) {
//			vector<int>temp;
//			subComps.push_back(temp);
//		}
//	}
//
//	bool isSafe(vector<vector<bool>> & matrix, vector<vector<int>> &subComps, int node, int color) {
//		for (int i = 0; i < subComps[color].size(); i++) {
//			if (matrix[node][subComps[color][i]])
//				return false;
//		}
//		return true;
//	}
//
//	bool graphColoring(vector<vector<bool>> & matrix, vector<vector<int>> & subComps, int vertex) {
//
//		if (vertex = subComps.size()) {
//			return true;
//		}
//		for (int i = 0; i < matrix.size(); i++) {
//			for (int j = 0; j < vertex; j++) {
//				if (isSafe(matrix, subComps,i, j)) {
//					subComps[i].push_back(i);
//					if (graphColoring(matrix, subComps, vertex + 1) == true) {
//						return true;
//					}
//					subComps[i][j] = 0;
//				}
//			}
//		}
//		return false;
//	}
//
//	bool colorGraph(vector<vector<bool>> & matrix, vector<vector<int>> & subComps, int m) {
//		if (graphColoring(matrix, subComps, m) == false) {
//			cout << "no soliution" << endl;
//			return false;
//		}
//		else {
//			print(subComps);
//		}
//		return true;
//	}
//
//	void print(const vector<vector<int>> &subComps) {
//		for (int i = 0; i < subComps.size(); i++) {
//			if (subComps[i].size() > 0) {
//				for (int j = 0; j < subComps[i].size(); j++) {
//					cout << subComps[i][j] << " ";
//				}
//				cout << endl;
//			}
//		}
//	}
//
//};
//
//int main() {
//	int numcomp, subComps, data;
//	cin >> numcomp >> subComps;
//	graph matrix(numcomp, subComps);
//	for (int i = 0; i < numcomp; i++) {
//		while (1) {
//			cin >> data;
//			if (data == 0) {
//				break;
//			}
//			else {
//				matrix.matrix[i][data - 1] = true;
//			}
//		}
//	}
//	matrix.print();
//	return 0;
//}
//
///*
//10 3
//5 6 2 0
//1 7 3 0
//2 8 4 0
//5 9 3 0
//4 10 1 0
//1 9 8 0
//2 10 9 0
//6 10 3 0
//4 6 7 0
//5 7 8 0
//
//1 3 7
//2 4 6 10
//5 8 9
//*/