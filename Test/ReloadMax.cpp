#include"stdafx.h"
#include<vector>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

inline int max(int t1, int t2) {
	return t1 > t2 ? t1 : t2;
}

inline float max(float t1, int t2) {
	return t1 > t2 ? t1 : t2;
}

inline string max(string t1, string t2) {
	return t1 > t2 ? t1 : t2;
}

inline int max(const vector<int> &vec) {
	return *max_element(vec.begin(), vec.end());
}

inline float max(const vector<float> &vec) {
	return *max_element(vec.begin(), vec.end());
}

inline string max(const vector<string> &vec) {
	return *max_element(vec.begin(), vec.end());
}

inline int max(const int *parray, int size) {
	return *max_element(parray, parray + size);
}

inline float max(const float *parray, int size) {
	return *max_element(parray, parray + size);
}

inline string max(const string *parray, int size) {
	return *max_element(parray, parray + size);
}
