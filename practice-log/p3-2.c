#include <stdio.h>

void fun(int a)
{
	int a = 5;
	printf("Value of a is: %d\n", a);

	int main()
	{
		void (*fun_ptr)(int) = &fun;

		(*fun_ptr);
		return 0;
	}
