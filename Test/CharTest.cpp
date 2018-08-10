#include"stdafx.h"
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int charTest() {
	const int nm_size = 128;
	char user_name[nm_size];
	cout << "Please enter your name :";
	cin >> setw(nm_size) >> user_name;
	switch (strlen(user_name)) {
	case 127:
		cout << "That is a very big name, indeed --"
			<< "we may have needed to shorten it!\n"
			<< "In any case.\n";
	default:
		cout << "Hello " << user_name
			<< " -- happy to make your acquaintance!\n";
		break;
	}
	return 0;
}