#include<iostream>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO& p)
{
	cout << "Nhap tu so: ";
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
	else if (p.Mau < 0)
	{
		if (p.Tu < 0)
		{
			cout << "Phan so duong";
		}
		else
		{
			cout << "Phan so am";
		}
	}
	else if (p.Mau > 0)
	{
		if (p.Tu < 0)
		{
			cout << "Phan so am";
		}
		else
		{
			cout << "Phan so duong";
		}
	}
	else if (p.Mau != 0)
	{
		if (p.Tu == 0)
		{
			cout << "Phan so bang khong";
		}
	}
}
int main()
{
	PHANSO pso;
	Nhap(pso);
	Xuat(pso);
	return 0;
}
