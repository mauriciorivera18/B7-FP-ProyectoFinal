#include <stdio.h> 
#include <stdlib.h> 
/*después de leer los números tu tienes que reingresarlos*/ 
void copiardatos2();
//FUNCION DONDE SE ALMACENAN LOS NUMEROS  ORDENADOS/ 
int main() { 
FILE *archivo; 
char caracteres[10]; 
archivo = fopen("numeros.csv", "w+"); 
if (archivo != NULL) { 
 printf("El archivo se abrió correctamente."); 
 printf("\nContenido del archivo:\n"); 
 while (feof(archivo) == 0) { 
 fgets (caracteres, 10, archivo); 
 printf("%s", caracteres); 
} 
printf("\n ORDENANDO \n\n"); 
 char numeros_a_ordenar; 
 numeros_a_ordenar=7; 
 char vector_numeros[numeros_a_ordenar]; 
 char i, j, k=1; 
 for(i=0;i<numeros_a_ordenar;i++)
 { 
 printf(" %d numero: ", k); 
 scanf(" %d", &j); 
 vector_numeros[i] = j; 
 k++; 
 } 
 char x, y; 
 for(i=0;i<numeros_a_ordenar;i++) 
 { 
 for(j=i+1;j<numeros_a_ordenar;j++) 
 { 
 x = vector_numeros[i] - vector_numeros[j]; 
 if(x>0) 
 { 
 y = vector_numeros[j]; 
 vector_numeros[j] = vector_numeros[i]; 
 vector_numeros[i] = y; 
 } 
 } 
 } 
 void copiardatos2() 
{ 
 printf("\n\n Sus numeros estarian ordenados de esta forma: \n");  printf(" "); 
 for(i=0;i<numeros_a_ordenar;i++) 
 { 
 printf("%d ", vector_numeros[i]); 
 } 
} 
 FILE *archivo20;
 char escribir; copiardatos2(); 
 archivo20 = fopen("numeros_ordenados.csv", "wb");  if (archivo20 != NULL) { 
 printf("\n\n\n NUMEROS ORDENADOS Y GUARDADOS EN UN NUEVO  ARCHIVO"); 
 fprintf(archivo20, escribir); 
 fprintf(archivo20, "%s", "si se pudo"); 
 fclose(archivo20); 
} 
 fclose(archivo); 
 copiardatos2(); 
} 
 return 0; 
} 


