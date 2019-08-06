#include <stdio.h>
#include <stdlib.h>

main(){

int N, B, aux, resto, iguais, brasileiro=0;

scanf("%d", &N);
for(B=2; B<N-1;B++)// brasileiro = 0
{
	iguais=1;
	aux=N;
	do 
	{
	resto=aux%B;
	aux=aux/B;
	if (aux>=B)
		if ((aux%B)==resto)
		iguais=1;
		else
		iguais=0;
	else
		if (aux==resto)
			iguais=1;
		else
			iguais=0;	
	}	while (aux>B && iguais==1);
		
		if ((aux<B) && (iguais==1))
			brasileiro=1;
		
	
}
if (brasileiro==1)
		printf("brasileiro");
	else
		printf("não");
}
