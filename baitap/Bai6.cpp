#include <iostream>
using namespace std;

int main()
{
	int dd, mm;
	cout << " nhap ngay sinh:";
	cin >> dd;
	cout << " nhap thang sinh :";
	cin >> mm;
		if(21<=dd<=31 && mm== 3 || 1<=dd<=19 && mm== 04 )
			 cout << " bach duong."<<endl;
		if(20<=dd<=30 && mm== 4 || 1<=dd<=20 && mm== 05 )
		 	cout << " kim nguu."<<endl;
		if(21<=dd<=31 && mm== 5 || 1<=dd<=20 && mm== 06 )
			cout << " song tu."<<endl; 
		if(21<=dd<=30 && mm== 6|| 1<=dd<=22 && mm== 07 )
			 cout << " cu giai."<<endl; 
		if(23<=dd<=31 && mm== 7 || 1<=dd<=22 && mm== 8 )
			 cout << " su tu."<<endl;
		if(23<=dd<=31 && mm== 8 || 1<=dd<=22 && mm== 9 )
			 cout << " xu nu."<<endl;
		if(23<=dd<=30 && mm== 9 || 1<=dd<=22 && mm== 10 )
			 cout << " thien binh."<<endl;
		if(23<=dd<=31 && mm== 10 || 1<=dd<=21 && mm== 11 )
			cout << " than nong."<<endl;
		if(22<=dd<=30 && mm== 11 || 1<=dd<=21 && mm== 12 )
			 cout << " nhan ma."<<endl; 
		if(22<=dd<=31 && mm== 12 || 1<=dd<=19 && mm== 1 )
			 cout << " ma ket."<<endl;
		if(20<=dd<=30 && mm== 1 || 1<=dd<=18 && mm== 2 )
			 cout << " bao binh."<<endl;
		if(19<=dd<=31 && mm== 2 || 1<=dd<=20 && mm== 3 )
			 cout << " song ngu."<<endl;
		else
			cout <<" khong co gia tri tuong ung" << endl;

	return 0;
}
		
