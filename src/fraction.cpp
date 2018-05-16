#include "fraction.h"

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

void Fraction::read()
{
	std::cout << "Numerator: ";
	std::cin >> m_num;
	std::cout << "Denominator: ";
	std::cin >> m_denom;
}
void Fraction::print()
{
	std::cout << m_num << "/" << m_denom << std::endl;
}

Fraction Fraction::inverse()
{
	Fraction res;
	res.m_num = m_denom;
	res.m_denom = m_num;
	return res;
}

Fraction Fraction::reduce()
{
	int k = gcd(m_num, m_denom);
	Fraction res;
	res.m_num = m_num / k;
	res.m_denom = m_denom / k;
	return res;
}

Fraction Fraction::add(Fraction f)
{
	Fraction res;
	res.m_num = m_num * f.m_denom + m_denom * f.m_num;
	res.m_denom = m_denom * f.m_denom;
	return res;
}

Fraction Fraction::mul(Fraction f)
{
	Fraction res;
	res.m_num = m_num * f.m_num;
	res.m_denom = m_denom * f.m_denom;
	return res;
}

//Return true if this > f
bool Fraction::compare(Fraction f)
{
	return ((float)m_num / m_denom) > ((float)f.m_num / f.m_denom);
}