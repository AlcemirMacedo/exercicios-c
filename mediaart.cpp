#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	float nota1, nota2, nota3, media;
	printf("Digite nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	printf("A média aritimetica das noras eh: %.2f", media);
}

