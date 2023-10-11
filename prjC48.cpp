#include <stdio.h>
#include <math.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &a, int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void sort(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
}
void tachchanle(int a[], int n, int b[], int &m, int c[], int &k)
{
	m=0;
	int ib=0;
	k=0;
	int ic=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			m++;
			b[ib]=a[i];
			ib++;
		}
		if(a[i]%2!=0)
		{
			k++;
			c[ic]=a[i];
			ic++;
		}
	}
}
void tachduongam(int a[], int n, int b[], int &m, int c[], int &k)
{
	m=0;
	k=0;
	int ib=0;
	int ic=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			m++;
			b[ib]=a[i];
			ib++;
		}
		if(a[i]>=0)
		{
			k++;
			c[ic]=a[i];
			ic++;
		}
	}
}
void tachnholon(int a[], int n, int b[],int &m, int c[], int &k)
{
	int ib=0;
	int ic=0;
	if(n%2==0)
	{
		m=n/2;
		k=n/2;
	}
	else
	{
		m=n/2;
		k=n/2+1;
	}
	sort(a,n);
	for(int i=0;i<m;i++)
	{
		b[ib]=a[i];
		ib++;
	}
	for(int i=k;i<n;i++)
	{
		c[ic]=a[i];
		ic++;
	}
}
int kiemtranguyento(int a)
{
	if(a<=1) return 0;
	if(a>1)
	{
		for(int i=2;i<a;i++)
		{
			if(a%i==0) 
			{
				return 0;
			}	
		}
		return 1;
	}
	
}
void tachnguyento(int a[], int n, int b[], int &m, int c[], int &k)
{
	m=0;
	k=0;
	int ib=0;
	int ic=0;
	for(int i=0;i<n;i++)
	{
		if(kiemtranguyento(a[i])==1)
		{
			m++;
			b[ib]=a[i];
			ib++;
		}
		if(kiemtranguyento(a[i])==0)
		{
			k++;
			c[ic]=a[i];
			ic++;
		}
	}
}
int main()
{
	//tach mot mang 1 chieu thanh 2 mang mot chieu 
	//khai bao bien 
	int n,m,k;
	char gt;
	int a[1001],b[501],c[501];
	//menu
	do
	{
		printf("MENU:\n");
		printf("1 - nhap vao du lieu mang muon tach.\n");
		printf("2 - tach thanh 2 mang: 1 mang chan; 1 mang le.\n");
		printf("3 - tach thanh 2 mang: 1 mang so tu nhien; 1 mang so nguyen am.\n");
		printf("4 - tach thanh 2 mang co so phan tu bang nhau sao cho phan tu mang 1 luon nho hon phan tu mang 2.\n");
		printf("5 - tach thanh 2 mang: 1 mang chi chua so nguyen to, 1 mang chua cac so con lai.\n");
		printf("6 - in ket qua cua lua chon.\n");
		printf("x - thoat khoi chuong trinh.\n");
		printf("xin moi ban chon!\n");
		scanf(" %c", &gt);
		if(gt=='1')
		{
			nhapmang(a,n);
		}
		if(gt=='2')
		{
			tachchanle(a,n,b,m,c,k);
		}
		if(gt=='3')
		{
			tachduongam(a,n,b,m,c,k);
		}
		if(gt=='4')
		{
			tachnholon(a,n,b,m,c,k);
		}
		if(gt=='5')
		{
			tachnguyento(a,n,b,m,c,k);
		}
		if(gt=='6')
		{
			inmang(b,m);
			inmang(c,k);
		}
	}
	while(gt!='x');
}
