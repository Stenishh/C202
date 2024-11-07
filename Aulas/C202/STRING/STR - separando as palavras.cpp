#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tam;
	char frase[50];
	int i;
	
	cin.getline(frase,50);
	
	tam = strlen(frase);
	
	for(int i = 0; i < tam; i++)
		cout << frase[i];
	if(frase[i] == ' ' )
	{
		cout << frase[i] << endl;
	}
	
	
	
	

	return 0;
}
