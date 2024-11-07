#include <iostream>
using namespace std;

int main()
{
	int A[10][10];
	int i, j, n, p;
	int produprin = 1;
	int somasecu = 0;
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

	// produto raiz principal
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if( j == i)
				produprin = produprin*A[i][j];
		}
	}

	// soma diagonal secundaria

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			 if(i+j == n-1)
			 {
			 	somasecu += A[i][j];
			 	
			 }
				
		}
	}

	cout << "produto diagonal principal:" << produprin << endl;
	cout << "Soma diagonal secundaria:" << somasecu << endl;









	return 0;
}
