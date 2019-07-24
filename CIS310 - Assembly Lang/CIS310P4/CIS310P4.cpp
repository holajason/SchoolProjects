
//Jason Lu
//CIS 310 Program 4
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

//THIS BIT USES THE LOGIC OF ADDER TO IMPLEMENT ADDITION. 
int Add(int x, int y)
{ 
	while (y != 0)
	{
		int carry = x & y;
		x = x ^ y;
		y = carry << 1;
	}
	return x;
}

//THIS BIT USES THE LOGIC OF ADDER TO IMPLEMENT MULTIPLICATION. 
int multiply(int x, int y)
{
	int val = 0;
	while (y--)
	{
		val = Add(val, x);
	}
	return val;
}

//THIS BIT USES THE LOGIC OF ADDER TO IMPLEMENT POWER. 
int power(int x, int y)
{
	int val = 1;
	while (y--) {
		val = multiply(val, x);
	}

	return val;
}

//THIS BIT USES THE LOGIC OF ADDER TO IMPLEMENT SUBSTRACTION. 
int substract(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	int sub = x ^ y, carry = (sub & y) << 1;
	return substract(sub, carry);
}

//THIS BIT USES THE LOGIC OF ADDER TO IMPLEMENT DIVISION. 
vector<int> division(int x, int y)
{
	vector<int> answer;
	int t = x;
	int q = 0;
	while (t >= y){
		t = t - y;
		q++;
	}

	int r = t;
	answer.push_back(q);
	answer.push_back(r);
	return answer;
}

int main()
{
	char op;
	string op1, op2;
	cin >> op1 >> op >> op2;
	unsigned int x, y;
	std::stringstream ss, ss1, ss2, ss3;
	ss1 << std::hex << op1;
	ss2 << std::hex << op2;
	ss1 >> x;
	ss2 >> y;
	if (op == '+')
	{
		int result = Add(x, y);
		ss << hex << result;
		string res = ss.str();
		transform(res.begin(), res.end(), res.begin(), ::toupper);
		cout << x << "+" << y << "=" << res;
		cout << endl;
	}

	else if (op == '-')
	{
		int result = substract(x, y);
		ss << hex << result;
		string res = ss.str();
		transform(res.begin(), res.end(), res.begin(), ::toupper);
		cout << x << "-" << y << "=" << res;
		cout << endl;
	}

	else if (op == '*')
	{
		int result = multiply(x, y);
		ss << hex << result;
		string res = ss.str();
		transform(res.begin(), res.end(), res.begin(), ::toupper);
		cout << x << "*" << y << "="<< res;
		cout << endl;
	}


	else if (op == '/')
	{
		vector<int> answer;
		answer = division(x, y);

		int quot = answer[0];
		ss << hex << quot;
		string res = ss.str();
		cout << x << "/" << y << "=";
		cout << "quotient " << res;

		int r = answer[1];
		ss3 << hex << r;
		string res1 = ss3.str();
		transform(res.begin(), res.end(), res.begin(), ::toupper);
		cout << ",remainder " << res1;
		cout << endl;
	}

	else if (op == '$')
	{
		int result = power(x, y);
		ss << hex << result;
		string res = ss.str();
		transform(res.begin(), res.end(), res.begin(), ::toupper);
		cout << x << "$" << y << "=" << res;
		cout << endl;
	}
}
