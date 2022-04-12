#include <stdio.h>

int main(){
	int idade;
	char inicial;	
	printf("Entre com a sua idade e sua inicial:\n");
	scanf("%d %c", &idade, &inicial);
	printf("Voce tem %d anos e seu nome comeca com %c\n", idade, inicial);
}
