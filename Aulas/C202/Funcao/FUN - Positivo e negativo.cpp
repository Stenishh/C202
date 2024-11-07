#include <iostream>
#include <cmath>
using namespace std;

int calc_delta(float a, float b, float c)
{
	double delta;
	
	delta = pow(b,2) - (4*a*c);
	
	return delta;
};

int main()
{
	float a, b,c;
	double resp;
	
	cout <<"Entre com numero a,b,c:"<<endl;
	cin >> a >> b >> c;
	
	resp = calc_delta(a,b,c);
	
	cout << resp << endl;
	
	
	return 0;
}