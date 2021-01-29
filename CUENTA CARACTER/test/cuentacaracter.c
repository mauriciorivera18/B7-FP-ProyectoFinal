#include <stdio.h>
#include <string.h>

void contar(const char * cadena, int arreglo[][2])
{
	int i, con=0, j=0, al, a=0, prueba=0;
  int k=0;
  char* s;
  printf("Introduce una palabra \n");
  cadena = malloc (256);
  scanf("%255s", cadena );
  s = strdup(cadena);
  al=strlen(cadena);
  for  (i=0; i<al; i++)
  {
  	while (k<al)
  	{
  		  if(i!=k && k<al)
  		  {
  		   if (s[i]==s[k])
  		    {
  			  con=con+1;
  			  s[k]=0;
  		    }
  	      }
  		  k++;
  	}
  	    if (s[i]!=0)
  	    {
  	      if (con >= 1)
  	      {
  		   arreglo[j][1]= con + 1;
  		   arreglo[j][0]= s[i];
  		   prueba=arreglo[j][0];
  	      }
  	      else
  	      {
  	     	arreglo[j][1]= 1;
  	    	arreglo[j][0]= s[i];
  	    	prueba=arreglo[j][0];
   	      }
   	      j++;
   	      a=a+1;
       	    }
  		con=0;
  		k=0;
  }
  for (i=0 ; i<a ; i++)
  {
   for (k=0 ; k<2 ; k++)
   {
   printf("%ld,",arreglo[i][k]);
   }
   printf("\n");
  }
free(cadena);
free(s);
}

int main(){
 char * cadenita;
 int a2[1000][2];
 contar(cadenita, a2);
}



