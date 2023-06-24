/*Escriba un programa que se utilice para calcular el precio final de un coche*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float preciobase, kilometraje, consumo, preciofinal;
    printf("Ingrese el valor del auto:");
    scanf("%f", &preciobase);
    printf("Ingrese el valor del kilometraje:");
    scanf("%f", &kilometraje);
    printf("Ingrese el valor de consumo:");
    scanf("%f", &consumo);

    if (kilometraje<20000 && consumo<=5){
        preciofinal=preciobase*1.2;
    }
    else if (kilometraje>20000 && consumo<=5){
        preciofinal=preciobase*1.1;
    }
    else if (consumo>5){
        preciofinal= preciobase*1.05;
    }
    printf("El precio final del auto es: %.2f", preciofinal);
    
    
    return 0;
}
