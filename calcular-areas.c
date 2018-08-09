/*
Oficina Git
Professor: Orlewilson B. Maia
Equipe: Francisco, Larissa, Diogo
Data: 08/08/2018
Descrição: Calcular area de circulo, triangulo e quadrado
*/

#include <stdio.h>

int calcularquadrado (int b, int h)
{
	printf ("A area do quadrado será : %d\n", b*h);
	return b*h;

}



int main ()
{
	int b, h, areaQ;
	printf ("Hello World\n");
	printf("Qual a base do quadrado?\n");
	scanf ("%d", &b);
	printf ("Qual a altura do quadrado?\n");
	scanf ("%d", &h);	
	areaQ = calcularquadrado (b, h);	
	return 0;
}



