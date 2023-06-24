/*Escribe un programa que pida al usuario sus notas y 
compruebe si ha suspendido, se ha sacado un suficiente,
un bien, un notable o un sobresaliente*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float nota;
    printf("Ingrese la nota del alumno:\n");
    scanf("%f", &nota);
    if (nota<5)
    {
        printf("El alumno ha suspendido");
    }
    else if (nota==6)
    {
        printf("Bien");
    }
    else if (nota==7 || nota==8)
    {
        printf("Notable");
    }
    else if (nota==9 || nota==10)
    {
        printf("Sobresaliente");
    }
    else
    { 
        printf("Nota no valida");
    }
    
    
    return 0;
}
