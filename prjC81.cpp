#include <stdio.h>
#include <math.h>
struct phanso{
	int tuSo;
	int mauSo;
};
void nhap(struct phanso &d){
	printf("Nhap vao tu so: ");
	scanf("%d", &d.tuSo);
	do{
		printf("Nhap vao mau so: ");
		scanf("%d", &d.mauSo);
		if(d.mauSo==0) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(d.mauSo==0);
}
void in(struct phanso d){
	if(d.mauSo<0)
	{
		d.tuSo*=-1;
		d.mauSo*=-1;
	}
	printf("%d/%d", d.tuSo, d.mauSo);
}
void congps(struct phanso d1, struct phanso d2, struct phanso &d3)
{
	if(d1.mauSo==d2.mauSo) 
	{
		d3.mauSo=d2.mauSo;
		d3.tuSo=d2.tuSo+d1.tuSo;
	}
	if(d1.mauSo!=d2.mauSo)
	{
		d3.mauSo=d1.mauSo*d2.mauSo;
		d3.tuSo=d1.tuSo*d2.mauSo+d2.tuSo*d1.mauSo;
	}
}
int ucln(int a, int b)
{
	a=abs(a);
	b=abs(b);
	if(a==0||b==0) return a+b;
	if(a==b) return a;
	while(a!=b)
	{
		if(a>b) a-=b;
		if(a<b) b-=a;
	}
	return a;
}
void rutgon(struct phanso &d)
{
	while(ucln(d.tuSo,d.mauSo)!=1)
	{
		int c=ucln(d.tuSo,d.mauSo);
		d.mauSo/=c;
		d.tuSo/=c;
	}
}
phanso trups(phanso d1, phanso d2)
{
	phanso ketqua;
	ketqua.tuSo=d1.tuSo*d2.mauSo-d2.tuSo*d1.mauSo;
	ketqua.mauSo=d1.mauSo*d2.mauSo;
	rutgon(ketqua);
	return ketqua;
}


int main()
{
	//rut gon phan so 
	//khai bao bien
	struct phanso ps1, ps2, ps3;
	printf("Nhap vao phan so thu nhat: \n");
	nhap(ps1);
	printf("Nhap vao phan so thu hai: \n");
	nhap(ps2);
	congps(ps1,ps2,ps3);
	rutgon(ps3);
	printf("%d/%d + %d/%d = %d/%d\n", ps1.tuSo,ps1.mauSo,ps2.tuSo,ps2.mauSo,ps3.tuSo,ps3.mauSo);
	in(ps1); printf(" - "); in(ps2); printf(" = "); in(trups(ps1,ps2));
}
