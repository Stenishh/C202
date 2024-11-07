#include <iostream>

using namespace std;

int main()
{
	struct frutas
	{
		char nome[50];
		double codigo;
		double quant;

	} ;

	frutas dados[100];

	//declaracao das variaveis

	int num, i;
	int cont = 1;
	int cond;
	double codret;
	double ret;


	// cadastro dos produtos
	cout << "Quantos produtos vamos cadastrar? " << endl;
	cin >> num;
	for(i = 0; i < num; i++)
	{
		if(i == 0)
		{
			cout << "Cadastro de Produtos " << endl;
		}

		cout << cont << " produto: " << endl;

		cout << "Nome: ";
		cin.ignore();
		cin.getline(dados[i].nome, 50);

		cout << "Código: ";
		cin >> dados[i].codigo;

		cout << "quantidade: ";
		cin >> dados[i].quant;

		cont++;
	}
	cout << "Fim do Cadastro!" << endl;

	// pergunta para ver se quer retirar

	cout << "Deseja retirar algum produto? 1 p/ sim e 0 p/ não: " << endl;
	cin >> cond;

	if(cond == 1) // estrutura de condicao
	{
		cout << "Digite o codigo do produto: ";
		cin >> codret;

		for(i = 0; i < num; i++) // leitura dos vetores
		{
			if(codret == dados[i].codigo)
			{
				cout << "Produto encontrado! Qual a quantidade que deseja retirar? " << endl;

				cin >> ret;

				dados[i].quant -= ret;

				for(i = 0; i < num; i++)
				{
					cont = 1;
					cout << cont << " produto: " << endl;

					cout << "Nome: ";
					cout << dados[i].nome << endl;

					cout << "Codigo: ";
					cout << dados[i].codigo << endl;

					cout << "Quantidade: ";

					cout << dados[i].quant << endl;
					cont++;
				}
			}
		}
	}

	else
	{
		cout << "Nenhum Produto foi retirado!" << endl;
	}

	return 0;
}
