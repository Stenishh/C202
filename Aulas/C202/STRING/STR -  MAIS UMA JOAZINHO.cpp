#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	int n; // numero de alunos da profa
	char nome[50];
	int nota1, nota2, nota3, nota4; // notas dos alunos
	float media;

	cin >> n;

	for(i = 0; i < n ; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);
		cin >> nota1;
		cin >> nota2;
		cin >> nota3;
		cin >> nota4;

		media = (nota1 + 2 * nota2 + 3 * nota3 + 4 * nota4) / 10;
		
		cout << fixed << setprecision(2) << endl;
	
	    cout << nome << " " << media << endl;

	}





			return 0;
}
