#include<iostream>
#include"Matrix.h"

int main() {


	Matrix m1(5, 2);
	m1[2][0] = 1;
	m1[2][1] = 3;
	m1[4][0] = -10;

	Matrix m2(5, 2);
	m2[2][0] = 9;
	m2[4][0] = 11;
	m2[2][1] = 7;
	Matrix c(5,2);
	std::cout << "m1=\n" << m1 << "m2=\n" << m2;
	c=m1+m2;
	std::cout << "m1+m2\n" << c;

	return 0;
}