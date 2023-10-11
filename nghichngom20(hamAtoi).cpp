#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int sum=0;
	char string[10];
	printf("Nhap vao mot day la: ");
	fgets(string,20,stdin);
	string[strlen(string)-1]='\0';
	fflush(stdin);
	printf("Day ban dau la: ");
	for(int i=0;i<strlen(string);i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
	for(int i=0;i<strlen(string);i++)
	{
		sum=sum*10+(string[i]-48);
	}
	printf("Ket qua chuoi so duoi dang int la: %d", sum+1);
}
