#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int main(){
	string nome;
	int idade;
	float altura,peso,IMC;
	
	
	cin >> idade;
	cin >> nome;
	cin.ignore(256,'\n');
	cin >> altura;
	cin >> peso;
	
	IMC=peso/(altura*altura);
	
	 cout << fixed << setprecision(2);
	
	if (   IMC <= 15 )
	{
		cout <<"Extremamente abaixo do peso"<< endl;
	}
	   else if (IMC <= 16 && IMC > 15)
	    {
		cout <<"Gravemente abaixo do peso"<< endl;
        }
        else if (IMC <= 18.5 && IMC > 16)
		 { 
			cout<<"Abaixo do peso ideal"<< endl;
		 } 
		    else if(IMC <= 25&& IMC > 18.5)
		 { 
			cout<<"Peso Ideal"<<endl;
          }
		   else if (IMC <= 30 && IMC > 25)
		   {
		   	cout<<"Sobrepeso"<<endl;
		   }
		   else if (IMC <= 35 && IMC > 30)
		   {
		   	cout<<"Obesidade de grau I"<< endl;
		   }
		   else if (IMC <= 40 && IMC > 35)
		   {
		   	cout<<"Obesidade de grau II "<< endl;
		   }
		   else 
		   {
		   	cout<<"Obesidade de grau III "<< endl;
		   }
		   
		   cout<<"Nome: " << nome << endl;
		    cout<<"Idade: "<< idade << endl;
		      cout<<"IMC: " << IMC <<" kg/m^2"<< endl;
		   
	
	
return 0;
}