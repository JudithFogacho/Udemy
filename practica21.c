/*Calculos de motores*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    struct cilindro{
        float diametro;
        float carrera;
    };

    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int numcilindro;
        float cilindrada;
    };

    struct motor motor1;

    printf("Ingrese el identificador \n");
    scanf("%d", &motor1 .identificador);
    printf("Ingrese el diametro del cilindro \n");
    scanf("%f", &motor1 .cilindro1 .diametro);
    printf("Ingrese la carrera del cilindro \n");
    scanf("%f", &motor1 .cilindro1 .carrera);
    printf("Ingrese el numero de cilindros \n");
    scanf("%d", &motor1 .numcilindro);

    motor1.cilindrada= motor1.numcilindro*(motor1.cilindro1.carrera/10)* 3.14*pow((motor1.cilindro1.diametro/10),2)/4;

    printf("Identificador: %d", motor1.identificador);
    printf("Diametro: %.2f", motor1.cilindro1.diametro);
    printf("Carrera: %.2f", motor1.cilindro1.carrera);
    printf("No cilindros: %d", motor1.numcilindro);
    printf("Cilindrada: %.2f", motor1.cilindrada);
    return 0;
}
