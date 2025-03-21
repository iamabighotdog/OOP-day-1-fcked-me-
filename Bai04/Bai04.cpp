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
	else 
	{
		cout << "\nTu = " << p.Tu;
		cout << "\nMau = " << p.Mau;
	}
}
int gcd(int a, int b) 
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
void RutGon(PHANSO& p) 
{
	int UocChung = gcd(p.Tu, p.Mau);
	p.Tu /= UocChung;
	p.Mau /= UocChung;
}
PHANSO Tong(PHANSO x, PHANSO y) 
{
	PHANSO tong;
	tong.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	tong.Mau = x.Mau * y.Mau;
	RutGon(tong);
	return tong;
}
PHANSO Hieu(PHANSO x, PHANSO y) 
{
	PHANSO hieu;
	hieu.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	hieu.Mau = x.Mau * y.Mau;
	RutGon(hieu);
	return hieu;
}
PHANSO Tich(PHANSO x, PHANSO y) 
{
	PHANSO tich;
	tich.Tu = x.Tu * y.Tu;
	tich.Mau = x.Mau * y.Mau;
	RutGon(tich);
	return tich;
}
PHANSO Thuong(PHANSO x, PHANSO y) 
{
	PHANSO thuong;
	thuong.Tu = x.Tu * y.Mau;
	thuong.Mau = x.Mau * y.Tu;
	RutGon(thuong);
	return thuong;
}
int main() 
{
	PHANSO p1, p2;
	cout << "Nhap vao phan so thu 1";
	Nhap(p1);
	cout << "Nhap vao phan so thu 2";
	Nhap(p2);
	PHANSO kq1 = Tong(p1, p2);
	cout << "Tong cua 2 phan so: ";
	Xuat(kq1);
	PHANSO kq2 = Hieu(p1, p2);
	cout << "\nHieu cua 2 phan so: ";
	Xuat(kq2);
	PHANSO kq3 = Tich(p1, p2);
	cout << "\nTich cua 2 phan so: ";
	Xuat(kq3);
	PHANSO kq4 = Thuong(p1, p2);
	cout << "\nThuong cua 2 phan so: ";
	Xuat(kq4);
	return 0;
}
