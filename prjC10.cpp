#include <stdio.h>
int main()
{
	//khai bao bien
	float x,a,b;
	//nhap du lieu
	printf("nhap vao du lieu sao cho a khac 0, b bat ki");
	printf("\nnhap vao so nguyen a= ");
	scanf("%f", &a);
	printf("nhap vao so nguyen b= ");
	scanf("%f", &b);
	//xu li bai toan
	x=-b/a;
	//dua ra ket qua
	printf("nghiem cua phuong trinh ax=b la %f ", x);		
}
