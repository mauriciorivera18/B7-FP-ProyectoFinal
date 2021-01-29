#include <stdio.h>
int encontrarElementoMenor(int arreglo[], int tam)
{
	int menorNumero, contador=0;
	menorNumero = arreglo[contador];
	while (contador<tam)
	{
		if (arreglo[contador]< menorNumero)
		{
			menorNumero= arreglo[contador];
		}
		contador++;
	}
	printf("El numero menor es: %d\n",menorNumero);
	return 0;
}
int main()
{
	int arreglo[] = {7,6,5,4,3,2};
    encontrarElementoMenor(arreglo, 6);

	int arreglo2[] = {-3,0,2,44,7,2};
	encontrarElementoMenor(arreglo2, 6);
	return 0;
}




