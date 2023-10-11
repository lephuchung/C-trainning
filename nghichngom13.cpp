#include <stdio.h>
#include <limits.h>
#include <math.h>

void trans(int n)
{
	int k=0,i=0;
	while(n>=1)
	{	
		if(pow(2,i)>n) 
		{
			k+=pow(10,i-1);
			n-=pow(2,i-1);
			i=0;
			continue;
		}
		if(pow(2,i)<=n)
		{
			i++;
		}	
	}
	printf("so he nhi phan la: %d", k);
}
int main()
{
	//chuyen he 10 ve he 2
	//khai bao bien
	int n;
	//nhap du lieu
	do
	{
		printf("Nhap vao so nguyen duong n muon chuyen (0<=n<%d) la: ", INT_MAX);
		scanf("%d", &n);
	}
	while(n<0);

	//goi ham va dien dap an
 	trans(n);
}
