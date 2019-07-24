/*
Create by Jason Lu
Date: 1/17/2018
CIS 310, Program 0
*/
#include <iostream>
using namespace std;

void binary(int num)
{
	for (int i = 7; i >= 0; --i)
	{
		if (i == 3)
		{
			cout << " ";
		}
		cout << ((num >> i) % 2);
	}
	cout << endl;
}

void decToHexa(int num)
{
	for (int i = 1; i >= 0; --i)
	{
		int rem = (((num) >> (4 * i)) % 16);
		if (rem < 10)
		{
			cout << rem;
		}
		else
		{
			cout << (char)('A' + (rem - 10));
		}
	}	
}

void decToBCD(int num)
{
	int a = num / 100;
	int b = (num / 10) % 10;
	int c = num % 10;
	if (a == 0)
	{
		cout << "0000";
	}
	else  if (a  == 1)
	{
		cout << "0001";
	}
	else if (a  == 2)
	{
		cout << "0010";
	}
	else if (a == 3)
	{
		cout << "0011";
	}
	else if (a == 4)
	{
		cout << "0100";
	}
	else if (a== 5)
	{
		cout << "0101";
	}
	else if (a == 6)
	{
		cout << "0110";
	}
	else if (a == 7)
	{
		cout << "0111";
	}
	else if (a  == 8)
	{
		cout << "1000";
	}
	else if (a == 9)
	{
		cout << "1001";
	}

	if ( b == 0)
	{
		cout << " 0000";
	}
	else  if ( b == 1)
	{
		cout << " 0001";
	}
	else if ( b == 2)
	{ 
		cout << " 0010";
	}
	else if (b  == 3)
	{ 
		cout << " 0011";
	}
	else if (b  == 4)
	{
		cout << " 0100";
	}
	else if ( b == 5)
	{
		cout << " 0101";
	}
	else if ( b  == 6)
	{
		cout << " 0110";
	}
	else if ( b == 7)
	{
		cout << " 0111";
	}
	else if ( b == 8)
	{
		cout << " 1000";
	}
	else if ( b  == 9)
	{
		cout << " 1001";
	}

	if (c == 0)
	{
		cout << " 0000";
	}
	else  if ( c == 1)
	{
		cout << " 0001";
	}
	else if ( c == 2)
	{
		cout << " 0010";
	}
	else if ( c == 3)
	{
		cout << " 0011";
	}
	else if ( c == 4)
	{
		cout << " 0100";
	}
	else if ( c == 5)
	{
		cout << " 0101";
	}
	else if ( c == 6)
	{
		cout << " 0110";
	}
	else if ( c == 7)
	{
		cout << " 0111";
	}
	else if ( c == 8)
	{
		cout << " 1000";
	}
	else if ( c == 9)
	{
		cout << " 1001";
	}
	
}

int main()
{
	for (int i = 0; i <= 255; i++)
	{
		cout << "DECIMAL: " << i << endl;;
		cout << "BINARY: ";
		binary(i);
		cout << "DEXDECIMAL: ";
		decToHexa(i);
		cout << endl;
		cout << "BCD: ";
		decToBCD(i);
		cout << endl << endl;
	}
	
	return 0;
}
