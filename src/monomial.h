#include <iostream>
#include <cmath>
class Monomial
{
private:
	int _coeff;
	int _exp;

public:
	void read();
	void print();

	int getCoeff() { return _coeff; }
	int getExp() { return _exp; }
	void setCoeff(int coeff) { _coeff = coeff; }
	void setExp(int exp) { _exp = exp; }

	long calc(int x);

	Monomial derive();
	Monomial add(Monomial);
	Monomial mul(Monomial);

    bool compare(Monomial);
};
