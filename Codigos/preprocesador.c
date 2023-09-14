#include <stdio.h>

#define triste 

int main() {

#ifdef triste
	printf("Hola Mundo, ayuda :(\n");
#else
	printf("Hola Mundo :) ");
#endif
	return 0;

}
