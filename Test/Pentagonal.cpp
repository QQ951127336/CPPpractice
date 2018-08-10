#include"stdafx.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

bool calc_elements(vector<int>&vec, int pos) {
	int pn = pos*(3 * pos - 1) / 2;
	vec.push_back(pn);
	return true;
}

void display(vector<int> vec, const string title, ostream &os = cout) {
	os <<title;
	for (int i = 0; i < vec.size(); i++) {
		os << " "<<vec[i] ;
	}
	os << endl;
}