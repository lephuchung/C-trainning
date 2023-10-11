#include <stdio.h>
int main()
{
	//thu nghiem cac toan tu
	//khai bao bien
	int a=1;
	int b=0;
	int c=1;
	//toan tu &&
	printf("%d && %d = %d", a, b, a&&b);
	printf("\n%d && %d = %d", a, c, a&&c);
	//toan tu ||
	printf("\n%d || %d = %d", a, b, a||b);
	printf("\n%d || %d = %d", a, c, a||c);
	//toan tu phu dinh
	printf("\n!%d = %d", a, !a);
	printf("\n!%d = %d", b, !b); 
}
