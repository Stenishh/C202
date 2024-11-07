#include <iostream>
using namespace std;

int main()
{
	int larg,compri;
	double area;
	double pot;
	int soma = 0;
	
	while( larg != 0)
	{
		cout<<"Qual a largura ?"<<endl;
		cin >> larg;
		
		cout <<"Qual o comprimento?"<<endl;
		cin >> compri;
		
		area = larg*compri;
		
		pot = area/18;
		
		soma += pot;
		
		
		
	}
	
	cout <<"A soma total eh de: "<< soma << endl;

	return 0;
}
