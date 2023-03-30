#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("holaMundo.txt", "w"); 
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        return 1;
    }
    fprintf(archivo, "Hola Mundo");
    fclose(archivo);
}