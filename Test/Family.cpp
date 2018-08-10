#include"stdafx.h"
#include<map>
#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
typedef vector<string> vstring;
map<string, vstring> faimlies;

void populate_map(ifstream &nameFile, map<string, vstring> &families) {
	string textline;
	while (getline(nameFile, textline)) {
		string fam_name;
		vector<string> child;
		string::size_type
			pos = 0, prev_pos = 0,
			text_size = textline.size();

		while ((pos = textline.find_first_of(' ', pos))!=string::npos) {
			string::size_type end_pos = pos - prev_pos;
			if (!prev_pos) {
				fam_name = textline.substr(prev_pos, end_pos);
			}
			else {
				child.push_back(textline.substr(prev_pos, end_pos));
			}
			prev_pos = ++pos;
		}
		if (prev_pos < text_size) {
			child.push_back(textline.substr(prev_pos, pos-prev_pos));
		}
		if (!families.count(fam_name))
			families[fam_name] = child;
		else
			cerr << "Oops! We already have a "
			<< fam_name << " is not currently entered.\n";
		return;
	}
}