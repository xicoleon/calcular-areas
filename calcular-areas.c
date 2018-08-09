




/*
Oficina Git
Professor: Orlewilson B. Maia
Equipe: Francisco, Larissa, Diogo
Data: 08/08/2018
Descrição: Calcular area de circulo, triangulo e quadrado
*/

#include <stdio.h>

int main ()

{

int b;
int h;
int resultado;

	printf("Digite sua base:");
	scanf("%d", &b);

	printf("Digite sua altura:");
	scanf("%d", &h);
	
	resultado = b*h/2;

	printf("Resultado: %d \n", resultado); 

	return 0;
}
