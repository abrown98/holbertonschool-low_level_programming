#include <stdio.h>

/**
 * @first: declare function w/ (variable) & print
 * @second: declare function that will point to the other function.
 * equalize the function using ampersand and assignment operators
 * implement funcniton after ptr has been assigned and return zero.
 */

	void fun(int a)
{
	printf("value of a is: %d\n", a);
}
	int main()
{
	(*fun_ptr)(int) = &fun;

	(*fun_ptr)(10);
	return 0;
}
