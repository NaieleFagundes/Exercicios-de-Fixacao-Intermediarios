//CONTADOR DE DÍGITOS PARES/ÍMPARES Lê um número inteiro e conta quantos dígitos são pares e quantos são ímpares. 

#include <stdio.h>
int main () {
	int num,somapar = 0, somaimpar = 0,prog;

	printf ("Digite um número inteiro: \n");
	scanf ("%d",  &num);
	while (num > 0) {
	    prog = num % 10;
	    if (prog % 2==0) {
	    	somapar++;
		} else {
			somaimpar++;
		}
		
		num/=10;
	}
	    
	printf ("%d pares \n", somapar);
	printf ("%d ímpares", somaimpar);

	return 0;

}