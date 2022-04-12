#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	int cont;
	for(cont=1; cont<=10; cont=cont+1){
		printf("o numero eh: %d\n ", cont);
	}
	
	for(cont=10; cont>=1; cont=cont-1){
		printf("decremento do cont: %d\n", cont);
	}
}

