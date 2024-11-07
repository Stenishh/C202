#include <iostream>
using namespace std;

struct dados
{
	
	int num;
};
int main ()

{
	dados numeros[10];
	int x,i;
	int soma;	
	
	   	cin >> x;
	for(i = 0; i < x; i++)
		cin >> numeros[i].num;
	
	if(numeros[i].num%2 == 0)
		i++;
	else
	{
		cout << 0 << endl;
	}
	cout << soma <<endl;
	
	
	
return 0;	
}