/*Escribe un programa que pida un numero y muestre el dia de la semana*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Introduce un numero en el rango 1-7\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf ("Es lunes");
        break;
    case 2:
        printf ("Es martes");
        break;
    case 3:
        printf ("Es miercoles");
        break;
    case 4:
        printf ("Es jueves");
        break;
    case 5:
        printf ("Es viernes");
        break;
    case 6:
        printf ("Es sabado");
        break;
    case 7:
        printf ("Es domingo");
        break;
    default:
        printf("El numero no esta dentro del rango");
        break;
    }
    return 0;
}
