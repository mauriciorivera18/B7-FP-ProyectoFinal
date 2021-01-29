#include <stdio.h>

void encontrar( int arr1[],int l1, int arr2[],int l2,int res[],int* lres){

int i,j,k,total,existe;

total = 0;

for (i=0;i< l1;i++){
        for (j=0; j< l2 ; j++) {
                if (arr1[i] == arr2[j]) {
                        existe = 0;
                        for (k=0 ; k < total ;k++){
                                if ( arr1[i] == res[k] ) { existe = 1; };
                        }
                        if (!existe) { res[total] = arr1[i]; total++; };
                }
        }
}
*lres = total ;
}


int main(){
    int a[100];
    int a2[100];
    int len, len2, i,j,lenres;
    int res[100];
    i=0;
    j=0;
    printf("Ingrese los valores del arreglo 1 y presione * al terminar, porque no funcionó con enter xdxdxd\n");
    do{
       scanf("%d", &a[i]);
        i++;
    }
    while(i<100 && getchar() != 42);
    len = i-1;
    printf("%d", len);
    printf("Ingrese los valores del arreglo 2 y presione * al terminar\n");
    do{

       scanf("%d", &a2[j]);
        j++;
    }
    while(j<100 && getchar() != 42);
    len2 = j-1;

    encontrar(a,len,a2,len2,res,&lenres);
    printf("El arreglo resultante con los valores que intersectan es:");
    for(i=0;i<lenres;i++){
        printf("%d, ", res[i]);
    }
    printf("\n");
    return 0;
}

