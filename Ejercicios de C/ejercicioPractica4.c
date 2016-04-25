#include <stdio.h>

float main(){
    
    int hombres;
    int mujeres;
    float totalPersonas;
    float porcentajeHombres;
    float porcentajeMujeres;
    
    printf("Ingresar el numero de Hombres del salon: \n");
    scanf("%d", &hombres);
    
    printf("Ingresar el numero de Mujeres del salon: \n");
    scanf("%d", &mujeres);
    
    totalPersonas = hombres + mujeres;
    
    porcentajeHombres = (hombres*totalPersonas)/100;
    
    printf("El porcentaje de hombres es: %f \n", porcentajeHombres);
    
    porcentajeMujeres = (mujeres*totalPersonas)/100;
    
    printf("El porcentaje de hombres es: %f", porcentajeMujeres);
    
    return 0;
    
}