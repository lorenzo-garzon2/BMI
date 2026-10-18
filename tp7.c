#include <stdio.h>
#include <stdlib.h>
// https://github.com/lorenzo-garzon2/BMI/tree/main
int main(int argc, char *argv[]) {
	int cant_productos, slot_max, slot_min;
	double *codigos_barra;
	float *precio,max, min;
	
	do{
		printf("Ingrese la cantidad de productos que existen en su inventario\n");
		scanf("%d", &cant_productos);
	} while(cant_productos <= 0);
	
	codigos_barra = malloc (cant_productos * sizeof (double));
	
	if (codigos_barra == NULL){
		printf("Error al cargar la cantidad de productos \n");
		return -1;
	}
	
	
	precio = malloc (cant_productos * sizeof (float));
		
		if (precio == NULL){
			printf("Error al cargar la cantidad de productos: \n");
			return -2;
	}
	
	for( int i = 0; i<cant_productos; i++){
		do{
			printf("Ingrese el codigo de barra del producto %d: \n", i+1);
			scanf("%lf", &codigos_barra[i]);
		} while(codigos_barra[i] > 999999999 || codigos_barra[i] <=0 || codigos_barra[i] != (int)codigos_barra[i]);
		do{
			printf("Ingrese el precio del producto %d: \n", i+1);
			scanf("%f", &precio[i]);
		} while(precio[i] > 999999999 || precio[i] <0);
		
	}
	min = precio[0];
	max = precio[0];
	
	
	for(int i = 0; i<cant_productos; i++){
		if(precio[i]>max){
			slot_max = i;}
	}
	for(int i = 0; i<cant_productos; i++){
		if(precio[i]<min){
			slot_min = i;}
	}
	
	printf("Lista de productos: \n");
	for(int i = 0; i<cant_productos; i++){
		printf("Producto numero %d:", i+1);
		printf("Codigo barra: %.0lf	",codigos_barra[i]);
		printf("Precio: %.32	f	\n",precio[i]);
	}
	printf("El precio maximpo es: %.3f	",precio[slot_max]);
	printf("codigo: %.0lf \n",codigos_barra[slot_max]);
	
	printf("El precio minimo es: %.3f	",precio[slot_min]);
	printf("codigo: %.0lf \n",codigos_barra[slot_min]);
	
	free(precio);
	free(codigos_barra);
	
	return 0;
}

