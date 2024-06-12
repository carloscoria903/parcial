#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Alumnos {
    int legajo;
    char nombre[50];
    char apellido[50];
    char asistencias[20];
    int clase[20];
};

void nombre(struct Alumnos *alumnos) {

    printf("ingrese los nombres: \n");
    for (int i = 0; i < 3; i++) { 
        printf("nombre %d: ", i + 1);
        scanf("%s", alumnos[i].nombre);
    }
    printf("\n");
    printf("ingrese el legajo \n");
    for (int i = 0; i < 3; i++){
        scanf("%d", &alumnos[i].legajo);
    }
    printf("\n");
    printf("ingrese la asistencias: \n");
    for (int i = 0; i < 3; i++){
        scanf("%s", alumnos[i].asistencias);
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        printf("alumno: %s \n", alumnos[i].nombre);
        printf("legajo: %d \n", alumnos[i].legajo);
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        printf("clase \n", i +1);
        scanf("%d", &alumnos[i].clase);
        printf("asistencia: %s \n", alumnos[i].asistencias);
    }
    /*for(int i = 0; i < 3; i++){
        printf("el alumno %s de legajo %d  asistio a %s clases %d\n ", alumnos[i].nombre, alumnos[i].legajo, alumnos[i].asistencias, alumnos[i].clase);
    }
    printf("\n");*/
};
