#include <stdio.h>
int fibonaci(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	else return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
	//tim so trong day fibonaci
	//khai bao bien
	int n;
	//nhap du lieu
	do
	{
		printf("nhap vao so tu nhien n muon tim fibonaci la ");
		scanf("%d", &n);
	}
	while(n<0);
	//goi ham va dien dap an 
	printf("fibonaci(%d) = %d",n,fibonaci(n));
	
}
