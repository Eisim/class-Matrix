#pragma once
#include<iostream>
class Vector {
	double* data = 0;
	int n = 0;

public:

	Vector();
	Vector(int n);  // +
	Vector(const Vector& v);  // +
	~Vector();  // +

	void resize(int newSize);  // +


	Vector& operator=(const Vector& v);  // +
	Vector operator+(const Vector& v) const;  // +
	Vector operator-(const Vector& v) const;  // +
	Vector& operator+=(const Vector& v); //return *this   // +
	Vector& operator-=(const Vector& v);   // +
	Vector operator*(double c) const;//Vector v2=v*2.0;   // +

	friend Vector operator*(double c, Vector& v);
	Vector& operator*=(double c);//Vecotr v2*=2;   // +



	double dot(const Vector& v) const; //+
	double getNorm() const; //  +

	double& operator[](int i);//v[i] // +
	double operator[](int i) const;//v[i] // +

	void randomfill(); // +
	void print() const; // +
	friend std::ostream& operator<<(std::ostream& out, const Vector& v);
	int  getSize() const; // +

};