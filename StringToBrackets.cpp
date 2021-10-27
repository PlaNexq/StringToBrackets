//============================================================================
// Name        : StringToBrackets.cpp
// Author      : PlaNex
// Description : String converter in C++, converts each character to '(' if it appears only once, to ')' if it appears multiple times
//============================================================================

#include <iostream>
#include <string>
#include <map>
using namespace std;

string stringToBrackets (string in) {
	string result;
	map<char, int> m;

	//count each character
	for (char c : in){
		c = tolower(c);
		m[c]++;
	}

	//convert each character based on its count
	for (char c : in){
		c = tolower(c);
		if (m[c] > 1) result += ')';
		else result += '(';
	}

	return result;
}

int main() {
	//example
	string s = "Success";
	cout << s << " : " << stringToBrackets(s) << endl;

	return 0;
}
