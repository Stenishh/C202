#include <iostream>
#include <iomanip>
using namespace std;

int FAT(int n)
{
	int fat = 1;
	int i;
	
	for(i = 1; i <= n; i++)
	{
		fat = fat*i;
	}
	
	return fat;

};

int main()
{
	int n;
	int result;
	
	cout <<"Entre com um valor de N maior que 0:"<<endl;
	do{
		cin >> n;
		
	}while(n < 0);
	
	result = FAT(n);
	
	cout << result << endl;
	
	
	return 0;
}