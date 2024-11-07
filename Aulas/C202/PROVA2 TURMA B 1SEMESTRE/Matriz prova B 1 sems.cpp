#include <iostream>
using namespace std;

int main()
{
	int A[10][10];
	int i, j, n;
	int somacolu;

	do
	{
		cout << "Entre com a ordem da matriz: " << endl;
		cin >> n;
	}
	while(n > 10);

	for(i = 0; i < n; i++)
	{
		
		for(j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	// soma colunas
	for(j = 0; j < n; j++)
	{
		somacolu = 0;
		for(i = 0; i < n; i++)
		{
			somacolu += A[i][j];
		}
		cout << "Soma linhas " << j <<" = "<<somacolu << endl;
	}











	return 0;
}
