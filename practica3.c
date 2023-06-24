/*Escribe un programa que pida al usuario el valor de la base y la altura de un rectangulo 
y con ellos calcule su area. A=bxh*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float b, h; //b es la base y h la altura
    printf("Introduzca la base del rectangulo:\n");
    scanf("%f", &b);
    printf("Introduzca la altura del rectangulo:\n");
    scanf("%f", &h);
    float a=b*h;
    printf("El area de su rectangulo es: %.2f\n", a);
    return 0;
}
