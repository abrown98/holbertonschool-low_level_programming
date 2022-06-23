#include <stdio.h>

int foo(int a)
{
	return (a);
}
void (*foo_this)
{
	(*foo_this) = &foo;
	{	
	a = 100;
	
	foo_this(a);
	}	
	printf("Now the value of a is: %d\n", a);
	return 0;
}
