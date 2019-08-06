#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	
	int base;
	int numero;
	int numeroAux;
	int digAtual; 
	int digAnt;
	int brasileiro = 0;
    int ehBrasileiro = 0;

	printf("Informe o numero\n");
	scanf("%d", &numero);

	for(base = 2; base < numero - 1; base++){
		brasileiro = 1;
		numeroAux = numero;
		digAnt = numeroAux % base;
		while(numeroAux > 0 && brasileiro){
			digAtual= numeroAux % base;	
			if(digAnt != digAtual)
			  brasileiro = 0;
			numeroAux = numeroAux / base;
			digAnt = digAtual;  
		}
		if(brasileiro)
		  break;
	}
	if(brasileiro)	
	  printf("BRASILEIRO na base %d\n", base);
	else  
	  printf("NAO BRASILEIRO");
}
