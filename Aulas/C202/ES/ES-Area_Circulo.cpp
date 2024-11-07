#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	double X;
	double valor_da_area;

	cin >> X;

	cout << fixed << setprecision(3);

	valor_da_area = 3.14159 * pow(X,2);
	
	cout << "AREA = " << valor_da_area << endl;



					return 0;
}
