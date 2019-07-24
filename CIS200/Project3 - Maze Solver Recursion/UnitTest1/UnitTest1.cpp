#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "..\Maze.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodForShorestPath)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'S','W','W','W','O','W','W','W','W','W',},
			{'O','O','O','O','O','W','O','O','O','W',},
			{'O','W','O','W','O','W','O','W','O','W',},
			{'O','W','O','W','O','O','O','W','O','W',},
			{'O','O','O','W','O','W','W','O','O','W',},
			{'W','W','O','W','O','O','W','O','W','W',},
			{'W','O','O','O','W','O','W','O','O','O',},
			{'W','O','W','O','O','O','W','O','W','O',},
			{'W','O','W','W','O','W','W','O','W','O',},
			{'E','O','O','O','O','W','W','O','W','W'}
			};
			int expectedMoves = 13;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solved();
			int actualMoves = mazeSolver.getNumberOfMoves();
			//Assert
			Assert::AreEqual(expectedMoves, actualMoves);
		}

		TEST_METHOD(TestMethodForShorestPath2)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'W','W','S','W','W','W','W','W','W','W','W','W'},
			{'W','O','O','O','O','O','O','O','W','W','W','W','W','O'},
			{'W','O','O','W','O','O','W','O','O','O','O','E','O','O','O'},
			{'W','O','O','O','O','O','W','O','O','O','O','W'},
			{'W','W','W','W','W','W','W','W','W','W','W','W'}
			};
			int expectedMoves = 11;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualMoves = mazeSolver.getNumberOfMoves();
			//Assert
			Assert::AreEqual(expectedMoves, actualMoves);
		}

		TEST_METHOD(TestMethodForShorestPath3)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'O','W','O','W','O','W'},
			{'O','O','O','O','O','E'},
			{'O','W','O','W','O','W'},
			{'O','O','W'},
			{'W','O','O'},
			{'W','W','O'},
			{'S','O','O'},
			};;
			int expectedMoves = 14;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualMoves = mazeSolver.getNumberOfMoves();
			//Assert
			Assert::AreEqual(expectedMoves, actualMoves);
		}

		TEST_METHOD(TestMethodForShorestPath4)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{' ',' ',' ','W','W',' ',' ',' ','O'},
			{' ',' ','O','O','O','O',' ',' ','O'},
			{' ','W','O','W','O','O','W',' ','O'},
			{'S','O','W','W','W','W','O','W','O'},
			{' ','O','O','O','O','O','O','O','O'},
			{' ','W','W','O','W','W','W',' ','O'},
			{' ',' ','O','O','O','O',' ',' ','O'},
			{' ',' ',' ','O','W',' ',' ',' ','E'},
			};;
			int expectedMoves = 14;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualMoves = mazeSolver.getNumberOfMoves();
			//Assert
			Assert::AreEqual(expectedMoves, actualMoves);
		}


		TEST_METHOD(TestMethodForShorestPath5)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{' ',' ',' ',' ',' ','O'},
			{' ',' ','O','O','O','O',' ',' ','O'},
			{' ','W','O','S',' ','O'},
			{'S','O','W','O','O','W','O'},
			{' ','O','O','E','O','O','O','O','O'},
			{' ','W','W','W','W',' ','O'},
			{' ',' ','O',' ',' ','O'},
			{' ',' ',' ',' ',' ','E'},
			};;
			int expectedMoves = 2;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualMoves = mazeSolver.getNumberOfMoves();
			//Assert
			Assert::AreEqual(expectedMoves, actualMoves);
		}

		TEST_METHOD(TestStartLocation)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'W','W','W','O','W','W','W',},
			{'O','O','O','O','W','O','O','O','W',},
			{'O','W','W','O','W','S','W','O','W',},
			{'O','W','O','W','O','O','W','O','W',},
			{'O','O','W','O','W','W','O','O','W',},
			{'W','O','W','O','O','W','O',},
			};
			int expectedXloc = 2;
			int expectedYLoc = 5;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualXloc = mazeSolver.getStartingRow();
			int actualYLoc = mazeSolver.getStartColumn();
			//Assert
			Assert::AreEqual(expectedXloc, actualXloc);
			Assert::AreEqual(expectedYLoc, actualYLoc);
		}

		TEST_METHOD(TestStartLocation2)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{' ',' ',' ',' ','W',' ',' ',' ',},
			{' ',' ',' ','O','O','O',' ',' ',},
			{' ',' ','O','O','W','O','O',' ',},
			{' ','O','O','W','W','O','W','W',},
			{'O','W','E','W','W','O','O','O','O','O','O','O','O','S',},
			{' ','W','O','W','W','O','W','W',},
			{' ',' ','O','O','W','O','O',' ',},
			{' ',' ',' ','O','O','O',' ',' ',},
			{' ',' ',' ',' ','W',' ',' ',' ',},
	
			};
			int expectedXloc = 4;
			int expectedYLoc = 13;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualXloc = mazeSolver.getStartingRow();
			int actualYLoc = mazeSolver.getStartColumn();
			//Assert
			Assert::AreEqual(expectedXloc, actualXloc);
			Assert::AreEqual(expectedYLoc, actualYLoc);
		}



		TEST_METHOD(TestEndingLocation)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'W','W','W','W','O','W','W','W','W','W',},
			{'O','O','O','O','O','W','O','O','O','W',},
			{'O','W','O','W','O','W','S','W','O','W',},
			{'O','W','O','W','O','O','O','W','O','W',},
			{'O','O','O','W','O','W','W','O','O','W',},
			{'W','W','O','W','O','O','W','O','W','W',},
			{'W','O','O','O','W','O','W','O','O','O',},
			{'W','O','W','E','O','O','W','O','W','O',},
			{'W','O','W','W','O','W','W','O','W','O',},
			{'W','O','O','O','O','W','W','O','W','W'}
			};
			int expectedXloc = 7;
			int expectedYLoc = 3;
;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualXloc = mazeSolver.getEndingRow();
			int actualYLoc = mazeSolver.getEndingColumn();
			//Assert
			Assert::AreEqual(expectedXloc, actualXloc);
			Assert::AreEqual(expectedYLoc, actualYLoc);
	
		
		}

		TEST_METHOD(TestEndingLocation2)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
				{'O','W','O','W','O','W'},
				{'O','W','W','W','O','O'},
				{'O','W','O','W','O','W'},
				{'O','O','W'},
				{'W','O','O'},
				{'W','W','O'},
				{'S','O','E'},
			};

			int expectedXloc = 6;
			int expectedYLoc = 2;
			;
			//Act
			Maze mazeSolver(maze);
			mazeSolver.solve(maze);
			int actualXloc = mazeSolver.getEndingRow();
			int actualYLoc = mazeSolver.getEndingColumn();
			//Assert
			Assert::AreEqual(expectedXloc, actualXloc);
			Assert::AreEqual(expectedYLoc, actualYLoc);


		}

		TEST_METHOD(TestEndingLocation3)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
				{'O','W','O','W','O','W'},
				{'O','S','W','W','O','O'},
				{'O','W','O','W','O','W'},
				{'O','O',},
				{'W','O',},
				{' ','W','O'},
				{' ',' ','O','O','O','O','O','O','O','E'},
			};

			string expectedMsg = "Out Of Range";
			string actualErrMsg = "";
			//Act
			Maze mazeSolver(maze);
			try {
				mazeSolver.solve(maze);
			}
			catch (exception & e) {
				actualErrMsg = e.what();
			}
			//Assert
			Assert::IsTrue(expectedMsg == actualErrMsg);

		}

		TEST_METHOD(TestForNumberOfSolution)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'W','W','W','W','O','W','W','W','W','W',},
			{'O','O','O','O','O','W','O','O','O','W',},
			{'O','W','O','W','O','W','S','W','O','W',},
			{'O','W','O','W','O','O','O','W','O','W',},
			{'O','O','O','W','O','W','W','O','O','W',},
			{'W','W','O','O','O','O','W','O','W','W',},
			{'W','O','W','O','W','O','W','O','O','O',},
			{'W','O','W','E','O','O','O','O','W','O',},
			{'W','O','W','W','O','W','W','O','W','O',},
			{'W','O','O','O','O','W','W','O','W','W'}
			};
			
			int expectedNumberOfSolution = 2;
			;
			//Act
			Maze solver(maze);
			solver.solve(maze);
			int actualNumberOfSolution = solver.getNumberOfSolutions();
			//Assert
			Assert::AreEqual(expectedNumberOfSolution, actualNumberOfSolution);
		}

		//https://github.com/EricCharnesky/CIS200-Summer2019/blob/master/Project2/UnitTest1/unittest1.cpp
		TEST_METHOD(TestForNoSolution)
		{
			//AAA
			//Arrange
			vector < vector<char>> maze{
			{'W','W','W','W','S','W'},
			{'O','O','O','W','O','W'},
			{'O','W','O','W','O','W'},
			{'O','W','E','W','O','O'},
			{'O','W','O','W', 'O', 'W'},
			};

			string expctedNoSolution = "Longest path: 0";
			//Act
			Maze solver(maze);
			string noSolutionMsg = "";
			try {
				solver.solved();
				Assert::Fail();
			}
			catch (invalid_argument & e) {
				noSolutionMsg = e.what();
			}
			//Assert
			Assert::IsTrue(noSolutionMsg == expctedNoSolution);
		}



	};
}
