/*Escriba un programa que pida al usuario ingresar un numero hasta que este sea cero,
se cerrara el programa y mostrara la suma y el promedio de estos*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num=-1, suma=0, contador=0;
    while (num!=0)
    {
        printf("Ingrese un numero");
        scanf("%f", &num);
        contador++;
        suma+=num;
    }
    float promedio=suma/contador;
    printf("La suma es %f y el promedio es %.2f", suma, promedio);
    return 0;
}
