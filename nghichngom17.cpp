#include <stdio.h>

int main()
{
	//tinh tien lai
	//khai bao bien 
	int m;
	float l,n,kq;
	//nhap du lieu
	do
	{
		printf("Yeu cau gui it nhat 1000vnd\n");
		printf("Nhap so tien gui vao (1000<n) la: ");
		scanf("%f", &n);
		if(n<=1000) printf("Tien gui khong hop le, xin moi nhap lai!\n");
	}
	while(n<=1000);
	kq=n;
	do
	{
		printf("Nhap vao lai suat hang thang (0<l) la: ");
		scanf("%f", &l);
		if(l<=0) printf("Lai suat nhap vao khong hop le, xin moi nhap lai!\n");
	}
	while(l<=0);
	do
	{
		printf("Nhap vao thang gui (1<=m) la: ");
		scanf("%d", &m);
		if(m<1) printf("Thang nhap vao khong hop le, xin moi nhap lai!\n");
	}
	while(m<1);
	for(int i=1;i<=m;i++)
	{
		kq+=kq*l;
	}
	printf("so tien nhan duoc sau %d thang la: %.0f", m,kq);
}
