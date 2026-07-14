#include <stdio.h>

int main(int argc, char *argv[]) {
	float pesoenkg, alturaenmetros, IMC;
do{
printf("ingrese su altura en metros: \n");
scanf("%f", &alturaenmetros);
if (alturaenmetros <= 0){
	printf("ingrese una altura valida \n ");
}}
while (alturaenmetros <= 0);
do{
	printf("ingrese su peso en kilogramos: \n");
	scanf("%f", &pesoenkg);
	if (pesoenkg <= 0){
		printf("ingrese un peso valido \n ");
	}}
while (pesoenkg <= 0);

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
printf("IMC es de: %.2f \n", IMC);
	printf("    Índice    |  Condición \n -----------------------------\n\n <18.5     |  Bajo peso\n 18.5 a 24.9  |  Normal \n 25.0 a 29.9  |  Sobrepeso \n >=30     |  Obesidad");
	
	
	return 0;
}

