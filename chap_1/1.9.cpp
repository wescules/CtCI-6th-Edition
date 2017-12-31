#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;

// Given two strings s1 and s2, write code to check if s2
// is a rotation of s1 using only one call to isSubstring

bool strRotate(string s1, string s2) {
	string s = s1 + s1;
	return s.find(s2) != string::npos;
}


int main() {
	strRotate("waterbottle", "erbottlewat") ? cout << "is substring" : cout << "is NOT substring" << endl;
	system("pause");
	return 0;
}
