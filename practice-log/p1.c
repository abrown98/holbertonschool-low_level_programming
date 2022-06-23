#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[]) {
	int *p = (int*) malldoc(3*sizeof(int));
	
	p[3];
	p[12];
	printf("The values of %d and %d\n", p[3], p[12]);
	return 0;
}
