#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	int soma = 0;
	for (int cont=1; cont<=10; cont=cont+1){
		soma = soma+cont;
	}
	float media = soma/10;
	printf ("A soma entre 1 e 10 = %f\n", media);
}

