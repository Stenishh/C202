#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double p;
	int c;
	
	cin >> p;
	cin >> c;
	
	switch(c)
	{
		case 1:
			cout << p*3.86 << endl;
			break;
		case 2: 
			cout << p*3.77 << endl;
			break;
		case 3:
			cout << p*4.41 << endl;
			break;
		case 4:
			cout << p*0.19 << endl;
			break;
		case 5:
			cout << p*5.00 << endl;
			break;
		default:
			cout << "Codigo Invalido!" << endl;
			break; 
		
		cout << setprecision(3) << fixed << " R$" << p << endl;
		
		




	}
	
	
	
	
	
	
	
	return 0;
}