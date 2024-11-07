#include <iostream>
using namespace std;

struct dados
{
	char nome[50];
	int pag;


};
int main()
{
	dados livro[10];
	int i, n;
	int maior = 0;
	int menor = 10000;
	int auxMaior = 0;
	int auxMenor = 0;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(livro[i].nome, 50);
		cin >> livro[i].pag;

		if(livro[i].pag > maior)
		{
			maior = livro[i].pag;
			auxMaior = i;
		}

		if(livro[i].pag < menor)
		{
			menor = livro[i].pag;
			auxMenor = i;
		}
	}

	cout << "Menor: " << livro[auxMenor].nome << endl;
	cout << "Maior: " << livro[auxMaior].nome << endl;


	return 0;
}

