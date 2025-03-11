#include<iostream>
using namespace std;
struct TOADO 
{
	float x;
	float y;
};
void Nhap(TOADO& cord1, TOADO& cord2)
{
	cout << "Nhap toa do x cua diem 1: ";
	cin >> cord1.x;
	cout << "Nhap toa do y cua diem 1: ";
	cin >> cord1.y;
	cout << "Nhap toa do x cua diem 2: ";
	cin >> cord2.x;
	cout << "Nhap toa do y cua diem 2: ";
	cin >> cord2.y;
}
float KhoangCach(TOADO cord1, TOADO cord2)
{
	float kq = sqrt((cord2.x - cord1.x) * (cord2.x - cord1.x) + (cord2.y - cord1.y) * (cord2.y - cord1.y));
	return kq;
}
int main()
{
	TOADO cord1, cord2;
	Nhap(cord1, cord2);
	cout << "Khoang cach giua 2 diem: " << KhoangCach(cord1, cord2);
	return 0;
}
