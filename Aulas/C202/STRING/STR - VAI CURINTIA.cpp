#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n; // numero de jogadores a serem cadadastrados
	char nome[20]; // nome dos jogadores
	int idade; // idade dos jogadores

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(nome, 20);
		cin >> idade;
	
	 if (idade >= 18)
	
		cout << nome << "" << idade << endl;

	}










	return 0;

}
