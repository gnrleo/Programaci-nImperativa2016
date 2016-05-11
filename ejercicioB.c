#include <stdio.h>

int  main (){
	int numeros[10];
	int i,suma;
	suma=0;

	for (i=0;i<10;i++){
		printf("Ingrese el numero %d: ",i);
		scanf("%d",&numeros[i]);
		suma=suma+numeros[i];
	}
	printf("la suma los numeros es: %d\n", suma);
}