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
	
	struct no {
		int dado;
		struct no *prox;
	};
	
	struct no *P, *lista;
	
	P = malloc (sizeof(struct no));	
	lista = P;
	P->dado = 90;
	P->prox = lista;
	lista = P;  

/* P ponteiro --  P-> nó  --  p->dado = 25 */

	return 0;
}














