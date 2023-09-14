#include <stdio.h>
#include <stdlib.h>

int main(){
	//definir array
	int count[10];

	//inicializar
	for(int i=0; i<10; i++)
		count[i] = i+13;

	//mostrar elementos en stdout
	for(int i = 0; i<10, i++)
		printf("count[%d]= %d\n", i, count[i]);

	return 0;
}
