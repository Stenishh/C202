#include <iostream>
#include <cstring>
using namespace std;

struct infos
{
	char nome[50];
	int idade;
	char gpidade;
	int cont;

};
int main()
{
	infos dados[100];
	int i = 0;
	int saber;
	int maiorq;
	int cont = 0;

	do
	{
		cont++;
		cout << "Nome: " << endl;
		
		cin.ignore();
		cin.getline(dados[i].nome, 100);


		cout << "Idade:" << endl;
		cin >> dados[i].idade;

		cout << "Esta em qual categoria?  C - ate 11 anos e J - acima de 11 anos" << endl;
		cin >> dados[i].gpidade;

		cout << "Deseja continuar? 1 - para sim e 2 para nao." << endl;
		\
		cin >> dados[i].cont;

	}
	while(dados[i].cont != 2);

	cout << "lidos:" << cont << endl;
	cout << "Deseja mostrar pessoas abaixo de quantos anos?: " << endl;
	cin >> saber;

	for(i = 0; i < cont; i++)
	{
		if(dados[i].idade < saber)
		{
			maiorq = i;
		}
		cout << dados[maiorq].nome << endl;
	}








	return 0;
}
