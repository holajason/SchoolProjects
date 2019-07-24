#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int isKeyword(char buffer[]) {
	char keywords[6][15] = { "else", "if", "int", "return", "void", "while" };
	int i;
	bool flag = false;
	for (i = 0; i < 32; ++i) {
		if (strcmp(keywords[i], buffer) == 0) {
			flag = true;
			break;
		}
	}
	return flag;
}

bool isInteger(char ch) {
	if (ch == '0' || ch == '1' || ch == '2' ||
		ch == '3' || ch == '4' || ch == '5' ||
		ch == '6' || ch == '7' || ch == '8' ||
		ch == '9' || ch == '.' || ch == ' ' ||
		ch == '\n' || ch == ';') {
		return true;
	}
	return false;
}

bool isDelimiter(char ch) {
	if (ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
		ch == '(' || ch == ')' || ch == ',' || ch == ';') {
		return true;
	}
	else {
		return false;
	}
}

bool isOperator(char ch) {
	if (ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == '>' || ch == '<' ||
		ch == '=' || ch == '%') {
		return (true);
	}
	return (false);
}

//bool isInt(char ch){
//    if(ch == '0' || ch == '1' || ch =='2'||
//       ch == '3' || ch == '4' || ch == 5 ||
//       ch == '6' || ch == '7' || ch == '8'||
//       ch == '9' || ch == '-' || ch > 0){
//		return true;
//    }
//	return false;
//}

int main() {
	char ch, buffer[15], arr[30];
	ifstream inFile("input.txt");
	ofstream outFile("output.txt");
	int mark[999] = {0};
	int i, j = 0;
	int key= 0, iden = 0, oprt = 0, num = 0, deli = 0, temp = 0;
	vector<string>keywords;
	vector<string>integers;
	vector<string>realNum;
	vector<char>identifiers;
	vector<char>rationalOps;
	vector<char>operators;
	vector<char>delimiters;
	if (!inFile.is_open()) {
		cout << "Error occured while opening the file.\n";
		exit(0);
	}

	while (!inFile.eof()) {
		ch = inFile.get();
		for (i = 0; i < 20; ++i) {
			if (isDelimiter(ch) == true) {
				int temp = ch;
				if (mark[temp] != true) {
					delimiters.push_back(ch);
					mark[temp] = 1;
					deli++;
				}
			}
		}

		for (i = 0; i < 20; ++i) {
			if (isOperator(ch) == true) {
				int temp = ch;
				if (mark[temp] != 1) {
					operators.push_back(ch);
					mark[temp] = 1;
					oprt++;
				}
			}
		}

		if (ch == '0' || ch == '1' || ch == '2' ||
			ch == '3' || ch == '4' || ch == '5' ||
			ch == '6' || ch == '7' || ch == '8' ||
			ch == '9')
			arr[temp++] = ch; {
			if ((ch == ' ' || ch == '\n' || ch == ';'
				||ch == '.' ) && (temp != 0)) {
				arr[temp] = '\0';
				temp = 0;
				char array[30];
				strcpy(array, arr);
				integers.push_back(arr);
				num++;
			}
		}

		if (isalnum(ch)) {
			buffer[j++] = ch;
		}
		else if ((ch == ' ' || ch == '\n') && (j != 0)) {
			buffer[j] = '\0';
			j = 0;

			if (isKeyword(buffer) == true) {
				keywords.push_back(buffer);
				key++;
			}
			else if (buffer[0] >= 97 && buffer[0] <= 122) {
				if (mark[buffer[0] - 'a'] != 1) {
					identifiers.push_back(buffer[0]);
					++iden;
					mark[buffer[0] - 'a'] = 1;
				}
			}
		}
	}

	outFile << "*****Keyword Table*****" << endl;
	outFile <<setw(10)<<"Keyword"<< setw(22) << "Index\n";
	for (int i = 0; i<key; ++i) {
		outFile << setw(10) <<keywords[i] << setw(20)<<right << i + 1 << endl;
	}

	outFile << "\n*****Special Symbol Table*****" <<endl;
	outFile << setw(10) << "Speical Symbols" << setw(18) << "Index" << endl;
	for (int i = 0; i < deli; i++) {
		outFile << setw(10) << delimiters[i] << setw(20) << right << i + 1 << endl;
	}

	outFile << "\n*****Operator Table*****" << endl;
	outFile << setw(10) << "Operators" << setw(22) << "Index" << endl;
	for (int i = 0; i < oprt; i++) {
		outFile << setw(10) << operators[i] << setw(20) << right << i + 1 << endl;
	}

	outFile << "\n*****Number Table*****" << endl;
	outFile << setw(10) << "Number" << setw(22) << "Index" << setw(20) << "Attribute" <<endl;
	for (int f = 0; f<num; ++f) {
		outFile << setw(10) << integers[f] << setw(20) << right << f + 1 << setw(20) << right <<"integer" << endl;;
	}

	outFile << "\n*****Identifier Table*****" << endl;
	outFile << setw(10) << "Identifiers" << setw(20) << "Index" << endl;
	for (int i = 0; i<iden; ++i) {
		outFile << setw(10) << identifiers[i] << setw(20) << right << i + 1 << endl;
	}

	outFile << "\n*****Token Table*****"<<endl;
	outFile << setw(10) << "Token" << setw(22) << "Class" << setw(19) << "Index" << endl;
	for (int i = 0; i<iden; ++i) {
		outFile << setw(10) << identifiers[i] << setw(20) << right << "id" << setw(20) << right << i + 1 << endl;
	}
	for (int i = 0; i<num; ++i) {
		outFile << setw(10) << integers[i] << setw(20) << right << "num" << setw(20) << right << i + 1 << endl;
	}
	for (int i = key - 1; i >= 0; --i) {
		outFile << setw(10) << keywords[i] << setw(20) << "kw" << setw(20) << right << i + 1 << endl;
	}

	for (int i = 0; i < oprt; i++) {
		outFile << setw(10) << operators[i] << setw(20) << "oprt" << setw(20) << right << i + 1 << endl;
	}
	for (int i = 0; i < deli; i++) {
		outFile << setw(10) << delimiters[i] << setw(20) << "deli" << setw(20) << right << i + 1 << endl;
	}

	inFile.close();
	outFile.close();
	return 0;
}



//    cout <<"Rational Operators: ";
//    for(int f=0;f<lc;++f){
//        cout<<rationalOps[f]<<", ";
//    }
//}