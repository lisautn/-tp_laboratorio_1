#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
int opcion ,a,b;


int suma;
int restar;
int dividir;
int multiplicar;
int factorial;
suma=suma_numero(a,b);
restar=resta_numero(a,b);
multiplicar=multiplicacion_numero(a,b);
dividir=divicion_numero(a,b);
factorial=factorial_numero(a,b);

    do{
              system("cls");
        printf("menu de opciones \n\n");
        printf("1. ingrese los valores\n");
        printf("2. sumar \n");
        printf("3. restar\n");
        printf("4. multiplicar\n");
        printf("5. dividir\n");
        printf("6. factorial\n");
        printf("7. salir \n\n");
         scanf("%d",& opcion);
     switch (opcion)
        {

        case 1 :
            system("cls");
            printf("ingrese el primer valor: " );
            scanf("%d",&a);
            printf("ingrese el segundo valor: ");
            scanf("%d", &b);
            break;
        case 2:
            system("cls");
            printf("la suma de %d + %d  es : %d" ,a,b,suma);
            getch( );
            break;
         case 3:
            system("cls");
            printf("la resta de %d - %d es : %d " ,a,b,restar);
            getch();
            break;
         case 4:
            system("cls");
            printf("la multiplicacion de %d * %d es : %d " ,a,b, multiplicar);
            getch();
            break;
        case 5:
            system("cls");
            printf("la divicion de %d / %d es : %d " ,a,b,dividir);
            getch();
            break;
        case 6:
            system("cls");
            printf("la la factorial de %d / %d es : %d " ,a,b,factorial);
            getch();
            break;

        case 7:
                break;
        default :
        printf("no existe ");
        break;
        }
        }while(opcion!=7);

    return 0;
}

