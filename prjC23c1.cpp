#include <stdio.h>
int main()
{
	//tim ucln cua 2 so nhap vao tu ban phim
	//khai bao bien
	int a,b,ucln,i;
	//nhap du lieu
	printf("nhap vao so a la: ");
	scanf("%d", &a);
	printf("nhap vao so b la: ");
	scanf("%d", &b);
	//thuat toan va dien dap an
	if (a==0&&b==0)
	{
		printf("khong ton tai ucln");
	}
	if (a==0&&b!=0)
	{
		ucln=b;
		printf("uoc chung lon nhat la %d", ucln);
	}
	if (b==0&&a!=0)
	{
		ucln=a;
		printf("uoc chung lon nhat la %d", ucln);
	}
	else if (a!=0&&b!=0)
	{
		if (a<=b)
		{
			for(i=1;i<=a;i++)
			{
				if(a%i==0&&b%i==0)
				{
					ucln=i;
				}
			}
			printf("uoc chung lon nhat la %d", ucln);
		}
		if (a>b)
		{
			for(i=1;i<=b;i++)
			{
				if(a%i==0&&b%i==0)
				{
					ucln=i;
				}
			}
			printf("uoc chung lon nhat la %d", ucln);
		}
	}
}
