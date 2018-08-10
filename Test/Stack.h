#pragma once
#include"stdafx.h"
#include<string>
#include<vector>

using namespace std;

class Stack {
public:
	bool pop(string&);
	bool push(string&);
	bool peek(string&);
	bool empty() const { return _stack.empty(); }
	bool full() const { return _stack.size() == _stack.max_size(); }
	int size() const { return _stack.size(); }

private:
	vector<string> _stack;
	
};
