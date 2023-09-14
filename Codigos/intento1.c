#include <stdio.h>

int main() {
	int n1, n2, suma;

	//Aqui pido ingresar dos numeros
	printf("Ingresa un numero: ");
	scanf("%d", &n1);

	printf("Ingresa otro: ");
	scanf("%d", &n2);

	//Calcula la suma 
	suma = n1 + n2;

	printf("La suma de  %d y %d es %d\n",n1, n2, suma);
	return 0;

}
