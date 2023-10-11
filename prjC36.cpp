#include <stdio.h>
int main()
{
	//nhap xuat trong mang, tinh tong cac phan tu cua mang
	//khai bao bien, mang
	int n;
	int a[100];
	//nhap du lieu
	do
	{
		printf("nhap vao so phan tu cua mang: ");
		scanf("%d", &n);	
	}
	while(n<1||100<n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	//tinh tong
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong+=a[i];
	}
	printf("\ntong la %d", tong);
}
