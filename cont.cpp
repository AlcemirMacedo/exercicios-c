/*#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	int cont;
	for(cont=1; cont<=10; cont=cont+1){
		printf("%d\n", cont);
	}
	
}*/

//Mostrar os 10 primeiros números inteiros e positivos em ordem descrescente

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*int main(){
	int cont;
	for(cont=10; cont>=0; cont=cont-1){
		printf("%d\n",cont);
	}
	
}*/

int main(){
	
	int num;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	while(num!=0){
		printf("O numero digitado foi = %d\n", num);
		printf("Digite um numero:");
		scanf("%d", &num);
		
	}
	printf("O numero digitado foi = %d\nPreciso sair agora!", num);
	
}

