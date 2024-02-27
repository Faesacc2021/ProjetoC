#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int idade; /* inteiro reserva 4 bytes 32 bits 1 para o sinal*/
	int vetorA[3]; /* tamanho na memoria 4 X 3 */
	idade = 56;
	
	struct student {
		int matricula;
		float mensalidade;
	};
	
	struct student studentRecords[30];
	studentRecords[0].matricula = 21210;
	studentRecords[0].mensalidade = 1250;
	
	printf(studentRecords[0].matricula);
	
	return 0;
}
