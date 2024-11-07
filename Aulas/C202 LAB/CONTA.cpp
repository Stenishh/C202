#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	
	int cont = 0, x , soma = 0;
	
	for(int i = 0; i < 10; i++)
	{
		cin >> x;
		
		soma = soma + x;
		
		if(x>0)
		{
			cont++;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << "Positivo = " << cont << endl;
	cout << "Media " << soma/10.0 << endl;
	
	
	
	
	return 0;
}