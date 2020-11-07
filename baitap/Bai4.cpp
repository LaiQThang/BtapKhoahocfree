#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
 int main()
{
	int thu;
	printf ( " nhap so thu :");
	scanf ( " %d ", &thu);
				switch (thu)
				{
			case 2: printf (" thu hai"); break;
			case 3: printf (" thu ba."); break;
			case 4: printf (" thu tu."); break;
			case 5: printf (" thu nam."); break;
			case 6: printf (" thu sau."); break;
			case 7: printf (" thu bay."); break;
				default: ( " khong co thu nao tuong ung."); break;
		}
	return 0;
}
