#include <stdio.h>
int main()
{
	float a,b;
	printf("dien vao 2 so a va b: ");
	scanf("%f %f", &a, &b);
	printf("\n %f", a++);
	printf("\n %f", a);
	printf("\n %f", ++a);
	printf("\n %f", b--);
	printf("\n %f", b);
	printf("\n %f", --b);
}
