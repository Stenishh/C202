#include <iostream>
using namespace std;

int main()
{
	int cod;
	double altura;
	int idade;
	int i;
	int maior = -9999;
	int menor = 9999;

	// leitura do codigo
	do
	{
		cout << "Qual eh o codigo? (cod >= 0)" << endl;
		cin >> cod;
		if(cod < 0) // se o codigo for menor que 
		{
			cout << "CODIGO INVALIDO, REPITA!" << endl; // mensagem caso o codigo for menor que zero
		}
	}
	while(cod < 0); // enquanto o cod for diferente de 0 ele ira repetir!

	while( cod != 0) // leitura pra quando o codigo for diferente de 0
	{
		do // leitura da altura 
		{
			cout << "Qual eh sua altura ? (1.0 a 1.70)" << endl;
			cin >> altura;
			
			if(altura < 1.0 || altura > 1.70) // se for menor ou maior que o indicado, aparecera mensagem para repetir
			{
				cout << "ALTURA INVALIDA, REPITA!" << endl; 
			}

		}while(altura < 1.0 || altura > 1.70);

		do // leitura da idade
		{
			cout << "Qual eh sua idade? (10 a 14)" << endl;
			cin >> idade;
			
			if(idade < 10 || idade > 14) // se a idade for menor ou maior que os indicados aparecera uma mensagem para repetir
			{
				cout << "IDADE INVALIDA, REPITA!" << endl; 
			}
			
		}while(idade < 10 || idade > 14);

		i++; // indice 

		if(idade > maior) // leitura das idades registradas, para ver qual eh a maior idade
		{
			maior = idade;
		}
		if( idade < menor) // leitura das idades registradas para ver qual a menor idade
		{
			menor = idade;
		}

		do // leitura do codigo novamente, caso queria sair, digitar 0!
		{
			cout << "Qual eh o codigo? (cod >= 0)" << endl;
			cin >> cod;
			if(cod < 0)
			{
				cout << "CODIGO INVALIDO, REPITA!" << endl;
			}
		}
		while(cod < 0);



	}


cout <<"A maior idade:"<< maior << endl; // mostrando a maior idade

cout <<"A menor idade:"<< menor << endl; // mostrando a menor idade






	return 0;
}
