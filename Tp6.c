#include <stdio.h>

#define PI 3.14

int calcularAreaRectangulo(int a, int b) {
	int c;
	c = a * b;
	return c;
}

int calcularPerimetroRectangulo(int a, int b) {
	int c;
	c = a * 2 + b * 2;
	return c;
}

float calcularAreaCirculo(int a) {
	float c;
	c = PI * a * a;
	return c;
}

float calcularPerimetroCirculo(int a) {
	float c;
	c = PI * a * 2;
	return c;
}

void imprimirResultados(int figura) {
	int a, b;
	
	if (figura == 1) {
		
		printf("Ingrese la base: ");
		scanf("%d", &a);
		
		printf("Ingrese la altura: ");
		scanf("%d", &b);
		
		printf("Area: %d\n", calcularAreaRectangulo(a, b));
		printf("Perimetro: %d\n", calcularPerimetroRectangulo(a, b));
		
	} else if (figura == 2) {
		
		printf("Ingrese el radio: ");
		scanf("%d", &a);
		
		printf("Area: %.2f\n", calcularAreaCirculo(a));
		printf("Perimetro: %.2f\n", calcularPerimetroCirculo(a));
		
	} else {
		printf("Figura incorrecta\n");
	}
}

int main(void) {
	
	int figura;
	
	printf("Que figura desea calcular?\n");
	printf("1 = Rectangulo\n");
	printf("2 = Circulo\n");
	
	scanf("%d", &figura);
	
	imprimirResultados(figura);
	
	return 0;
}
