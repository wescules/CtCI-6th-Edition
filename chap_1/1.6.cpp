#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;


// Implement a method to perform basic string compression using the counts of repeated characters.
// For example, the string a a b c c c c c a a a would become a2blc5a3. If the "compressed" string
// would not become smaller than the original string, your method should return the original string.

string compress(string str) {
	string nStr = "";
	

	for (int i = 0; i < str.length()-1; i++) {
		int count = 1;
		nStr += str[i];
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[i + 1]) {
				count++;
				i++;
			}
			else
				break;
		}
		nStr += to_string(count);
	}
	return nStr;
}

int main() {
	cout << compress("aabcccccaaa");
	system("pause");
	return 0;
}
