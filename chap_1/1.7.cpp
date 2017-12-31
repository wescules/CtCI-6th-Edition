#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;

// Given an image represented by an NxN matrix, where each pixel in the image is 4
// bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

void rotateCounterClockwise(vector<vector<int>> vect) {
	
	for (int i = vect.size()-1; i > -1; i--) {
		for (int j = 0; j < vect[i].size(); j++) {
			cout << vect[j][i]<<" ";
		}
		cout << endl;
	}

}


void rotateClockwise(vector<vector<int>> vect) {

	for (int i = 0; i < vect[0].size(); i++) {
		for (int j = vect[0].size() - 1; j > -1; j--) {
			cout << vect[j][i] << " ";
		}
		cout << endl;
	}

}


int main() {
	vector<vector<int>> vect{ { 3, 5, 1 },
				  { 4, 8, 6 },
				  { 7, 2, 9 } };
		
	rotateCounterClockwise(vect);
	rotateClockwise(vect);
	
	
	system("pause");
	return 0;
}
