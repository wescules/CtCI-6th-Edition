#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;

// Given an image represented by an NxN matrix, where each pixel in the image is 4
// bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

void rotate(vector<vector<int>> vect) {
	
	for (int i = vect.size()-1; i > -1; i--) {
		for (int j = 0; j < vect[i].size(); j++) {
			cout << vect[j][i]<<" ";
		}
		cout << endl;
	}

}


int main() {
	vector<vector<int>> vect{ { 3, 5, 1 },
							  { 4, 8, 6 },
							  { 7, 2, 9 } };
		
	rotate(vect);
	
	system("pause");
	return 0;
}
