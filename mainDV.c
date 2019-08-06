#include <stdio.h>

main() {
	int numAgencia;
	int m, c, d, u;
	int dv;
	
	printf("Entre com o numero da Agencia\n");
	scanf("%d", &numAgencia);
	
	m = numAgencia / 1000;
	c = (numAgencia % 1000) / 100;
	d = (numAgencia % 100) / 10;
	u = numAgencia % 10;
	
	dv = (2 * u) + (3 * d) + (4 * c) + (5 * m);
	dv = dv % 11;
	dv = 11 - dv;
	if(dv != 10)
	  printf("%d - %d\n", numAgencia, dv);
	else  
	  printf("%d - X\n", numAgencia);
	
	
}
