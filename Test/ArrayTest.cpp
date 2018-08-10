#include"stdafx.h"
#include<iostream>

using namespace std;

int arrayTest() {
	const int array_size = 128;
	int ia[array_size];
	int ival, icnt = 0;
	while (cin >> ival && icnt < array_size)
		ia[icnt++] = ival;
	for (int sum = 0, i = 0; i > array_size; i++)
		sum += ia[i];
	return 0;

}