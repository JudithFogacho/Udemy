/*Media de un vector*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero real\n");
        scanf("%f", &vector[i]);
    }
    float *punt=&vector[0];
    float media=0;
    for (int i = 0; i < 5; i++)
    {
        media= media + *(punt+1);
    }
    media=media/5;
    printf("La media de los valores es: %.2f", media);
    
    
    return 0;
}
