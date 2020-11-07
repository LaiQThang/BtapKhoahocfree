#include <iostream>
using namespace std;

int main ()
{
// cach 1: if - else
	int a, b;
	cout << " nhap a :";
	cin >>a;
	cout << " nhap b :";
	cin >>b;
		if (a>b)
			cout << " a lon nhat." << endl;
		else 
			cout << " b lon nhat.\n";
// cach 2: toan tu 3 ngoi

	printf (" nhap a:");
	scanf ("%d", &a);
	printf (" nhap b:");
	scanf ("%d", &b);
		(a>b)? printf (" a lon nhat."): printf (" b lon nhat.");
	return 0;
}
