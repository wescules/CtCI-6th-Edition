#include <iostream>
#include <string>
using namespace std;

//Implement an algorithm to determine if a string has all unique characters.

bool isunique(string str) {
	bool arr[256] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		if (arr[str[i]] == true)
			return false;
		arr[str[i]] = true;
	}
	return true;
}

int main() {
	bool a = isunique("welsey");
	a == true ? cout << "true" : cout << "False";
	system("pause");
	return 0;
}
