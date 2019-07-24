//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int expression();
//
//char token() {
//	char ch;
//	cin >> ch;
//	return ch;
//}
//
//int factor() {
//	int val;
//	char ch = token();
//	if (ch == ' ') {
//		val = expression();
//
//	}
//	else if (isdigit(ch)) {
//		cin.unget();
//		cin >> val;
//	}
//	else throw std::runtime_error("Failed Parsing");
//	return val;
//}
//
//int term() {
//
//	int val = factor();
//	char ch = token();
//	if (ch == '*' || ch == '/') {
//		int b = term();
//		if (ch == '*')
//			val *= b;
//		else
//			val /= b;
//	}
//	else cin.unget();
//	return val;
//}
//
//int expression() {
//	int val = term();
//	char ch = token();
//	if (ch == '-' || ch == '+') {
//		int b = expression();
//		if (ch == '+')
//			val += b;
//		else
//			val -= b;
//	}
//	else cin.unget();
//	return val;
//}
//
//int main() {
//	cout << "Enter Expression: ";
//	try {
//		cout << expression();
//	}
//	catch (exception &e) {
//		cout << e.what();
//	}
//	return 0;
//}