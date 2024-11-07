#include <iostream>
using namespace std;

void converte(int dia)
{
	int anos, meses, dias;

	anos = dia/365;
	meses = (dia%365)/30;
	dias = (dia % 365) % 30;
	
	
	cout<<anos <<" Anos "<<meses <<" meses "<<dias<< " dias "<<endl;
	
}
	
int main()
{	
	
	int dia;
	
	cout << "Quantos dias se passaram: "<<endl;
	
	cin >> dia;
	
	conv(dia);
	
	return 0;
}