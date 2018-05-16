#include "array.h"

void Array::read()
{
	std::cout << "Enter length of array: ";
	std::cin >> _len;
	_arr = new int[_len];

	for (int i = 0; i < _len; ++i)
	{
		std::cout << "[" << i << "]: ";
		std::cin >> _arr[i];
	}
}

void Array::print()
{
	for (int i = 0; i < _len; ++i)
		std::cout << _arr[i] << " ";
	std::cout << std::endl;
}

int Array::find(int data)
{
	for (int i = 0; i < _len; ++i)
		if (_arr[i] == data)
			return i;
	return -1;
}

void Array::sort()
{
	for (int i = 0; i < _len - 1; ++i)
		for (int j = i + 1; j < _len; ++j)
			if (_arr[i] > _arr[j])
				std::swap(_arr[i], _arr[j]);
}









