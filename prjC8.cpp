#include <stdio.h>
int main()
{
	int a,b;
	printf("nhap vao so a= ");
	scanf("%d", &a);
	printf("nhap vao so b= ");
	scanf("%d", &b);
	printf("so %d la so %s", a, (a%2==0)?"chan":"le");
	printf("\nso %d %s so %d", a, (a==b)?"bang":"khac", b);
	float c,d;
	printf("\nnhap vao so c= ");
	scanf("%f", &c);
	printf("nhap vao so d= ");
	scanf("%f", &d);
	int x=c, y=d;
	printf("so %f %s so nguyen ", c, (c-x==0)?"la":"khong la");
	printf("\nso %f %s so nguyen ", d, (d-y==0)?"la":"khong la");		
}
