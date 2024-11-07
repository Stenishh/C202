#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	int T; // numero de partidas
	int i;
	char jogadorA[30];
	char jogadorB[30];
	
	cin >> T;
	
	for(i = 0; i < T; i++)
	{
		cin.ignore();
		cin.getline(jogadorA,30);
		cin.getline(jogadorB,30);
		
		if(strcmp(jogadorA,"pedra")== 0 && strcmp(jogadorB,"papel") == 0)
			cout << "Jogador B" << endl;
	}
	
	
	
	
	
	
	
	return 0;
}