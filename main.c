#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	int a, b, *p; 

	a = 22;
	b = 33;
	p = &b;
	
	printf("Valor de a %i \n", a);
	
	printf("Valor de a %i \n", a);
	
	printf("Valor de a %i \n", &a);
	
	printf("Valor de b %i \n", b);
	
	printf("Valor de b %i \n", &b);
	
	printf("Valor de p %i \n", *p);

	p++;
	
	printf("Valor de p %i \n", *p);
	
	p++;

	printf("Valor de p %i \n", *p);

	return 0;
}
