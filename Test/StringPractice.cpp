#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<sstream>

using namespace std;

int test() {
	string user_name;
	cout << "Please enter you name: ";
	cin >> user_name;
	switch (user_name.size()) {
	case 0:
		cout << "Ah, the user no name."
			<< "well, ok, hi, user with no name.\n";
		break;
	case 1:
		cout << "A 1-character name? Hmm, have you read kafka?;"
			<< "hello, " << user_name << endl;
		break;
	default:
		cout << "Hello, " << user_name
			<< " -- happy to make your acquaintance!\n";
		break;
	}
	return 0;
}