/*
NxM matriz
Suma filas de la matriz
Suma diagonal principal
Numero maximo y minimo
*/

#include <stdio.h>
#define N 50
#define M 50

int main(void)
{

	int matriz[N][M], matriz2[N][M];
	int filas, filas2, columnas2, columnas, i, j;
	int suma = 0;
	int diagonal_principal_a = 0, diagonal_principal_b = 0;
	int mayor = 0, mayor2 = 0;
	int menor = 999, menor2 = 999;

	printf("Introduzca el numero de filas de la primera matriz: ");
	scanf("%d", &filas);
	printf("Introduzca el numero de columnas de la primera matriz: ");
	scanf("%d", &columnas);

	printf("\n");

	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");

	printf("Introduzca el numero de filas de la segunda matriz: ");
	scanf("%d", &filas2);
	printf("Introduzca el numero de columnas de la segunda matriz: ");
	scanf("%d", &columnas2);

	printf("\n");

	for (i = 0; i < filas2; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i + 1, j + 1);
			scanf("%d", &matriz2[i][j]);
		}
	}

	/*	printf("\n- Las matrices introducidas son: \n\n");

	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("\t%d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//imprimir la matriz 2
	for(i=0; i<filas2; i++){
		for(j=0; j<columnas2; j++){
			printf("\t%d",matriz2[i][j]);
		}
		printf("\n");
	}

	//suma de la matriz 1 y 2

	for(i=0; i<filas; i++){
    	for(j=0; j<columnas; j++){
	    	matriz3[i][j] = matriz[i][j] + matriz2[i][j];				//->> Calculo para hallar la suma
		}
	}

	printf("\n");									//No imprimir la suma
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
    		printf("\t%d", matriz3[i][j]);
    	}
	printf("\n");
	}*/

	//Suma de las filas de la matriz de 1

	printf("\n- Las sumas de cada fila de la primera matriz son:\n\n");

	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			suma += matriz[i][j]; //-> Imprimir la suma de cada fila de la primera matriz
		}
		printf("\t%d", suma);
		suma = 0;
		printf("\n");
	}

	//Suma de las filas de la matriz de 2

	printf("\n- Las sumas de cada fila de la segunda matriz son:\n\n");

	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			suma += matriz2[i][j]; //-> Imprimir la suma de cada fila de la segunda matriz
		}
		printf("\t%d", suma);
		suma = 0;
		printf("\n");
	}

	//Diagonal principal de la primera matriz

	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			if (i == j)
			{
				diagonal_principal_a += matriz[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal principal de la primera matriz es: %d", diagonal_principal_a);

	//Dioagonal principal de la segunda matriz

	for (i = 0; i < filas2; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			if (i == j)
			{
				diagonal_principal_b += matriz2[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal principal de la segunda matriz es: %d", diagonal_principal_b);

	printf("\n");

	//mayor elemento 1 matriz

	for (i = 0; i < filas; i++)
	{
		if (matriz[i][i] > mayor)
		{
			mayor = matriz[i][i];
		}
	}
	printf("\n- El mayor elemento de la primera matriz es: %d", mayor);

	//mayor elemento 2 matriz

	for (i = 0; i < filas2; i++)
	{
		if (matriz2[i][i] > mayor2)
		{
			mayor2 = matriz2[i][i];
		}
	}
	printf("\n- El mayor elemento de la segunda matriz es: %d", mayor2);

	//menor elemento 1 matriz

	for (i = 0; i < filas; i++)
	{
		if (matriz[i][i] < menor)
		{
			menor = matriz[i][i];
		}
	}
	printf("\n- El menor elemento de la primera matriz es: %d", menor);

	//menor elemento 2 matriz

	for (i = 0; i < filas2; i++)
	{
		if (matriz2[i][i] < menor2)
		{
			menor2 = matriz2[i][i];
		}
	}
	printf("\n- El menor elemento de la segunda matriz es: %d", menor2);

	return 0;
}
