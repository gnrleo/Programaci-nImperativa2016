#include <stdio.h>

void main(){

    int operacion;
    float numerouno;
    float numerodos;
    float resultado;

    while((operacion!=5)){

    printf("\n\n+++++++CALCULADORA DE DOS NÚMEROS+++++++\n\n");

    printf("¿Que operación desea realizar?\n\n");
    printf("1-Sumar\n");
    printf("2-Restar\n");
    printf("3-Multiplicar\n");
    printf("4-Dividir\n");
    printf("5-Salir\n\n");
    printf ("Opcion: ");
    scanf("%d", &operacion);

 if ((operacion>=1)&&(operacion<=5))
    {


    switch("%d", operacion){
        case 1:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La suma de los números %f + % f = %f", numerouno,numerodos,numerouno+numerodos);
            getchar();
            break;
        case 2:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La resta de los números %f - % f = %f", numerouno,numerodos,numerouno-numerodos);
            break;
        case 3:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La multiplicación de los números %f * % f = %f", numerouno,numerodos,numerouno*numerodos);
            break;
        case 4:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La divición de los números %f / % f = %f", numerouno,numerodos,numerouno/numerodos);
            break;
        default:{}break;
            }
        }
    }
}