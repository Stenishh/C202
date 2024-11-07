#include <iostream>
using namespace std;

int main()
{
	int A[10][10];
	int i, j, n;
	int somalinha;

	do
	{
		cout << "Entre com a ordem da matriz: " << endl;
		cin >> n;
	}
	while(n > 10);

	for(i = 0; i < n; i++)
	{
		somalinha = 0;
		for(j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	// soma linhas
	for(i = 0; i < n; i++)
	{
		somalinha = 0;
		for(j = 0; j < n; j++)
		{
			somalinha += A[i][j];
		}
		cout << "Soma linhas " << i <<" = "<<somalinha << endl;
	}











	return 0;
}
