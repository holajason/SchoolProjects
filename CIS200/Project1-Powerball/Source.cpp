#include "Powerball.h"

int main() {
	srand(unsigned(time(NULL)));
	int choice, totalSpent = 0, totalWon = 0;
	int displayTicket = 0, numTickets = 0;
	int menuOption = 0;
	while (menuOption != 3) {
		Powerball winningTicket;
		cout << "1. Random Pick" << endl;
		cout << "2. Pick You Own Ball" << endl;
		cin >> choice; 
		if (choice == 1) {
			cout << "How many ticket would you like to purchase? ";
			cin >> numTickets;
			cout << "     1. Display All Tickets  " << endl;
			cout << "     2. Display Winning Tickets " << endl;
			cin >> displayTicket;
			cout << "The Winning Ticket Number Are : " << winningTicket << endl;
			for (int ticketToBuy = 0; ticketToBuy < numTickets; ticketToBuy++)
			{
				Powerball myTicket;
				int winnings = myTicket.getWinningTicket(winningTicket);
				totalWon += winnings;
				if (displayTicket == 1)
				{
					cout << myTicket << endl;
				}
				if (displayTicket == 2 && winnings > 0) {
					cout << "Your Winning Tickets: " << myTicket << endl;
				}
			}
		}
		if (choice == 2) {
			int whiteBallOne, whiteBallTwo, whiteBallThree,
				whiteBallFour, whiteBallFive, redBall;
		
			cout << "Enter Five whiteball(1-69) and One Red Ball(1-26) " << endl;
			cin >> whiteBallOne >> whiteBallTwo >> whiteBallThree >>
				whiteBallFour >> whiteBallFive >> redBall;
			try {
				Powerball myTicket(whiteBallOne, whiteBallTwo,
					whiteBallThree, whiteBallFour, whiteBallFive, redBall);
				totalSpent += 2;
				totalWon += myTicket.getWinningTicket(winningTicket);
			}
			catch (exception& e) {
				cout << e.what();
				}
			cout << "The Winning Ticket Number Are : " << winningTicket << endl;
		}

		totalSpent += numTickets * 2;
		cout << "\n***********************************" << endl;
		cout << "*           Game Summary          *" << endl;
		cout << "***********************************" << endl;
		cout << "Total Winning Amount: " << totalWon << endl;
		cout << "Total Spend: " << totalSpent << endl;
		cout << "Net Lost: " << totalSpent - totalWon << endl;
		cout << "***********************************" << endl;

		cout << "1. Play Again" << endl;
		cout << "2. Quit" << endl;
		cin >> menuOption;
	}
	system("pause");
	return 0;

}