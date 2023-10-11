#include <stdio.h>
#include <math.h>
int main()
{
	//khai bao bien
	int a,b;
	float c,d;
	//nhap du lieu
	printf("nhap vao so nguyen a= ");
	scanf("%d", &a);
	printf("nhap vao so nguyen b= ");
	scanf("%d", &b);
	printf("nhap vao so thuc c= ");
	scanf("%f", &c);
	//dua ra ket qua
	d=(float)a/b;
	printf("lam tron len cua a/b la %f",ceil(d));
	printf("\nlam tron xuong cua a/b la %f", floor(d));
	printf("\ncan bac hai cua so a la %f", sqrt(a));
	printf("\na luy thua b la %f", pow(a,b));
	printf("\ngia tri tuyet doi cua a la %d", abs(a));
	printf("\ngia tri tuyet doi cua c la %f", fabs(c));
}
