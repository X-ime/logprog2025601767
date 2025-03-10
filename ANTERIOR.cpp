#include <stdio.h>
int main()
{
	float respuesta;
	int x=3;
	float A= (1/(float)2)*x;
	float B= (3+x)/2.0;
	float C= 2.0*(x*x);
	float D= (2.0+3.0)*x;
	respuesta=(A+B*C)/D;
	printf("respuesta%f", respuesta);
	return 0;
}