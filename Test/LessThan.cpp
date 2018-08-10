#include"stdafx.h"
#include<vector>
#include<algorithm>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class LessThan {
public:
	bool operator()(const string & s1,
		const string & s2) {
		return s1.size() > s2.size();
	}
	
};