#include <stdio.h>

int main()
{
    printf("Hola mundo\n\n");
    int num=10, *p;
    p=&num;
    printf("\nEl puntero contiene (apunta a): %d", *p);
    printf("\nLa dirección de memoria almacenada por el puntero: %p", p);
    printf("\nLa dirección de memoria de la variable %p", &num);
    printf("\nLa dirección de memoria del puntero %p", &p);
    printf("\nEl tamaño de memoria utilizado por la variable puntero: %d", sizeof(p));

    return 0;

}
