#include <stdio.h>

int checknhuan(int y)
{
	if(y%4==0&&y%100!=0) return 1;
	else if(y%400==0) return 1;
	return 0;
}
int checkngay(int d, int m, int y)
{
	if(d<1||d>31||m>12||m<1) return 0;
	if((m==2||m==4||m==6||m==9||m==11)&&d==31) return 0;
	else if(m==2&&d==30) return 0;
	else if(m==2&&d==29)
	{
		if(checknhuan(y)==1) return 1;
		else return 0;
	}
	return 1;
}
int tongngaytrongnam(int y)
{
	if(checknhuan(y)==1) return 366;
	else return 365;
}
int sttngaytrongnam(int d, int m, int y)
{
	int stt=0;
	stt+=d;
	m--;
	while(m>0)
	{
		switch (m)
		{
			case 1:
			{
				stt+=31;
				break;
			}
			case 3:
			{
				stt+=31;
				break;
			}
			case 5:
			{
				stt+=31;
				break;
			}
			case 7:
			{
				stt+=31;
				break;
			}
			case 8:
			{
				stt+=31;
				break;
			}
			case 10:
			{
				stt+=31;
				break;
			}
			case 4:
			{
				stt+=30;	
				break;
			}
			case 6:
			{
				stt+=30;	
				break;
			}
			case 9:
			{
				stt+=30;	
				break;
			}
			case 11:
			{
				stt+=30;	
				break;
			}
			case 2:
			{
				if(checknhuan(y)==1) 
				{
					stt+=29;
				}
				else 
				{
					stt+=28;
				}
				break;
			}
		}
		m--;
	}
	return stt;
}
int demngay(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int sum=0;
	if(y1==y2)
	{
		sum+=sttngaytrongnam(d2,m2,y2)-sttngaytrongnam(d1,m1,y1)+1;
	}
	else if(y1!=y2)
	{
		sum+=sttngaytrongnam(d2,m2,y2)+(tongngaytrongnam(y1)-sttngaytrongnam(d1,m1,y1)+1);
		for(int i=y1+1;i<y2;i++)
		{
			sum+=tongngaytrongnam(i);
		}
	}
	return sum;
	
}
int main()
{
	//dem ngay
	//khai bao bien 
	int d1,d2;
	int m1,m2;
	int y1,y2;
	//nhap du lieu 
	do
	{
		printf("Nhap ngay bat dau (ngay/thang/nam): ");
		scanf("%d %d %d", &d1, &m1, &y1);
		if(checkngay(d1,m1,y1)==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(checkngay(d1,m1,y1)==0);
	do
	{
		printf("Nhap ngay hien tai (ngay/thang/nam): ");
		scanf("%d %d %d", &d2, &m2, &y2);
		if(checkngay(d2,m2,y2)==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(checkngay(d2,m2,y2)==0);
	//goi ham va dien dap an
	
	if(demngay(d1,m1,y1,d2,m2,y2)>0) printf("Tong thoi gian = %d\n", demngay(d1,m1,y1,d2,m2,y2));
	else if(demngay(d1,m1,y1,d2,m2,y2)==0) printf("Hom nay la ngay dau tien!\n");
	else if(demngay(d1,m1,y1,d2,m2,y2)<0) printf("Chuong trinh gap phai loi, chung toi se bao tri trong thoi gian som nhat co the!\n");
	
}
