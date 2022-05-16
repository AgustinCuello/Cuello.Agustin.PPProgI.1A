#include <stdio.h>
#include <stdlib.h>

int reemplazarCaracteres(char [],char ,char);

int main()
{
    char cadena[21];
    char letra1;
    char letra2;
    int cantidad;

    printf("Escriba algo: ");
    scanf("%s", cadena);
    fflush(stdin);

    printf("Escriba una letra: ");
    scanf("%c", &letra1);
    fflush(stdin);

    printf("Escriba otra letra: ");
    scanf("%c", &letra2);
    fflush(stdin);

    cantidad=reemplazarCaracteres(cadena,letra1 ,letra2);

    printf("La cantidad de reemplazos es: %d", cantidad);

    return 0;
}

int reemplazarCaracteres(char cadena[],char primeraLetra ,char segundaLetra){
    int cantidad=0;
    for(int i=0;i<21;i++){
        if(cadena[i]==primeraLetra){
            cadena[i]=segundaLetra;
            cantidad++;
        }
    }
    return cantidad;
}


