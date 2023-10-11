#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n, int m)
{
	for(int i=n;i<n+m;i++)
	{
		printf("%d ", a[i]);
	}	
	printf("\n");
}
void timsoluongkhonggiam(int a[], int n, int b[])
{
	int dem=1;
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]<=a[j+1])
			{
				dem++;
				continue;
			}
			else
			{
				b[k]=dem;
				k++;
				dem=1;
				break;
			}
		}
	}
}
int timmax(int a[], int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i]) max=a[i];
		else continue;
	}
	return max;
}
int main()
{
	//tim mang con khong giam lien tiep dai nhat trong 1 mang to
	//khai bao bien
	int a[1001],n, b[1001], m;
	//nhap du lieu
	nhapmang(a,n);
	//goi ham va dien dap an
	timsoluongkhonggiam(a,n,b);
	int h=timmax(b,n);
	for(int j=0;j<n;j++)
	{
		if(b[j]==h)
		{
			printf("Mang con khong giam lien tiep dai nhat la: \n");
			for(int i=j;i<h+j;i++)
			{
				printf("%d ", a[i]);
			}
			printf("\n");
		}
		else continue;
	}
}
