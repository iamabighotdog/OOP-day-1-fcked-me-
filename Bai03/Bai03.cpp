#include<iostream>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO& p)
{
	cout << "\nNhap tu so: ";
	cin >> p.Tu;
	cout << "Nhap mau so: ";
	cin >> p.Mau;
}
void Xuat(PHANSO p)
{
	if (p.Mau == 0)
	{
		cout << "error";
	}
	else if (p.Mau != 0)
	{
		if (p.Tu == 0)
		{
			cout << "0";
		}
		cout << "\nTu = " << p.Tu;
		cout << "\nMau = " << p.Mau;
	}
}
PHANSO Maxphanso(PHANSO p1, PHANSO p2)
{
	double a = (double)(p1.Tu / p1.Mau);
	double b = (double)(p2.Tu / p2.Mau);
	if (a > b) return p1;
	return p2;
}
int main()
{
	PHANSO ps1, ps2;
	cout << "Nhap vao phan so thu nhat";
	Nhap(ps1);
	cout << "Nhap vao phan so thu hai";
	Nhap(ps2);
	cout << "Phan so lon nhat la: ";
	PHANSO kq = Maxphanso(ps1, ps2);
	Xuat(kq);
	return 0;
}
