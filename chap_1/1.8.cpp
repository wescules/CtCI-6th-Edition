#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;



void zero(vector<vector<int>> vect, int a,  int b) {
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect[i].size(); j++) {
			if (i == a || j == b)
				cout << "0" << " ";
			else
				cout << vect[i][j] << " ";
		}
		cout << endl;
	}
}


void zeroMatrix(vector<vector<int>> vect) {
	vector <pair<int, int>> mat;
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect[i].size(); j++) {
			if(vect[i][j] == 0)
				mat.push_back(make_pair(i, j));
		}
	}
	
	for (int i = 0; i < mat.size(); i++) {
		zero(vect, mat[i].first, mat[i].second);
	}
}



int main() {
	vector<vector<int>> vect{ { 3, 5, 1 },
							              { 4, 1, 0 },
							              { 1, 2, 9 } };

	
	zeroMatrix(vect);
	system("pause");
	return 0;
}
