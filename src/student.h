#include <iostream>
#include <string>

enum Grade
{
	Grade_A,
	Grade_B,
	Grade_C,
	Grade_D
};

class Student
{
private:
	std::string _name;
	float		_mathPoint;
	float		_litPoint;

public:
	void read();
	void print();

	std::string getName() { return _name; }
	float getMathPoint() { return _mathPoint; }
	float getLitPoint() { return _litPoint; }

	void setName(std::string name) { _name = name; }
	void setMathPoint(float p) { _mathPoint = p; }
	void setLitPoint(float p) { _litPoint = p; }

	float getAvg() { return (_mathPoint + _litPoint) / 2; }
	float getGPA();
	Grade getGrade();
};
