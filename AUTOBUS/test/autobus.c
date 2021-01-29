 int calcularPasajeros(int cambios[][2], int x)
{
    int total;
    int abordo=0, bajas=0;
    int i,k;
    int x = 5;
 for (i=0; i<x; i++)
 {
    for (k=0; k<1; k++)
 {
        abordo= abordo+cambios[i][k];

}
    	 for (k=1; k<2; k++)
        	bajas= bajas+cambios[i][k];
}
 total= abordo-bajas;
 return total;
}

int main()
{
    
    int cambios[][2] = {{3, 0},{5, 1},{2, 1},{4, 3},{0, 8}};
    int cambios2[][2] = {{1, 0},{1, 0},{5, 1},{0, 3},{1, 1}};

    if(calcularPasajeros(cambios, 5)==3)
    {
        printf("OK\n");
    }
    else
    {
        printf("Error\n");
    }
    
    if(calcularPasajeros(cambios2, 5)==3)
    {
        printf("OK\n");
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}

