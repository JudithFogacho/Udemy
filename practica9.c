/*Escribir un problema que pida un numero al usuario y
muestre las notas de ese numero de alumno(aprobado o reprobado))*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, contadorapro=0, contadorrepro=0;
    float nota;
    printf("Ingrese el numero de estudiantes:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Introduce la nota del alumno %d\n", i);
        scanf("%f", &nota);
        if (nota>=5){
            contadorapro++;
        }
        else{
            contadorrepro++;
        }    
    }
    printf("El numero de alumnos aprobados es: %d y el numero de reprobados es:%d", contadorapro, contadorrepro);
    return 0;
}
