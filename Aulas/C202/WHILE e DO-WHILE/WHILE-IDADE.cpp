#include <iostream>
#include <cstring>
using namespace std;



int main ()
{
	// declaracao de dados
	int cont = 0; // variavel pra contar o numero de participantes
	char nome[100]; // variavel para nome
	int idade; //variavel pra idade
	double media = 0;
	




	do // fazer essas condicoes
	{
		cont = cont + 1; // contador para cadastrar
		cout << "Nome dos participantes:" << endl;
		cin.ignore();
		cin.getline(nome, 100);



		cout << "Qual a idade: " << endl;
		cin >> idade;




	}
	while(idade > 0);
	cout << "Foram lidos: " << cont << endl;

	media = idade/cont;

	cout << "media de idades: " << media << endl;












}
