#include <stdio.h>
int main()
{
	//nhap so duong n tu ban phim, in ra man hinh cac so le tu 1 den n
	//khai bao bien
	int n,i;
	//thuat toan va dien dap an
	lable:
		printf("nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
	if(n<0)
	{
		goto lable;
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		else
		{
			printf("%d\n",i);
		}
	}		
}
