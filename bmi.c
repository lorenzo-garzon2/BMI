#include <stdio.h>

int main(int argc, char *argv[]) {
	float pesoenkg, alturaenmetros, IMC;
printf("ingrese su altura en metros: \n");
scanf("%f", &alturaenmetros);

printf("ingrese su peso en kilogramos: \n");
scanf("%f", &pesoenkg);

IMC = pesoenkg / (alturaenmetros * alturaenmetros);

if(IMC >= 30){
	printf("Su IMC es OBESIDAD\n");
}
else if(IMC >= 25.5){
	printf("Su IMC es SOBREPESO\n");
}
else if(IMC <= 18.5){
	printf("Su IMC es NORMAL\n");
}
else{
	printf("Su IMC es BAJO PESO\n");
}
printf("IMC es de: %f \n", IMC);
	printf("    Índice    |  Condición \n -----------------------------\n\n <18.5     |  Bajo peso\n 18.5 a 24.9  |  Normal \n 25.0 a 29.9  |  Sobrepeso \n >=30     |  Obesidad");
	
	
	return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
	float pesoenkg, alturaenmetros, IMC;
printf("ingrese su altura en metros: \n");
scanf("%f", &alturaenmetros);

printf("ingrese su peso en kilogramos: \n");
scanf("%f", &pesoenkg);

IMC = pesoenkg / (alturaenmetros * alturaenmetros);

printf("IMC es de: %f \n", IMC);
	printf("    Índice    |  Condición \n -----------------------------\n\n <18.5     |  Bajo peso\n 18.5 a 24.9  |  Normal \n 25.0 a 29.9  |  Sobrepeso \n >=30     |  Obesidad");
	
	
	return 0;
}

