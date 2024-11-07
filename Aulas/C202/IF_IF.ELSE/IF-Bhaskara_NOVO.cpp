#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	double A,B,C;
	double delta;
	double R1,R2;
	
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	delta = (pow(B,2)) - 4*A*C;
	
	if(delta < 0 || A == 0)
	{
		cout << "Impossivel de calcular" << endl;
		
	}
	else if(delta > 0 || A != 0)
	{
		cout << fixed << setprecision(5);
		
		R2 = ((- B - sqrt(delta)) / (2*A));
		R1 = ((- B + sqrt(delta)) / (2*A));
		
		cout << "R1 = " << R1 <<endl;
		cout << "R2 = " << R2 <<endl;
		
		
		
	}
		
	
	
	
	
	
	return 0;
}