#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 256
#define ALPHA_SIZE 26

main(){
  
  int qtdeAlpha[ALPHA_SIZE];
  char caracteres[MAX_CHAR];
  int qtde=0;
  char caracter;
  int iCont;
  
  do{
    puts("Digite o caracter");
    fflush(stdin);
    scanf("%c", &caracter);
    if((caracter >= 'A' && caracter <= 'Z')||
       (caracter >= 'a' && caracter <= 'z')) 
      caracteres[qtde++] = caracter;
  }while(((caracter >= 'A' && caracter <= 'Z')|| 
          (caracter >= 'a' && caracter <= 'z'))
          && qtde < MAX_CHAR);    
  
  for(iCont = 0; iCont < ALPHA_SIZE; iCont++)
    qtdeAlpha[iCont] = 0;  

  for(iCont = 0; iCont < qtde; iCont++){
      caracter = caracteres[iCont];
      if(caracter>= 'a' && caracter <= 'z')
        caracter = caracter - 'a' + 'A';     
      qtdeAlpha[caracter - 'A']++;
  }    
          
  
  for(iCont = 0; iCont < qtde; iCont++)
    printf("%c ",caracteres[iCont]);
  printf("\n");
  
  for(iCont = 0; iCont < ALPHA_SIZE; iCont++)
    if(qtdeAlpha[iCont] > 0)
      printf("%c --> %d\n", iCont+'A', qtdeAlpha[iCont]);
  
  system("PAUSE");	
  return 0;
}
