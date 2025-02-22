#include <stdio.h>

int main() 
{ 
    //int arr[5]={1,2,3,4,5};
    double arr[5]={6,7,8,9,10};
    //char arr[5]={"Holaa"};
    for(int i=0;i<5;i++)
    {
        printf ("El CONTENIDO que contiene la celda es: %i\n", arr[i]);
        printf ("La DIRECCION de la celda es: %p\n", &arr[i]);
    }

    return 0;
}
