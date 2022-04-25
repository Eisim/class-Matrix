#include<iostream>
#include"Matrix.h"

int main() {
	int size[2];
	std::cout << "size(separated by a space):"<<std::endl;
	std::cin >> size[0] >> size[1];
	
	Matrix user(size[0],size[1]);

	std::cout << "write the elements as you want separated by a space:"<<std::endl;
	std::cin >> user;
	std::cout << user;

	Matrix m1(5, 2);
	m1[2][0] = 1;
	m1[2][1] = 3;
	m1[4][0] = -10;

	Matrix m2(5, 2);
	m2[2][0] = 9;
	m2[4][0] = 11;
	m2[2][1] = 7;
	
	Matrix c(5,2);
	Matrix u(2, 4);
	Matrix opermult;
	u.randomFill();
	std::cout << "m1=\n" << m1 << "m2=\n" << m2;
	c=m1+m2;
	std::cout << "c=m1+m2\n" << c;
	c = m1 - m2;
	std::cout << "c=m1-m2\n" << c;
	m2 *= 2;
	std::cout << "m2*=2\n" << m2;
	m1 += m1;
	std::cout << "m1+=m1\n" << m1;
	c = m1 * 2;
	std::cout << "c=m1*2\n" << c;

	std::cout << "m1=\n" << m1 << "u=\n" << u;
	m1 *= u;
	std::cout << "m1*=m2" << m1;
	opermult = m1 * u;
	std::cout << "m1*m2\n" << opermult;
	return 0;
}