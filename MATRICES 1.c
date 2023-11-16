#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][7];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 7; j++) 
		{
            matriz[i][j] = rand() % 10;
        }
    }
    printf("Matriz generada:\n");
    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 7; j++) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int suma_diagonal_principal = 0;
    for (i = 0; i < 5; i++) 
	{
        suma_diagonal_principal += matriz[i][i];
    }
    printf("\nSuma de la diagonal principal: %d\n\n", suma_diagonal_principal);

    int suma_primera_fila = 0;
    for (j = 0; j < 7; j++) 
	{
        suma_primera_fila += matriz[0][j];
    }
    printf("Suma de la primera fila: %d\n\n", suma_primera_fila);

    int suma_ultima_columna = 0;
    for (i = 0; i < 5; i++) {
        suma_ultima_columna += matriz[i][7 - 1];
    }
    printf("Suma de la ultima columna: %d\n\n", suma_ultima_columna);

    int suma_fila_2 = 0;
    for (j = 0; j < 7; j++) 
	{
        suma_fila_2 += matriz[1][j];
    }
    printf("Suma de la fila 2: %d\n", suma_fila_2);

    int suma_fila_4 = 0;
    for (j = 0; j < 7; j++) 
	{
        suma_fila_4 += matriz[3][j];
    }
    printf("Suma de la fila 4: %d\n", suma_fila_4);

    int suma_filas_pares = suma_fila_2 + suma_fila_4;
    printf("Suma de las filas pares: %d\n\n", suma_filas_pares);

    int suma_columna_1 = 0;
    for (i = 0; i < 5; i++) 
	{
        suma_columna_1 += matriz[i][0];
    }
    printf("Suma de la columna 1: %d\n", suma_columna_1);

    int suma_columna_3 = 0;
    for (i = 0; i < 5; i++) 
	{
        suma_columna_3 += matriz[i][2];
    }
    printf("Suma de la columna 3: %d\n", suma_columna_3);

    int suma_columna_5 = 0;
    for (i = 0; i < 5; i++) 
	{
        suma_columna_5 += matriz[i][4];
    }
    printf("Suma de la columna 5: %d\n", suma_columna_5);

    int suma_columnas_impares = suma_columna_1 + suma_columna_3 + suma_columna_5 + suma_ultima_columna;
    printf("Suma de las columnas impares: %d\n\n", suma_columnas_impares);

    int suma_triangular_superior = 0;
    for (i = 0; i < 5; i++) 
	{
        for (j = i + 1; j < 7; j++) 
		{
            suma_triangular_superior += matriz[i][j];
        }
    }
    printf("Suma del triangular superior: %d\n", suma_triangular_superior);

    int suma_triangular_inferior = 0;
    for (i = 1; i < 5; i++) 
	{
        for (j = 0; j < i; j++) 
		{
            suma_triangular_inferior += matriz[i][j];
        }
    }
    printf("Suma del triangular inferior: %d\n", suma_triangular_inferior);

    return 0;
}

