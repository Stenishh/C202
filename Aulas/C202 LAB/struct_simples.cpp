#include <iostream>
#include <cstring>
using namespace std;

struct dados 
{
	char nome[50];
	char ani[50];
	char sexo;
};
int main ()
{
	dados pessoa;
	
	cin.getline(pessoa.nome,50);
	cin.getline(pessoa.ani,50);
	cin >> pessoa.sexo;
	
	cout << pessoa.nome << endl;
	cout << pessoa.ani << endl;
	cout << pessoa.sexo << endl;
	
	
	
	
	
	
	
}