#include <stdio.h>
#include <math.h>

int main()
{
	//tinh tien thuc linh cua mot nhan vien trong xi nghiep
	//khai bao bien 
	int n,luong, phu, tam;
	//nhap du lieu 
	do
	{
		printf("Nhap vao so ngay cong (1<=n<=31): ");
		scanf("%d", &n);
		if(n<=0||n>=32) printf("So ngay cong khong hop le, moi nhap lai!\n");
	}
	while(n<=0||n>=32);
	do 
	{
		printf("Nhap vao luong chinh (0<luong): ");
		scanf("%d", &luong);
		if(luong<=0) printf("Luong khong hop le, moi nhap lai!\n");
	}
	while(luong<=0);
	do 
	{
		printf("Nhap vao tien tam ung (0 <= tien tam ung <= luong): ");
		scanf("%d", &tam);
		if(tam<0||tam>luong) printf("Tien tam ung khong hop le, moi nhap lai!\n");
	}
	while(tam<0||tam>luong);
	do 
	{
		printf("Nhap vao phu cap (0<= phu cap): ");
		scanf("%d", &phu);
		if(phu<0) printf("Tien phu cap khong hop le, moi nhap lai!\n");
	}
	while(phu<0);
	float thuclinh=(luong*n)/26+phu-tam;
	if(26-n>5) thuclinh=(thuclinh*4)/5;
	if(26-n<-3) thuclinh=(thuclinh/10)*11;
	printf("luong cua nhan vien la: %.0f", (ceil(thuclinh/1000)-1)*1000);
}
