#include <stdio.h>
#include <math.h>
int dk1(int x)
{
	if((x%2==0) && (x%3==0)) return 1;
	else return 0;
}
int dk2(int x)
{
	if(x<=1) return 0;
	else 
	{
	for(int i=2; i<sqrt(x);i++)
	{
		if(x%i==0) return 0;
		else continue;
	}
	return 1;
	}
}
int main()
{
	//liet ke cac phan tu thoa man yeu cau cua de
	//so chan chia het cho 3 
	//so nguyen to
	//khai bao bien, mang
	int n, dem=0;
	int a[1000];
	//nhap du lieu
	do
	{
		printf("nhap vao so phan tu cua mang (0<n<=1000) ");
		scanf("%d", &n);
	}
	while(n<1||1000<n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("so chan chia het cho 3 la: ");
	for(int i=0;i<=n;i++)
	{
		if(dk1(a[i])==1) 
		{
			printf("%d\n", a[i]);
			dem++;
		}
		else continue;
	}
	if(dem==0) printf("khong co\n");
	for(int i=0;i<n;i++)
	{
		if(dk2(a[i])==1) printf("so a[%d] la so nguyen to\n",i);
		else printf("so a[%d] khong la so nguyen to\n",i);
	}
}
