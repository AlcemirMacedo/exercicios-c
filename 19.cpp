#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	float nota1, nota2, nota3, media;
	printf("Nota 1 = ");
	scanf("%f", &nota1);
	printf("Nota 2 = ");
	scanf("%f", &nota2);
	printf("Nota 3 = ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	printf("Media = %.2f", media);
	
	if(media >= 7)	printf(", Aluno aprovado!");
	
	else printf(", Aluno reprovado");
	
}
