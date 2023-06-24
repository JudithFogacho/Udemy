/*Vector de pesos*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float pesos[5];
    float suma=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un peso para almacenarlo\n");
        scanf("%f", &pesos[i]);
        suma =suma + pesos[i];
    }
    float promedio=suma/5;
    int contmay=0;
    int contmen=0;
    for (int i = 0; i < 5; i++)
    {
        if(pesos[i]>=promedio)
        {
            contmay++;
        }
        else
        {
            contmen++;
        }
    }
    printf("El promedio es: %.2f \n", promedio);
    printf("N° pesos mayores o igual es: %d, N° de pesos menores es: %d", contmay, contmen);
    return 0;
}
