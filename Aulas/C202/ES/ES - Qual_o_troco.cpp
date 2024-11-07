#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	double A, B;
	double troco;

	cin >> A >> B;

	cout << fixed << setprecision(2);

	troco = A - B;

	cout << "TROCO: " << troco << endl;


	return 0;
}