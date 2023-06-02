#include "registro.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    fp = fopen("registros.dat", "rb");
    if (fp == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        long randomRegistro = rand() % 100;  // Suponiendo que hay 100 registros en el archivo
        struct alumno reg = leerRegistro(fp, randomRegistro);
        printf("Registro %ld:\n", randomRegistro);
        printf("Matrícula: %d\n", reg.matricula);
        printf("Nombre: %s\n", reg.nombre);
        printf("Dirección: %s\n", reg.direccion);
        printf("\n");
    }

    fclose(fp);
    return 0;
}
