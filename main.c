#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

void actualizarRecuperados(ePais pais, int recuperadosDelDia);
char* invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);


int main()
{
    char ordenar[10] = {"algoritmo"};
    char cadena[10] = {"UTNFRA"};
	char cadenaInvertida[10];
	int recuperadosDelDia = 1000;


	ePais pais = {1,"Argentina",50000,25000,900};

	actualizarRecuperados(pais, recuperadosDelDia);
	printf("1 - Recuperados totales: %d\n\n",pais.recuperados);

	strcpy(cadenaInvertida,invertirCadena(cadena));
	printf("2 - La palabra %s invertida es: %s\n\n","UTNFRA",cadenaInvertida);

	ordenarCaracteres(ordenar);
	printf("3 - La palabra %s ordenada pasa a ser: %s\n\n","algoritmo",ordenar);

	return 0;
}

void actualizarRecuperados(ePais pais, int recuperadosDelDia)
{
	pais.recuperados = pais.recuperados + recuperadosDelDia;
}

char* invertirCadena(char cadena[])
{
	char aux;
	int lend;
	int j;

	if(cadena != NULL){
		lend = strlen(cadena);
		j = lend;
		for(int i = 0 ; i<(lend/2); i++){
			j--;
			aux = cadena[i];
			cadena[i] = cadena[j];
			cadena[j] = aux;
		}
	}
	return cadena;
}

void ordenarCaracteres(char cadena[])//Ascendente
{
	int tamCadena = strlen(cadena);
	char auxChar;

	for(int i = 0; i < tamCadena-1; i++){
			for(int j = i + 1; j < tamCadena; j++){
				if(cadena[i] > cadena[j]){
					auxChar = cadena[i];
					cadena[i] = cadena[j];
					cadena[j] = auxChar;
				}
			}
		}
}
