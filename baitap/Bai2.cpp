#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << " nhap a :";
	cin >> a;
	cout << " nhap b :";
	cin >> b;
		if (a>0 && b>0 || a<0 && b<0)
			cout << " a, b cung dau." << endl;
		else
			cout << " a, b trai dau.";
	return 0;
}
