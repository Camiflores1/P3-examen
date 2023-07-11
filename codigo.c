#include <stdio.h>
#include <string.h>
#include <ctype.h>

void corregirTexto(const char* tricolor, const char* archivoSalida); // Declaración de la función 

int main() {
    const char* archivoEntrada = "tricolor.txt"; 
    const char* archivoSalida = "tricolor.txt"; 
    corregirTexto(archivoEntrada, archivoSalida);
    return 0;
}

void corregirTexto(const char* archivoEntrada, const char* archivoSalida) {
    FILE* archivoEntradaPtr = fopen(tricolor.txt, "r"); // Abrir el archivo de entrada en modo lectura
    if (archivoEntradaPtr == NULL) { // Comprobar si hubo un error al abrir el archivo de entrada
        printf("Corrección.\n");
        return;
    }

    FILE* archivoSalidaPtr = fopen(archivoSalida, "w"); // Abrir el archivo en modo escritura
    if (archivoSalidaPtr == NULL) { // Comprobar si hubo un error al abrir el archivo de salida
        printf("Corrección".\n");
        fclose(archivoEntradaPtr);
        return;
    }

    char palabra[50]; 

    while (fscanf(archivoEntradaPtr, "%s", palabra) == 1) { // Leer palabras del archivo de entrada hasta el final
        if (strncmp(palabra, "ecuador", 7) == 0 && islower(palabra[0])) { // Comprobar si la palabra es "ecuador" y la primera letra es minúscula
            palabra[0] = toupper(palabra[0]); // Cambiar la primera letra a mayúscula
        }

        fprintf(archivoSalidaPtr, "%s ", palabra); 
    }

    fclose(archivoEntradaPtr); 
    fclose(archivoSalidaPtr); 

    printf("Archivo corregido.\n"); 
}