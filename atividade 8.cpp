#include <stdio.h>

int soma(int a, int b) {
	printf ("digite o valor de a: \n");
		scanf ("%d", a);
	printf ("digite o valor de b: \n");
   		 scanf ("%d", b);
    return (a + b);
}

int main()
{
	int resultado = int soma;
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
