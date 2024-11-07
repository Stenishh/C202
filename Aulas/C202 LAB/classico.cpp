#include <iostream>
using namespace std;
int main ()
{
	int x,y;
	char z;
	
	cin >> x >> y;
	
	cin >> z;
	
	switch(z){
		case '+':
			cout << (x + y) << endl;
			break;
		case '-':
			cout << (x - y) << endl;
			break;
		case '/':
			cout << (x / y) << endl;
			break;
        case '*':
			cout << (x * y) << endl;
			break;
		default:
			cout << "impossivel" << endl;
			
			

	}
	
	return 0;
}
