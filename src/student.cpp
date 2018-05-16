#include "student.h"

void Student::read()
{
	std::cout << "Name: ";
	std::cin >> _name;
	std::cout << "Math Point: ";
	std::cin >> _mathPoint;
	std::cout << "Literature Point: ";
	std::cin >> _litPoint;
}

void Student::print()
{
	std::cout << "Name:  " << _name << std::endl;
	std::cout << "Point: " << getAvg() << std::endl;
	std::cout << "    - Math: " << _mathPoint << std::endl;
	std::cout << "    - Literature: " << _litPoint << std::endl;
}
float Student::getGPA()
{
	float avg = getAvg();
	return avg * 0.4;
}

Grade Student::getGrade()
{
	float avg = getAvg();
	if (avg >= 9) return Grade_A;
	if (avg >= 7) return Grade_B;
	if (avg >= 5) return Grade_C;
	return Grade_D;
}
