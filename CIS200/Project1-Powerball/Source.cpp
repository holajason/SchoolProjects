#include "Powerball.h"
#include <time.h>
int main() {
	srand(unsigned(time(0)));
	Powerball winningTicket;
	int choice, numTickets, totalSpent=0, totalWon=0;
	cout << "1. Random Pick" << endl;
	cout << "2. Pick You Own Ball" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		int displayTicket;
		cout << "How many ticket would you like to purchase? ";
		cin >> numTickets;
		cout << "Do you want to see all purchased tickets or just winning Ticket? \n1: All\n2: Winning Ticket" << endl;
		cin >> displayTicket;

		for (int ticketToBuy = 0; ticketToBuy < numTickets; ticketToBuy++)
		{
			Powerball myTicket;

			int winnings = myTicket.getWinningTicket(winningTicket);
			totalWon += winnings;

			if (displayTicket == 1 || (displayTicket == 2 && winnings > 0))
			{
				cout << myTicket << endl;
			}
		}
	case 2:

		break;
	default:
		break;
	}
	
}