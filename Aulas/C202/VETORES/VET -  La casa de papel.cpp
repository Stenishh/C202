#include <iostream>
using namespace std;

int main()
{
	int n; // numero de pessoas que votaram
	int votos[100]; // votos das pessoas
	int i;
	int gostou = 0;
	int ngostou = 0;

	cin >> n;

	// estrutura pra de repeticao pra declaracao dos votos
	for(i = 1; i <= n; i++)
	{
		cin >> votos[i];

		if( votos[i] == 1)
		{
			gostou++;
		}
		if(votos[i] == -1)
		{
			ngostou++;
		}
	}
	if(gostou > ngostou)
	{
		cout << "A maioria gostou!" << endl;
	}
	else if(gostou < ngostou)
	{
		cout << "A maioria nao gostou!" << endl;

	}
	else
	{
		cout << "Deu empate!" << endl;
	}


	return 0;
}
