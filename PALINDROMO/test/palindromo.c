#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int verificarPalindromo(const char * cadena)
{
    cadena = malloc(256);
    char* s = (char*)malloc(256);
    char * s2;
    char caracter = ' ';
    printf("Escribe la cadena\n");
    scanf("%256s", cadena);
    s2 = strdup(cadena);
    int n, numero, k, i, j;
    k = 1;
    j = 0;
    n=strlen(s2);
    for(i=0;i<=n;i++){
        if (isupper(s2[i]))
            s2[i] = tolower(s2[i]);
        if(s2[i] != caracter){
            s[j] = s2[i];
        j++;
        }
    }
    numero = strlen(s);
    for(i=0;i<=numero/2;i++){
        if(s[i] != s[numero-i-1])
        k = 0;
    }
    if(k)
        printf("Si es palindromo\n");
    else
        printf("No es palindromo\n");

    free(s2);
    free(s);
    free(cadena);
    return 1;
}

