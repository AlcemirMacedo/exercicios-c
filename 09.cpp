#include <stdio.h>
int main(){
	char letra;
	int a = 10;
	letra = 'L';
	letra = letra + a%2;
	printf("a = %d e letra = %c.\n", a, letra);
}
