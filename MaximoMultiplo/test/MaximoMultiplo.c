#include <stdio.h>
int generarMaximoMultiplo(int divisor,  int limite);
int main()
{
    int div;
    int lim;
    int res;
    res=generarMaximoMultiplo(div, lim);
    printf ("El maximo multiplo de dichos numeros es: %d", res);  
} 

int generarMaximoMultiplo(int divisor,  int limite)
{
    int resultado;
    printf ("Por favor, ingresa el numero a dividir: \n");
    scanf ("%d",& divisor);
    printf ("Ahora ingresa en numero entre el cual se divide dicho numero: \n");
    scanf ("%d",& limite);

    if ((limite % divisor) == 0)
    {
        resultado = limite;
    }
    else
    {
        resultado=limite-(divisor % limite);
    }
    
    return resultado;
}
