#include"stdafx.h"
#include<iostream>
#include<vector>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<sstream>
#include<iostream>
using namespace std;

void swap(int&, int&);
void sort(vector<int>&);
void display(vector<int>);
int test();
int vectorAndArrayTest();
int main() {
	vectorAndArrayTest();
	test();
	vector<int>randomList(10);
	srand((unsigned)time(NULL));
	for (int i = 0; i < randomList.size(); i++) {
		randomList[i] = rand() % 100;
	}
	display(randomList);
	sort(randomList);
	display(randomList);
	ofstream outfile("out_data.txt");
	if (outfile) {
		outfile << "xssdsdw1234567";
	}
	outfile.close();
	outfile.clear();
	ifstream infile("out_data.txt");
	int num_tries = 100;
	int num_cor = 0;
	string tmpLine; 
	infile >> tmpLine;
	cout << "oss : " << tmpLine;
	infile.close();
	infile.clear();
	return 0;

}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void sort(vector<int>& list) {
	int size = list.size();
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (list[j] > list[j - 1])
				swap(list[j], list[j - 1]);
		}
	}
}
void display(vector<int> list) {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i]<<" ";
	}
	cout << endl;
}
template <typename elemType> 
void displayMessage(const string &msg, const vector<elemType> &vec) {
	cout << msg << " ";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
}
class iterator_overflow : public exception {
public :
	iterator_overflow(int index,int max )
		: _index(index), _max(max)
	{}
	int index() { return _index; }
	int max() { return _max; }
private:
	int _index;
	int _max;
};