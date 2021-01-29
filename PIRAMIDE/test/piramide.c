#include <stdio.h>
#include <stdlib.h>
char *generarPatron(int n);
int main()
{
    int numerofilas;
    int piramide;
    printf("Introduce el numero de filas de la piramide: ");
	scanf("%d",&numerofilas);
	piramide = generarPatron(numerofilas);
	printf(piramide);
}


char *generarPatron(int n)
{
	int x, i;
	x=1;
	while (x<=n)
	{
		i=1;
		while (i<=x)
		{
			printf("%d",x);
			i++;
		}
		printf("\n");
		x++;
	}
return 0;
}

