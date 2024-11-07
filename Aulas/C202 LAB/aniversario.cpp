#include <iostream>
using namespace std;

int main ()
{
	char x[100];
	char y[100];
	char z;
	
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	switch(z)
	{
        case 1:
			cout << " janeiro" << endl;
			break;
		case 2:
			cout << " fevereiro" << endl;
			break;
		case 3:
			cout << " março" << endl;
			break;
		case 4:
			cout << "abril" << endl;
			break;
		case 5:
			cout << "maio" << endl;
			break;
		case 6:
			cout << "junho" << endl;
			break;
        case 7:
			cout << "julho" << endl;
			break;
        case 8:
			cout << "agosto" << endl;
			break;
        case 9:
			cout << "setembro" << endl;
			break;
        case 10:
			cout << "outubro" << endl;
			break;
        case 11:
			cout << "novembro" << endl;
			break;
        case 12:
			cout << "dezembro" << endl;
			break;
		
		cout << x << y << z; 
	}
	
	

	
	
	
	
return 0;	
}