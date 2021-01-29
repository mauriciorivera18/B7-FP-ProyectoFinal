#include <stdio.h>
long calculoFactorial();
int main()
{
    int n;
    long res;
    printf("Dame un numero \n");
    scanf("%d",&n);
    res=calculoFactorial(n);
    printf("El resultado del Factorial es: %ld", res);
    //printf("%ld", res);
}

long calculoFactorial(int n)
{
  int res;
  res=1;

  if(n==0)
    {
        return res;
    }
  else
    {
        while(n>0)
            {
                res=res*n;
                n=n-1;
            }
            return res;
    }
}
