#include <stdio.h>
#include <stdlib.h>

main(){

int v[10], b[10], aux, maior=0, a, c;

for(a=0; a<10;a++)
	scanf("%d", &v[a]);
for(a=0; a<10;a++)
	{
	b[a]=v[a];
	for (c=a+1;c<10;c++)
		b[a]=b[a]+v[c];
	aux=0;
	for (c=9; c>=0; c--)
	{
		aux=v[c]+aux;
		if (b[a]<b[a]-aux)
			b[a]=b[a]-aux;
			
	}
}
maior=b[0];
for (a=1; a<10; a++)
{
	if (maior<b[a])
		maior=b[a];
}
printf ("%d", maior);
		

}
