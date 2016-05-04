#include <stdio.h>

void main(){
    
    int operacion;
    float numerouno;
    float numerodos;
    float resultado;
    
    do
    {
    
    printf("-------CALCULADORA DE DOS NÚMEROS------\n\n\n");
    
    printf("¿Que operación desea realizar?\n");
    printf("Sumar = 1 / Restar = 2 / Multiplicar = 3 / Dividir = 4 / Salir = 5\n");
    scanf("%d", &operacion);
    
 if ((operacion>=1)&&(operacion<=5))
    {
   
      
    switch("%d", operacion){
        caso 1: 
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La suma de los números %f + % f = %f", numerouno,numerodos,numerouno+numerodos);
            break;
        caso 2:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La resta de los números %f - % f = %f", numerouno,numerodos,numerouno-numerodos);
            break;
        caso 3:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La multiplicación de los números %f * % f = %f", numerouno,numerodos,numerouno*numerodos);
            break;
        caso 4:
            printf("Ingrese un numero: \n");
            scanf("%f", &numerouno);
            printf("Ingrese un segundo numero: \n");
            scanf("%f", &numerodos);
            printf("La divición de los números %f / % f = %f", numerouno,numerodos,numerouno/numerodos);
            break;
        default:{}break;
        }
    while(!(eleccion==5));

    } 
   return 0;
}