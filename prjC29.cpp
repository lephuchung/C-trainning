#include <stdio.h>
#include <math.h>

int checkSCP(int x)
{
	int i= (int)sqrt(x);
	if(pow(i,2)==x) return 1;
	else return 0;
}
int main()
{
	//nhap vao so nguyen duong n, in ra cac so chinh phuong tu 1 den n
	//khai bao bien
	int n,i;
	//nhap du lieu
	do
	{
		printf("nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
	}
	while(n<=0);
	//goi ham va dien ket qua
	for(i=1;i<=n;i++)
	{
		if(checkSCP(i)) printf("%d\n", i);
		else continue;
	}
}
