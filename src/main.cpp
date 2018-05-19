#include "monomial.h"

int main()
{
	Monomial t1;
	t1.read();
	t1.print();
	t1.derive().print();
	return 0;
}
