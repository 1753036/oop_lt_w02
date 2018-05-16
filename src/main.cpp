#include "array.h"

int main()
{
	Array arr;

	arr.read();
	arr.print();

	std::cout << arr.find(3) << std::endl;
	arr.free();
	return 0;
}
