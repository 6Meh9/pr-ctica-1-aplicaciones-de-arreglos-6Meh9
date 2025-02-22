#include <stdio.h>

int main() 
{
    int mat[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        //printf ("%p\n", &mat[i]);
        for(int j=0;j<3;j++)
        {
            printf ("El valor que contiene es: %i \n", mat[i][j]);
            printf ("La direccion de la celda es: %p\n", &mat[i][j]);
        }

    }

    return 0;
}
