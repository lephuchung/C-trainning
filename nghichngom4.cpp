#include <stdio.h>
int main()
{
	//in bang cuu chuong rut gon
	//thuat toan va dien dap an 
	printf("bang cuu chuong rut gon: \n");
	for(int i=2;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			printf("%4.d ", i*j);
		}
		printf("\n");
	}
}
