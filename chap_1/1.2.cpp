#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Given two strings, write a method to decide if one is a permutation of the other.
bool perm(string a, string b) {
	if (a.length() != b.length())
		return false;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return a != b ? false : true;
}

int main() {
	string a = "racecar";
	string b = "racwcar";
	bool f = perm(a, b);
	f == true ? cout << "true" : cout << "false";
	system("pause");
	return 0;
}
