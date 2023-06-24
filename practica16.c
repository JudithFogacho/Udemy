/*Jugadores de un equipo de futbol*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };
    struct jugador jugadores[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del jugador %d\n", i+1);
        gets(jugadores[i] .nombre);
        printf("Ingrese la edad del jugador %d\n", i+1);
        scanf("%d", &jugadores[i] .edad);
        printf("Ingrese la altura del jugador %d\n", i+1);
        scanf("%f", &jugadores[i] .altura);
        fflush(stdin);
    }
    int opcion =-1;
    while (opcion != 0)
    {
        printf("Introduce la opcion que deseas realizar:\1-Listar jugador \n2-Buscar\n3 Jugador mas alto\n0 salir");
        scanf("%d", &opcion);
        if (opcion==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y altura %.2f\n", jugadores[i] .nombre, jugadores[i] .altura);
            }
            
        }
        if (opcion==2)
        {
            char nombrejugador[50];
            printf("Ingrese el nombre del jugador que desea buscar\n");
            gets(nombrejugador);
            int encontrado=0;

            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i] .nombre, nombrejugador)==0)
                {
                    encontrado=1;
                    printf("La edad del jugador es %d y su altura %.2f", jugadores[i] .edad, jugadores[i] .altura);
                }
                
            }
            if (encontrado ==0)
            {
                printf("Jugador no encontrado\n");
            }  
        }
        if (opcion==3)
        {
            float mayoraltura= jugadores[0] .altura;
            char nombrealtura[50];
            int edadmayoraltura=jugadores[0] .edad;
            strcpy(nombrealtura, jugadores[0] .nombre);
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i] .altura > mayoraltura)
                {
                    strcpy(nombrealtura, jugadores [i] .nombre);
                    edadmayoraltura=jugadores[i] .edad;
                    mayoraltura=jugadores[i] .altura;
                }   
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n", nombrealtura, edadmayoraltura);
        }   
    }   
    
    return 0;
}
