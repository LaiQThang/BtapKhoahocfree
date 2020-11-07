#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	float DayLon, DayNho, ChieuCao, s;
	cout << " day lon cua hinh thang :";
	cin >> DayLon;
	cout << " day nho cua hinh thang :";
	cin >> DayNho;
	cout << " chieu cao cua hinh thang :";
	cin >> ChieuCao;
		s=((DayLon+DayNho)/2)*ChieuCao;
		cout.setf(ios::fixed);
		cout << " dien tich hinh thang = "<< setprecision(2) << s <<endl;
	return 0;
}
