#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo;
    char caracter;
    archivo = fopen("prueba2.txt", "w");
    fputs("Esta es una prueba de escritura sobre archivos",archivo);
    fclose(archivo);

    archivo = fopen("prueba2.txt", "r");
    while (!feof(archivo))
    {
        caracter = fgetc(archivo);
        putchar(caracter);

    }
    fclose(archivo);
    return 0;
}