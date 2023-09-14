#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;

	//Inicializar
	a = 73;

	printf("a = %d\n", a);
	printf("&a = %p\n",&a);
         
	//Puntero a entero 
	int *pa;

        //direccion fisica de a 
	pa = &a;

	printf("pa = %p\n",pa);
        printf("*pa = %d\n",*pa);
	printf("&pa = %p\n", &pa);

	return 0;
}




