#include <stdio.h>
#include <string.h>
#include <ctype.h>

void corregirTexto(const char* archivoI, const char* archivoS); // Declaración de la función 

int main() {
    const char* archivoS = "tri.txt"; 
    const char* archivoI = "tri.txt"; 
    corregirTexto(archivoI, archivoS);
    return 0;
}

void corregirTexto(const char* archivoI, const char* archivoS) {
    FILE* archivoIPtr = fopen("tri.txt", "r"); // Abrir el archivo de entrada en modo lectura
    if (archivoIPtr == NULL) { // Identifica si hubo un error al abrir el archivo de entrada
        printf("corregirTexto.\n");
        return;
    }

    FILE* archivoSPtr = fopen(archivoS, "w"); // Abrir el archivo en modo escritura
    if (archivoSPtr == NULL) { // Nos ayuda a comprobar si hubo un error al abrir el archivo de salida
        printf("corregirTexto".\n");
        fclose(archivoIPtr);
        return;
    }

    char parrafo[50]; 

    while (fscanf(archivoIPtr, "%s", parrafo) == 1) { // Leer palabras del archivo de entrada hasta el final
        if (strncmp(parrafo, "ecuador", 7) == 0 && islower(palabra[0])) { // Comprobar si la palabra es "Ecuador" y la primera letra debe ir con mayúscula
            parrafo[0] = toupper(parrafo[0]); // Se cambiará la primera letra a mayúscula
        }

        fprintf(archivoSPtr, "%s ", parrafo); 
    }

    fclose(archivoIPtr); 
    fclose(archivoSPtr); 

    printf("Archivo corregido.\n"); 
}