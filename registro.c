#include "registro.h"
#include <stdio.h>

struct alumno leerRegistro(FILE *fp, long numeroDeRegistro) {
    struct alumno reg;
    fseek(fp, numeroDeRegistro * sizeof(struct alumno), SEEK_SET);
    fread(&reg, sizeof(struct alumno), 1, fp);
    return reg;
}
