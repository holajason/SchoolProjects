//#include <string>
//#include <stack>
//#include <queue>
//#include <iostream>
//#include <stdlib.h>
//#include <math.h>
///* When I wrote this, only God and I understood what I was doing*/
//using namespace std;
//
//
//
//bool isDigit(char ch) {
//	if (ch == '0' || ch == '0' || ch == '0' ||
//		ch == '0' || ch == '0' || ch == '0' ||
//		ch == '0' || ch == '0' || ch == '0' ||
//		ch == '0') {
//		return true;
//	}
//	return false;
//}
//
//
//// Function to find precedence of  
//// operators. 
//int precedence(char op) {
//	if (op == '+' || op == '-')
//		return 1;
//	if (op == '*' || op == '/')
//		return 2;
//	return 0;
//}
//
//// Function to perform arithmetic operations. 
//int applyOp(int a, int b, char op) {
//	switch (op) {
//	case '+': 
//		return a + b;
//	case '-': 
//		return a - b;
//	case '*':
//		return a * b;
//	case '/':
//		return a / b;
//	default:
//		cout << "unable to parse." << endl;
//		break;
//	}
//}
//
//// Function that returns value of expression after evaluation. 
//int evaluate(string tokens) {
//	stack <int> values;
//	stack <char> ops;
//	for (int i = 0; i < tokens.length(); i++) {
//		if (tokens[i] == ' ') { 	// Current token is a whitespace, skip it. 
//			continue;
//		}
//		else if (tokens[i] == '(') {
//			ops.push(tokens[i]);
//		}
//		// Current token is a number, push it to stack for numbers. 
//		else if (isDigit(tokens[i])) {
//			int val=0;
//			// There may be more than one digits in number. 
//			while (i < tokens.length() && isdigit(tokens[i])) {
//				val = (val * 10) + (tokens[i] - '0');
//				i++;
//	
//			}
//			values.push(tokens[i]);
//		}
//		// Closing brace encountered, solve entire brace. 
//		else if (tokens[i] == ')'){
//			while (!ops.empty() && ops.top() != '('){
//				int val2 = values.top();
//				values.pop();
//				int val1 = values.top();
//				values.pop();
//				char op = ops.top();
//				ops.pop();
//				values.push(applyOp(val1, val2, op));
//			}
//
//			// pop opening brace. 
//			ops.pop();
//		}
//
//		// Current token is an operator. 
//		else{
//			// While top of 'ops' has same or greater  
//			// precedence to current token, which 
//			// is an operator. Apply operator on top  
//			// of 'ops' to top two elements in values stack. 
//			while (!ops.empty() && precedence(ops.top())
//				>= precedence(tokens[i])) {
//				int val2 = values.top();
//				values.pop();
//				int val1 = values.top();
//				values.pop();
//				char op = ops.top();
//				ops.pop();
//				values.push(applyOp(val1, val2, op));
//			}
//
//			// Push current token to 'ops'. 
//			ops.push(tokens[i]);
//		}
//	}
//
//	// Entire expression has been parsed at this 
//	// point, apply remaining ops to remaining 
//	// values. 
//	while (!ops.empty()) {
//		int val2 = values.top();
//		values.pop();
//
//		int val1 = values.top();
//		values.pop();
//
//		char op = ops.top();
//		ops.pop();
//
//		values.push(applyOp(val1, val2, op));
//	}
//
//	// Top of 'values' contains result, return it. 
//	return values.top();
//}
//
//int main() {
//	cout << evaluate("5*3+2=");
//	return 0;
//}
