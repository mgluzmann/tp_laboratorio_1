#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir;
    int opcion=0;
    float x;
    float y;

    do
    {
        printf("1- Ingresar 1er operando (A=%f)\n",x);
        printf("2- Ingresar 2do operando (B=%f)\n",y);
        printf("3- Calcular la suma (%f+%f)\n",x,y);
        printf("4- Calcular la resta (%f-%f)\n",x,y);
        printf("5- Calcular la division (%f/%f)\n",x,y);
        printf("6- Calcular la multiplicacion (%f*%f)\n",x,y);
        printf("7- Calcular el factorial (%.f!)\n",x);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: \n");
                scanf("%f",&x);
                break;
            case 2:
                printf("Ingresar 2do operando: \n");
                scanf("%f",&y);
                break;
            case 3:
                printf("La suma de los dos operandos es igual a: %f\n",sumar(x,y));
                break;
            case 4:
                printf("La resta de los dos operandos es igual a: %f\n",restar(x,y));
                break;
            case 5:
                while(y==0)
                    {
                        printf("No se puede dividir por cero, por favor ingrese otro divisor:\n");
                        scanf("%f",&y);
                    }
                printf("La division de los dos operandos es igual a: %f\n",dividir(x,y));
                break;
            case 6:
                printf("El producto de los dos operandos es igual a: %f\n",multiplicar(x,y));
                break;
            case 7:
                printf("El factorial del operando A es igual a: %.f\n",factorial(x));
                break;
            case 8:
                printf("La suma de los dos operandos es igual a: %f\n",sumar(x,y));
                printf("La resta de los dos operandos es igual a: %f\n",restar(x,y));
                printf("El producto de los dos operandos es igual a: %f\n",multiplicar(x,y));
                printf("El factorial del operando A es igual a: %.f\n",factorial(x));

                while(y==0)
                    {
                        printf("No se puede dividir por cero, por favor ingrese otro divisor:\n");
                        scanf("%f",&y);
                    }
                printf("La division de los dos operandos es igual a: %f\n",dividir(x,y));
                break;
            case 9:
                seguir = 'n';
                break;

        }

        printf("Desea continuar? <s/n>");
        fflush(stdin);
        scanf("%c",&seguir);

        }while(seguir=='s');




    return 0;




}


