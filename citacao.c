#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 250
#define SPACE 32

main(){
  
  char original[MAX_TAM];
  char abreviado[MAX_TAM];     
  int ndxOriginal;
  int tamOriginal;
  int ndxAbreviado;
  int iCont;
  int ultimoSpace;
  
  puts("Escreva o nome do escritor:");
  gets(original);
  
  for(tamOriginal=0; original[tamOriginal] != '\0';
      tamOriginal++);
  
  for(ndxOriginal = tamOriginal - 1; 
      original[ndxOriginal] != SPACE;
      ndxOriginal--);
  ultimoSpace = ndxOriginal;        
  
  for(ndxAbreviado=0, ndxOriginal = ultimoSpace+1;
      original[ndxOriginal] != '\0'; 
      ndxOriginal++, ndxAbreviado++){
    abreviado[ndxAbreviado] = original[ndxOriginal];                     
  };
      
  abreviado[ndxAbreviado] = '\0';
  
  puts(abreviado);
  
  system("PAUSE");	
  return 0;
}
