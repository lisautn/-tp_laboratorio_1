#include <stdio.h>
#include "biblioteca.h"



int suma_numero(int numero1, int numero2)
{
 int resultado;
 resultado =numero1+ numero2;
 return resultado;
}
int resta_numero(int numero1, int numero2)
{
 int resultado;
 resultado =numero1-numero2;
 return resultado;
}
int multiplicacion_numero(int numero1, int numero2)
{
 int resultado;
 resultado =numero1*numero2;
 return resultado;
}
int divicion_numero(int numero1, int numero2)
{
 int  x=numero1;
 int  y=numero2;

 if (y==0)
 {

    printf("no se divide");
 }
 else
 {
 return x/y;
 }
}
int factorial_numero(int numero1, int numero2)
 {
    int  x=numero1;
    int  y=numero2;
    int i;
    int contador = 1;
    for ( i = 1; i <= x; i++)
    {
        contador = contador*i;
    }
    return contador;

 }
