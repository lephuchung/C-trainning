#include <stdio.h>
#include <math.h>
float tbc(int a[],int n)
{
	int tong=0;
 	for(int i=0;i<n;i++)
 	{
 		tong+=a[i];
	}
	return (float)tong/n;
}
float tbcsoduong(int a[], int n)
{
	int tong=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			tong+=a[i];
			dem++;
		}
		else continue;
	}
	return (dem>0)?(float)tong/dem:-1;
}
int main()
{
	//khai bao bien
	int a[100];
	int n;
	//nhap du lieu
	do
	{
	printf("nhap vao so phan tu cua mang (1<=n<=100) la: ");
	scanf("%d", &n);
	}
	while(n<1||n>100);
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	//goi ham va dien dap an
	//tbc cac so trong mang
	printf("TBC la: %f\n", tbc(a,n));
	//tbc cac so duong
	float tbcsd=tbcsoduong(a,n);
	if(tbcsd>0) printf("TBC cac so duong la: %f\n", tbcsd);
	else printf("khong tim duoc TBC cac so duong");
}
