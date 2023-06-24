/*Habitaciones de un hotel*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int informacion[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumabaja=0, sumamedia=0, sumaalta=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (j ==1)
            {
                sumabaja +=informacion[i][j];
            }
            if (j==2)
            {
                sumamedia+=informacion[i][j];
            }
            if (j==3)
            {
                sumaalta+=informacion[i][j];
            }    
        }
    }
    float prombaja=sumabaja/3;
    float prommedia=sumamedia/3;
    float promalta=sumaalta/3;
    printf("Promedio Temporada baja: %.2f\nPromedio temporada media:%.2f\nPromedio temporada alta:%.2f", prombaja, prommedia, promalta);
    return 0;
}
