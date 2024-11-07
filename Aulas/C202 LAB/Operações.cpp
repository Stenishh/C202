#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int x,y;
	char c;
	
	

	cin >> c;
	cin >> x >> y; 
	
	switch(c)
	{
		case '+':
			cout << y*y + 2 << endl;
				
			break;
		case '-':
			cout << x-y << endl;
			break;
		case '*':
			cout << 2 * (x - y) <<endl;
			break;
		case '/':
			cout << x/5 << endl;
			break;
		
		cout << setprecision(1) << fixed << x << endl;
		
		
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}