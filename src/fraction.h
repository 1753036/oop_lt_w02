#include <iostream>

class Fraction
{
private:
	int m_num;
	int m_denom;
public:
	void read();
	void print();

	void setNum(int num) { m_num = num; }
	void setDenom(int denom) { m_denom = denom; }
	int getNum() { return m_num; }
	int getDenom() { return m_denom; }

	Fraction inverse();
	Fraction reduce();
	Fraction add(Fraction);
	Fraction mul(Fraction);

	bool compare(Fraction);
};
