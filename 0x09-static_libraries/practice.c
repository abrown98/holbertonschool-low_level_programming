#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
int i, sum = 0;
printf("argc = %d\n", argc);
printf("let's see what is in argv[]\n");

for(i = 0; i < argc; i++)
{	
	printf("argv[%d] = %s\n", i, argv[i]);
}

return 0;
}
