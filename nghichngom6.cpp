#include <stdio.h>
int main()
{
	//in ra bang so tu 1 den 100, chia thanh 10 hang, trong 1 hang thi so sau lon hon so truoc 10 don vi
	printf("in bang so: \n");
	for(int i=1;i<11;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%3.d ",i+j*10);
		}
		printf("\n");
	}
}
