#include <stdio.h>

int main() 
{
 int arr[3]={3,5,7};
 printf ("La direccion de arr es: %p\n", arr);
 printf("La direccion de arr[0] es: %p\n", &arr[0]);
    return 0;
}
