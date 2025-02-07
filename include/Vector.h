#pragma once
#include <stdexcept>
#include <iostream>

class Vector {
private:
	size_t _size;
	int* _array;
public:
	Vector();
	Vector(size_t size);
	Vector operator+(const Vector& vec) const;
	int& operator[](size_t index);
	int& at(int index);
	~Vector();
};