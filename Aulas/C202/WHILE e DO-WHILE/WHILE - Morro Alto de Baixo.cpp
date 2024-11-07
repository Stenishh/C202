#include <iostream>
#include <cstring>
using namespace std;

//morro abaixo

int main()
{
	char code[4];
	char consu;
	char fonte;
	int resp;

	int cont = 0;
	int contRe = 0;
	int contCo = 0;
	int fonteE = 0;
	int fonteSol = 0;
	int perRe = 0;
	int perCo = 0;
	int perEl = 0;
	int perSol = 0;



	while(resp != 2)
	{


		cout << "codigo do consumidor:" << endl;
		cin >> code;

		cout << "Qual o tipo de consumo? R (residencial) ou C (comercial)" << endl;
		cin >> consu;
		if(consu == 'R')
		{
			contRe++;
		}
		if(consu == 'C')
		{
			contCo++;
		}
		cout << "Qual a fonte energética usada?  E (elétrica), S (solar) ou O (outras)" << endl;
		cin >> fonte;
		if(fonte == 'E')
		{
			fonteE++;
		}
		if(fonte == 'S')
		{
			fonteSol++;
		}

		cont = cont + 1;

		cout << "Deseja continuar? 1 -> para sim e 2 -> para nao." << endl;
		cin >> resp;
	}
	perRe = (contRe / cont) * 100;

	perCo = (contCo / cont) * 100;

	perEl = (fonteE / cont) * 100;

	perSol = (fonteSol / cont) * 100;



	cout << "Quantidade:" << cont << endl;

	cout << perRe << "% de consumo residencial"  << endl;
	cout << perCo <<"% de consumo comercial"  << endl;
	
	cout << perEl <<"% dos comercios usam energia eletrica"  << endl;
	cout << perSol <<"% dos comercios usam energia solar"  << endl;
	
	

















	return 0;
}
