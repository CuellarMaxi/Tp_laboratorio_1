#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float resultado=0;
    int aux=0;

    do
    {
        opcion=0;
        printf("Elija una opcion\n\n");
        printf("1_ Ingresar numero uno A=%.2f\n",numeroUno);
        printf("2_ Ingresar numero dos B=%.2f\n",numeroDos);
        printf("3_ Calcular la suma (A+B)\n");
        printf("4_ Calcular la resta (A-B)\n");
        printf("5_ Calcular la division (A/B)\n");
        printf("6_ Calcular la multiplicacion (A*B)\n");
        printf("7_ Calcular el factorial (A!)\n");
        printf("8_ Calcular todas las operaciones\n");
        printf("9_ Salir\n");
        printf("\n");
        printf("Opcion: ");
        scanf("%d",&opcion);
        fflush(stdin);

        while(opcion>9 || opcion<1)
        {
            printf("Ingrese una opcion valida\n");
            fflush(stdin);
            printf("\nOpcion: ");
            scanf("%d",&opcion);
        }
        switch(opcion)
        {
            case 1:
                printf("ingrese numero uno :\n");
                scanf("%f",&numeroUno);
                aux=numeroUno;
                fflush(stdin);
                system("cls");
                break;
            case 2:
                printf("ingrese numero dos :\n");
                scanf("%f",&numeroDos);
                fflush(stdin);
                system("cls");
                break;
            case 3:
                resultado=sumar(numeroUno,numeroDos);
                printf("El resultado de la suma es :%.2f\n",resultado);
                system("pause");
                fflush(stdin);
                system("cls");
                break;
            case 4:
                resultado=restar(numeroUno,numeroDos);
                printf("el resultado de la resta es :%.2f\n",resultado);
                system("pause");
                fflush(stdin);
                system("cls");
                break;
            case 5:
                resultado=multiplicar(numeroUno,numeroDos);
                printf("el resultado de la multiplicacion es :%.2f\n",resultado);
                system("pause");
                fflush(stdin);
                system("cls");
                break;
            case 6:
                if (numeroDos==0)
                {
                    printf("No se puede dividir entre 0\n");
                    system("pause");
                    fflush(stdin);
                    system("cls");
                }
                else
                {
                    resultado=division(numeroUno,numeroDos);
                    printf("El resultado de la division es :%.2f\n",resultado);
                    system("pause");
                    fflush(stdin);
                    system("cls");
                }
                break;
            case 7:
                if(aux-numeroUno!=0)
                {
                printf("No se puede sacar factorial de numero decimal\n");
                system("pause");
                fflush(stdin);
                system("cls");
                }
                else
                {
                resultado=Factorial(numeroUno);
                printf("El resultado del factorial de numero A es:%.0f\n",resultado);
                system("pause");
                fflush(stdin);
                system("cls");
                }
                break;
            case 8:
                resultado=sumar(numeroUno,numeroDos);
                printf("El resultado de la suma es :%.2f\n",resultado);
                resultado=restar(numeroUno,numeroDos);
                printf("El resultado de la resta es :%.2f\n",resultado);
                resultado=multiplicar(numeroUno,numeroDos);
                printf("El resultado de la multiplicacion es :%.2f\n",resultado);
                if(numeroDos==0)
                {
                    printf("No se puede dividir entre 0\n");
                }
                else
                {
                resultado=division(numeroUno,numeroDos);
                printf("El resultado de la division es :%.2f\n",resultado);
                }
                if(aux-numeroUno!=0)
                {
                     printf("No se puede sacar factorial de numero decimal\n");
                }
                else
                {
                resultado=Factorial(numeroUno);
                printf("El resultado del factorial de numero A es:%.0f\n",resultado);
                }
                system("pause");
                fflush(stdin);
                system("cls");
                break;
            default:
                break;
        }
        fflush(stdin);
    }while (opcion<9);
    return 0;
}
