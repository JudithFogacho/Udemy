/*Escribe un programa que realice la conversion de euros a pesetas*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float euros;
    printf("Ingrese los euros que desea convertir\n");
    scanf("%f", &euros);
    printf("%.2f euros equivalen a %2.f pesetas", euros, euros*166.386);
    return 0;
}
