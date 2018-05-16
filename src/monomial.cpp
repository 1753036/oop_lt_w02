#include "monomial.h"


void Monomial::read()
{
	std::cout << "Coefficient: ";
	std::cin >> _coeff;
	std::cout << "Exponent: ";
	std::cin >> _exp;
}

void Monomial::print()
{
	std::cout << "(" << _coeff << "X)^" << _exp << std::endl;
}

long Monomial::calc(int x)
{
	return pow(x * _coeff, _exp);
}

Monomial Monomial::derive()
{
	Monomial res;
	res._coeff = _coeff * _exp;
	res._exp = _exp - 1;
    return res;
}

Monomial Monomial::add(Monomial m)
{
	Monomial res;
	res._coeff = m._coeff + _coeff;
	res._exp = _exp;
	return res;
}

Monomial Monomial::mul(Monomial m)
{
	Monomial res;
	res._coeff = _coeff;
	res._exp = m._exp + _exp;
	return res;
}

bool Monomial::compare(Monomial m)
{
    int v1 = pow(m._coeff, m._exp);
    int v2 = pow(_coeff, _exp);

    return v2 > v1;
}
