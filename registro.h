#ifndef REGISTRO_H
#define REGISTRO_H

struct alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
};

struct alumno leerRegistro(FILE *fp, long numeroDeRegistro);

#endif  // REGISTRO_H
