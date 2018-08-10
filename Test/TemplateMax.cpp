#include"stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

template <typename elemType>
inline elemType	max(elemType t1, elemType t2) {
	return t1 > t2 ? t1 : t2;
}

template <typename elemType>
inline elemType max(const vector<elemType> &vec) {
	return *max_element(vec.begin(), vec.end());
}

template <typename elemType>
inline elemType max(const elemType *parray, int size) {
	return *max_element(parray, parray + size);
}
