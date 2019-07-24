#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isDigit(char ch) {
	if (ch == '0' || ch == '1' || ch == '2' ||
		ch == '3' || ch == '4' || ch == '5' ||
		ch == '6' || ch == '7' || ch == '8' ||
		ch == '9') {
		return true;
	}
	else {
		return false;
	}
}

int expression();

char operators() {
	char ch;
	cin >> ch;
	return ch;
}

//int factor() {
//	int val;
//	char ch = operators();
//	if (ch == ' ') {
//
//	}
//	if (ch == '(') {
//		val = expression();
//		ch = operators();
//		if (ch != ')') {
//			string error = string("Expected ) \n");
//			throw runtime_error(error.c_str());
//		}
//	}
//	else if (isDigit(ch)==true) {
//		cin.unget();
//		cin >> val;
//	}
//	else throw runtime_error("Failed Parsing\n");
//	return val;
//}


int signVal() {
	int val;
	char ch = operators();
	//val = expression();
	if (ch == '-' || ch == '+') {
		val = expression();
		int b = signVal();
		if (ch == '-') {
			val = -b;
		}
		else {
			val = b;
		}

	}
	else throw std::runtime_error("Failed Parsing");
	return val;
}

int digit() {
	int val = signVal();
	char ch = operators();
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

int unsignedVal() {
	int val = digit();
	char ch = operators();
	if (isdigit(ch)) {
		cin.unget();
		cin >> val;
	}
	return val;
}


int value() {
	int val = unsignedVal();
	char ch = operators();
	if (ch == '.') {
		int b = unsignedVal();
		val = b;
	}
	else cin.unget();
	return val;
}

int term() {
	int val;
	char ch = operators();
	if (ch == '+' || ch == '*') {
		int b = term();
		if (ch == '+')
			val += b;
		else
			val *= b;
	}
	else cin.unget();
	return val;
}


int expression() {
	int val = term();
	char ch = operators();
	if (ch == '-' || ch == '/') {
		int b = expression();
		if (ch == '/')
			val /= b;
		else
			val -= b;
	}
	else cin.unget();
	return val;
}


int main() {
	cout << "Expression Equation: " << endl;
	try {
		cout << expression();
	}
	catch (exception &e) {
		cout << e.what();
	}
	return 0;
}