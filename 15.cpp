#include <stdio.h>

int main(){
	float altura, peso, imc;
	printf("Entre com a sua altura e o seu peso:\n");
	scanf("%f %f", &altura, &peso);
	imc = (peso/altura)/altura;
	printf("Seu IMC vale %f\n", imc);
}
