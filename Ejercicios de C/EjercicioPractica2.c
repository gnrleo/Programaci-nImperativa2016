#include <stdio.h>

int main(){
    
    int numeroUno;
    int resultado;
    
    printf("Ingresar un numero entero: \n");
    scanf("%d", &numeroUno);
    
    resultado = numeroUno + 1;
    
    printf("El siguiente Numero es: %d", resultado);
    
    return 0;
    
}