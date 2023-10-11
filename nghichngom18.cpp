#include <stdio.h>
#include <limits.h>

int kiemtrasochuso(int n)
{
	int k=1;
	int dem=1;
	while(n>k)
	{
		k*10;
		dem++;	
	}
	int kq=dem-1;
	return kq;
}
void tachso(int n, int k, int a[1001], int  &m)
{
	m=kiemtrasochuso(n)-k+1;
	while(n>0)
	{
		int i=0;
		a[i]=n%10;
		n/=10;
		i++;
	}
	int max=INT_MIN;	
	for(int i=0;i<m;i++)
	{
		int he;
		for(int j=i;j<k+i-1;j++)
		{
			he+=a[j];
			he*=10;
		}
		if(he>max) max=he;
	}
	printf("%d", max);
}
int main()
{
	//tach so lon nhat 
	//khai bao bien 
	int n, k, m;
	int a[1001];
	//nhap du lieu
	do
	{
		printf("Nhap so nguyen duong n la: ");
		scanf("%d", &n);
		if(n<1) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1);
	do
	{
		printf("Nhap vao so muon tach (k>0 va k<so chu so cua n) la: ");
		scanf("%d", &k);
		if(k<=0||k > kiemtrasochuso(n)) printf("Nhap loi, xin moi nhap lai!/n");
	}
	while(k<=0||k > kiemtrasochuso(n));
	//goi ham va dien dap an
	
	tachso(n,k,a,m);
	
}
