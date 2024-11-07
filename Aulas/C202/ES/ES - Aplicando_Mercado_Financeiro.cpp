#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	double C,I,i;
	int T;
	double M;
	
	cin >> C >> I >> T;
	
	i = I/100;
	
	M = C * (1+i,12);
	
	cout << M << endl;
	
	


	return 0;
}
