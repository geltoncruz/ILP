#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

double volumeCilindro(double, double);

int main() {

	double r = 0, h = 0;

	scanf("%f",&r);
	scanf("%f",&h);

	printf("%.f",volumeCilindro(r,h));

	return 0;
}

double volumeCilindro(double raio, double altura){
	return PI * pow(raio,2) * altura;
}

