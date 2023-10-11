#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("dien du lieu vao so a: ");
	scanf("%d", &a);
	printf("dien du lieu vao so b: ");
	scanf("%d", &b);
	printf("\n%d == %d la %d", a, b, a==b);
	printf("\n%d != %d la %d", a, b, a!=b);
	printf("\n%d >= %d la %d", a, b, a>=b);
	printf("\n%d <= %d la %d", a, b, a<=b);
	printf("\n%d > %d la %d", a, b, a>b);
	printf("\n%d < %d la %d", a, b, a<b);
	printf("dien du lieu vao so c: ");
	scanf("%d", &c);
	printf("dien du lieu vao so d: ");
	scanf("%d", &d);
	printf("\n%d == %d la %d", c, d, c==d);
	printf("\n%d != %d la %d", c, d, c!=d);
	printf("\n%d > %d la %d", c, d, c>d);
	printf("\n%d < %d la %d", c, d, c<d);
	printf("\n%d >= %d la %d", c, d, c>=d);
	printf("\n%d <= %d la %d", c, d, c<=d);
}
