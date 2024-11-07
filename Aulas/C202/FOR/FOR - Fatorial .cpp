#include <iostream>
using namespace std;

int main()
{
	int i,n;
	int fat = 1;
	
	cin >> n;
	for(i = 1;i <= n; i++)
	{
		fat = fat+i;
		
		cout << fat << endl;
	}
	return 0;
}