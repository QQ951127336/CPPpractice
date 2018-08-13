#include"stdafx.h"
#include<iostream>

using namespace std;

typedef float elemType;

class Matrix
{
	friend Matrix operator+( const Matrix&, const Matrix&);
	friend Matrix operator*(const Matrix&, const Matrix&);

public:
	Matrix( const elemType* );
	Matrix( elemType = 0., elemType = 0., elemType = 0.,
		elemType = 0., elemType = 0., elemType = 0.,
		elemType = 0., elemType = 0., elemType = 0.,
		elemType = 0.,elemType = 0.,elemType = 0.
	);
	int rows() const {
		return 4;
	}
	int cols() const {
		return 4;
	}

};
