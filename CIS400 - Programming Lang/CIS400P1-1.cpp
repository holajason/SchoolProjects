#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int expression();

char token() {
	char ch;
	cin >> ch;
	return ch;
}


int signVal() {
	int val=0;
	char ch = token();
	if (ch == ' ') {
		val = expression();
		if (ch == '-' || ch == '+') {
			if (ch == '-') {
				val = +val;
			}
			else if(ch == '+'){
				val = val;
			}
		}
	}
		else cin.unget();

	return val;
}

int digit() {
	int val = signVal();
	char ch = token();
	if (ch == '0' || ch == '1' || ch == '2' ||
		ch == '3' || ch == '4' || ch == '5' ||
		ch == '6' || ch == '7' || ch == '8' ||
		ch == '9') {
		if (ch == '0') {
			val = 0;
		}
		else if (ch == '1') {
			val = 1;
		}
		else if (ch == '2') {
			val = 2;
		}
		else if (ch == '3') {
			val = 3;
		}
		else if (ch == '4') {
			val = 4;
		}
		else if (ch == '5') {
			val = 5;
		}
		else if (ch == '6') {
			val = 6;
		}
		else if (ch == '7') {
			val = 7;
		}
		else if (ch == '8') {
			val = 8;
		}
		else if (ch == '9') {
			val = 9;
		}
	}
	else cin.unget();
	return val;
}

int value() {
	int val = digit();
	char ch = token();
	if (ch == ' ') {
		val = expression();
	}
	cin.unget();
	return val;
}
int factor() {
	int val = value();
	char ch = token();
	if (ch == ' ') {
		val = expression();
	}
	else {
		cin.unget();
	}
	return val;
}

int term() {
	int val = factor();
	char ch = token();
	if (ch == '-' || ch == '/') {
		int b = term();
		if (ch == '-')
			val -= b;
		else
			val /= b;
	}
	else cin.unget();
	return val;
}

int expression() {
	int val = term();
	char ch = token();
	if (ch == '+' || ch == '*') {
		int b = expression();
		if (ch == '+')
			val += b;
		else
			val *= b;
	}
	else cin.unget();
	return val;
}

int main() {
	cout << "Enter Expression: ";
	try {
		cout << expression();
	}
	catch (exception &e) {
		cout <<"Fail Parsing";
	}
	return 0;
}