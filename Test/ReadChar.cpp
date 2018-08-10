#include"stdafx.h"
#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int readChar() {
	ofstream out_file(".\\test.txt");
	if (out_file) {
		out_file << "sdsfdgdg\n"
			<< "zzzzzz\n"
			<< "bye" << endl;
	}
	out_file.close();
	out_file.clear();
	ifstream in_file(".\\test.txt");
	if (!in_file) {
		cout << "read file error" << endl;
		return -1;
	}
	string tmpLine;
	vector<string> text;
	while (in_file >> tmpLine) {
		text.push_back(tmpLine);
		cout << "tmpLine : " << tmpLine << endl;
	}
	sort(text.begin(), text.end());
	for (int i = 0; i < text.size(); i++) {
		cout << "tmpLine : " << text[i] << endl;
	}
}
const char* msgToUser(const int num_tries) {
	static const char* userMessage[] = {
		"Oops! Nice guess but not quite it.",
		"Hmm, Sorry. Wrong again.",
		"Ah, this is harder than it looks, isn`t it?",
		"It must be getting pretty frustrating by now!"
	};
	return userMessage[num_tries];
}