//Escribe un programa que pida al usuario 3 caracteres y
// los muestre por consola separados por guiones
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a, b, c;
    printf("Ingrese 3 caracteres\n");
    scanf("%c %c %c", &a, &b, &c);

    printf("%c-%c-%c", a, b, c);
    return 0;
}
