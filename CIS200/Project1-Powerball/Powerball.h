#pragma once
#include <iostream>
using namespace std;

class Powerball {
private:
	int whiteBall[5];
	int redBall;
public:
	//Random Pick Construtor
	Powerball() {
		whiteBall[0] = 0;
		whiteBall[1] = 0;
		whiteBall[2] = 0;
		whiteBall[3] = 0;
		whiteBall[4] = 0;
		for (int index = 0; index < 5; index++) {
			int randomNumber = rand() % 69 + 1;
			while (randomNumber == whiteBall[0] || randomNumber == whiteBall[1] ||
				randomNumber == whiteBall[2] || randomNumber == whiteBall[3] || randomNumber == whiteBall[4])
			{
				randomNumber = rand() % 69 + 1;
			}
			whiteBall[index] = randomNumber;
		}
		redBall = rand() % 26 + 1;
	}

	//User Pick Constructor
	Powerball(int whiteBallOne, int  whiteBallTwo, int  whiteBallThree, int  whiteBallFour, int  whiteBallFive, int redBall) {
		whiteBall[0] = whiteBallOne;
		whiteBall[1] = whiteBallTwo;
		whiteBall[2] = whiteBallThree;
		whiteBall[3] = whiteBallFour;
		whiteBall[4] = whiteBallFive;
		for (int firstWhiteBall = 0; firstWhiteBall < 5; firstWhiteBall++) {
			for (int secondWhiteBall = firstWhiteBall + 1; secondWhiteBall < 5; secondWhiteBall++) {
				if (whiteBall[firstWhiteBall] == whiteBall[secondWhiteBall]) {
					throw invalid_argument("Duplicate White Ball Enter.");
				}
			}
		}
		redBall = redBall;
	}

	int getWinningTicket(Powerball& winningTicket) {
		int matchedWhiteBall = 0;
		bool matchedRedBall = redBall == winningTicket.redBall;

		for (int drawingWhiteBall = 0; drawingWhiteBall < 5; drawingWhiteBall++) {
			for (int ticketWhiteBall = 0; ticketWhiteBall < 5; ticketWhiteBall++) {
				if (whiteBall[drawingWhiteBall] == winningTicket.whiteBall[ticketWhiteBall]) {
					matchedRedBall++;
				}

			}
		}

		if (matchedWhiteBall == 5 & redBall) {
			return 1600000000;
		}
		else if (matchedWhiteBall == 5) {
			return 1000000;
		}
		else if (matchedWhiteBall == 4 & redBall) {
			return 50000;
		}
		else if (matchedWhiteBall == 4 || (matchedWhiteBall == 3& redBall)) {
			return 100;
		}
		else if (matchedWhiteBall == 3 || (matchedWhiteBall == 2 & redBall)) {
			return 7;
		}
		else if (redBall) {
			return 4;
		}
		else {
			return 0;
		}
	}

	friend ostream& operator <<(ostream& os, Powerball& powerball) {
		os << powerball.whiteBall[0] << " ";
		os << powerball.whiteBall[1] << " ";
		os << powerball.whiteBall[2] << " ";
		os << powerball.whiteBall[3] << " ";
		os << powerball.whiteBall[4] << " ";
		os << powerball.redBall << " ";
		return os;
	}

};