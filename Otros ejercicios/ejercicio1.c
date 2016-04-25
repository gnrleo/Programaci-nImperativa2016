#include <stdio.h>

float main() {
    
    int dato1;
    float dato2;
    float resultado;
    
    printf("Ingrese la cantidad de productos comprados:\n");
    scanf ("%d", &dato1);
    
    printf ("Ingrese el valor del producto:\n");
    scanf("%f", &dato2);
    
    resultado= dato1*dato2;
    
    printf("El valor de la factura es: %f\n", resultado);
    //fflush(stdout);
    //scanf("%f", &resultado);

    return 0;
    

}
