#include <stdio.h>
 
 int main(){
     
     int numeroUno;
     int numeroDos;
     int resultado;
     
     printf ("Ingresar un numero: \n");
     scanf("%d", &numeroUno);
     
     printf("Ingresar un segundo numero: \n");
     scanf("%d", &numeroDos);
     
     resultado = numeroUno + numeroDos;
     
     printf("El resultado de la suma es: %d", resultado);
     
     return 0;
     
 }