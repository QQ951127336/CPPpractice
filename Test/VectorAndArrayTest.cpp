#include"stdafx.h"
#include<iostream>
#include<vector>

using namespace std;

int vectorAndArrayTest() {
	vector<int> ivec;
	int ival;
	while (cin >> ival) {
		ivec.push_back(ival);
	}
	int sum = 0;
	for (int i = 0; i < ivec.size(); i++) {
		sum += ivec[i];
	}
	cout << "sum : " << sum;
	return 0;
}