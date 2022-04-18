#pragma once
#include"Vector.h"
class Matrix {

public:
	int size[2];
	Vector* data;

	Matrix();
	~Matrix();
	Matrix(const int size1, const int size2);
	Matrix(const Matrix& m);

	Matrix& operator=(const Matrix& m);
	Matrix& operator+=(const Matrix& m);
	Matrix& operator-=(const Matrix& m);
	Matrix operator+(const Matrix& m) const;
	Vector& operator[](int i);
	Vector operator[](int i) const;


	friend std::ostream& operator<<(std::ostream& out, const Matrix& m);


};