#include <stdio.h>

main() {
	
	int jCont;
	long fat;
	double pot;
	int iCont;
	int N = 3;
	double x = 3.1416;
	int termos = 9;
	double seno;
	int mult;
	
	
	for(seno = 0, iCont = 0; iCont <= termos; iCont++){
		
		N = 2 * iCont + 1;
		
		for(fat = 1, jCont = 1; jCont <= N; jCont++)
		 	fat *= jCont; 
	
		for(pot = 1, jCont = 1; jCont <= N; jCont++)
		 	pot *= x; 

		if((iCont%2) == 0) 
		  mult = 1;
		else
		  mult = -1;

		seno = seno + (mult * pot / fat); 
	}	
	
		printf("Seno de %f : %f\n", x, seno);
	
	
}
