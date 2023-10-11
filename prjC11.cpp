#include <stdio.h>
int main()
{
	//khai bao bien
	int a, b;
	float x;
	//nhap du lieu
	printf("nhap he so cho phuong trinh bac nhat ax+b=0");
	printf("\nhe so a= ");
	scanf("%d", &a);
	printf("\nhe so b= ");
	scanf("%d", &b);
	x= (float)-b/a;
	printf("nghiem la %f", x);
	//in ket qua
}
