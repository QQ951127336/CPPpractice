#include"stdafx.h"
#include"Stack.h"
#include<string>
using namespace std;

bool Stack::pop(string &elem) {
	if (empty())return false;
	elem = _stack.back();
	return true;
}

bool Stack::peek(string &elem) {
	if (empty())return false;
	elem = _stack.back();
	return true;
}

bool Stack::push(string &elem) {
	if (full())return false;
	_stack.push_back(elem);
	return true;
}

