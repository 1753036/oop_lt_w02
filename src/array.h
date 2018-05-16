#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array
{
private:
	int* _arr;
	int _len;
public:
	void read();
	void print();
	void free() { delete[] _arr; }

	int getLength() { return _len; }
	int getInd(int ind) { return _arr[ind]; }
	void setInd(int ind, int data) { _arr[ind] = data; }

	int find(int data);
	void sort();
};

#endif // ARRAY_H
