#include <stdio.h>

int cuadrado(int num);
void cuadradovoid(int num);
void direcciones(int *num);
void Invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{   
    int a, *p, b, *q;
    p=&a;
    q=&b;
    printf("Ingrese un número: ");
    scanf("%d", &a);
    printf("\nEl cuadrado del número es %d", cuadrado(a));
    cuadradovoid(a);
    direcciones(p);
    printf("\nIngrese otro número: ");
    scanf("%d", &b);
    printf("\nEl número a es %d y el número b es %d", a, b);
    
    Invertir(p,q);

    printf("\nEl número a es %d y el número b es %d", a, b);

    int c, d, *r, *s;
    r=&c;
    s=&d;
    printf("\nIngrese un tercer número: ");
    scanf("%d", &c);
    printf("\nIngrese un cuarto número: ");
    scanf("%d", &d);
    orden(r, s);
    printf("\nLos números reordenados son: %d y %d.", c, d);
    return 0;
}

int cuadrado(int num)
{
    return (num*num);
}

void cuadradovoid(int num)
{
    printf("\nEl cuadrado del número usando función de tipo void es %d", num*num);
}

void direcciones(int *num){
    printf("\nLa dirección de memoria de la variable es %p.", num);
    printf("\nEl contenido de la variable es %d", *num);
}

void Invertir(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
    printf("\n\n----------INVIRTIENDO NÚMEROS--------------");
}

void orden(int *a, int *b)
{
    if (*a>*b){
        int aux=*b;
        *b=*a;
        *a=aux;
    }
    printf("\n\n---INVIRTIENDO EL ORDEN DE MENOR A MAYOR---");
}