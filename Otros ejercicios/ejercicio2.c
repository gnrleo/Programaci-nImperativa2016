#include <stdio.h>

float main() {
    
    char dato1;
    int cantidad;
    float precio;
    float total;
    
    printf("Ingresar que producto se compro:\n");
    scanf("%c", &dato1);
    
    printf("Ingrese la cantidad de productos comprados:\n");
    scanf("%d", &cantidad);
    
    printf("Ingrese el valor del producto:\n");
    scanf("%f", &precio);
    
    total= cantidad*precio;
    
    printf("El valor de la factura es: %f\n", total);
    
    return 0;
}