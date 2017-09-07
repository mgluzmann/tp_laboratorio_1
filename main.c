#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion=0;
    float x;
    float y;
    int flag1=0;
    int flag2=0;

    while(seguir == 's')
    {
        system("cls");

        if(flag1 == 1)
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n",x);
        }
        else
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }

        if(flag2 == 1)
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n",y);
        }
        else
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");


        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: ");
                scanf("%f",&x);
                flag1 = 1;
                break;
            case 2:
                printf("Ingresar 2do operando: ");
                scanf("%f",&y);
                flag2 = 1;
                break;
            case 3:
                if(flag1 == 0 || flag2 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1 y/o 2\n\n");
                }
                else
                {
                    printf("La suma de los dos operandos es igual a: %f\n",sumar(x,y));
                }
                break;
            case 4:
                if(flag1 == 0 || flag2 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1 y/o 2");
                }
                else
                {
                    printf("La resta de los dos operandos es igual a: %f\n",restar(x,y));
                }

                break;
            case 5:
                 if(flag1 == 0 || flag2 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1 y/o 2\n\n");
                }

                else
                {
                while(y==0)
                    {
                        printf("No se puede dividir por cero, por favor ingrese otro divisor:\n");
                        scanf("%f",&y);
                    }
                printf("La division de los dos operandos es igual a: %f\n",dividir(x,y));
                }
                break;
            case 6:
                if(flag1 == 0 || flag2 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1 y/o 2\n\n");
                }
                else

                {
                    printf("El producto de los dos operandos es igual a: %f\n",multiplicar(x,y));
                }
                break;
            case 7:
                if(flag1 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1\n\n");
                }

                else
                {
                    printf("El factorial del operando A es igual a: %.2f\n",factorial(x));
                }
                break;
            case 8:
                if(flag1 == 0 || flag2 == 0)
                {
                    printf("Error. Para iniciar elija opcion 1 y/o 2\n\n");
                }
                else
                {
                    printf("La suma de los dos operandos es igual a: %.2f\n", sumar(x,y));
                    printf("La resta de los dos operandos es igual a: %.2f\n", restar(x,y));
                    printf("El producto de los dos operandos es igual a: %.2f\n", multiplicar(x,y));
                    printf("El factorial del operando A es igual a: %.2f\n", factorial(x));

                    while(y==0)
                    {
                        printf("No se puede dividir por cero, por favor ingrese otro divisor:\n");
                        scanf("%f",&y);
                    }
                printf("La division de los dos operandos es igual a: %f\n",dividir(x,y));
                }

                break;
            case 9:
                seguir = 'n';
                break;

        }

        if (seguir == 's')
        {
            printf("\n\nDesea continuar? <s/n>");
            fflush(stdin);
            scanf("%c",&seguir);
        }


}

        system("cls");

        printf("\n\nGracias por usar esta calculadora!\n\n");






    return 0;

    }




