#include <stdio.h>

float main(){
    
    int base;
    int altura;
    float area;
    
    printf ("Ingresar la base del triangulo: \n");
    scanf("%d", &base);
    
    printf ("Ingresar la altura del triangulo: \n");
    scanf("%d", &altura);
    
    area = (base*altura)/2;
    
    printf("El area es: %f", area);
    
    return 0;
    
}