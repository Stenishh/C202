#include <iostream>

using namespace std;



int main()
{
	int cidadeOri;
	int nota;
	int idade;
	int maior = 0;
	int menor = 0;
	int cont = 0;


	cout << "Qual a cidade de origem ? (1) para Santa Rita do sapucai e (2) para outra cidade." << endl;
	cin >> cidadeOri;


	while( cidadeOri != 0)
	{
		cout << "Qual sua nota pra feira? (1) pra boa e (2) pra muito boa." << endl;
		cin >> nota;

		cout << "Qual a sua idade?" << endl;
		cin >> idade;
		
		if(idade > maior)
			maior = idade;

		if(idade < menor)
			menor = idade;

		cont++;

		cout << "Qual a cidade de origem ? (1) para Santa Rita do sapucai e (2)  para outra cidade." << endl;
		cin >> cidadeOri;

	}

	cout << "A maior idade eh: " << maior << endl;
	cout << "A menor idade eh: " << menor << endl;

	return 0;
}
