/*Buscar caracter en cadena*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char cadena[50];
    char caracter;
    printf("Ingrese una cadena\n");
    gets (cadena);
    printf("Ingrese un caracter\n");
    caracter=getchar();
    int i=0;
    int pos=-1;
    while (cadena[i]!='\0' && pos ==-1)
    {
        if(cadena[i]==caracter){
            pos=i;
        }
        i++;
    }
    if(pos!=-1){
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d", caracter, cadena, pos);
    }
    else
        printf("EL caracter %c no se encuentra en la cadena %s", caracter, cadena);
    return 0;
}
