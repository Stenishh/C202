#include <iostream>
#include <iomanip>
using namespace std;

double converte(double mph)
{
	double kmph;
	
	kmph = mph*1.60934;
	
	return kmph;
	
}

int main()
{
	double mph;
	double result;
	
	cout <<"Entre com valores mph maiores que 0:"<<endl;
	
	do{
		cin >> mph;
		
	}while(mph < 0);
	
	cout << fixed << setprecision(1);
	result = converte(mph);
	
	
	cout << result <<" Kmh"<< endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}