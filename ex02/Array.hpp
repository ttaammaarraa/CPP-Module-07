#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array
{

private:
	T* _data;
	unsigned int _size;

public:
	Array();
	explicit Array(unsigned int n);
	Array(Array const& other);
	Array& operator=(Array const& other);
	~Array();

	T& operator[](unsigned int index);
	T const& operator[](unsigned int index) const;

	unsigned int size() const;

};

#include "Array.tpp"

#endif
