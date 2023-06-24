/*Escribe un programa que muestre los multiplos de 3 entre 1 y 100*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%3==0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
