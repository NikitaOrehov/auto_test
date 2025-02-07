#include "Vector.h"

Vector::Vector() {
	_size = 3;
	_array = new int[_size];
	memset(_array, 0, _size * sizeof(int));
}

Vector::Vector(size_t size) : _size(size) {
	if (size == 0) {
		throw std::invalid_argument("incorrect input");
	}
	_array = new int[_size];
	memset(_array, 0, _size * sizeof(int));
}

Vector Vector::operator+(const Vector& vec) const {
	if (_size != vec._size) {
		throw std::invalid_argument("incorrect size vec");
	}
	Vector res(_size);
	for (int i = 0; i < _size; i++) {
		res._array[i] = _array[i] + vec._array[i];
	}
	return res;
}

int& Vector::operator[](size_t index) {
	return _array[index];
}

int& Vector::at(int index) {
	if (index >= _size || index < 0) {
		throw std::out_of_range("out of range");
	}
	return _array[index];
}

Vector::~Vector() {
	delete _array;
}