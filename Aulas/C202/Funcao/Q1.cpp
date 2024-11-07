#include <iostream>
#include <cmath>
using namespace std;

void versor(int x, int y, int z)
{
	double modv;
	double versor;
	double xv, yv, zv;

	modv = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

	xv = x / modv;

	yv = y / modv;

	zv = z / modv;

	cout << "Versor: (" << xv << " , " << yv << " , " << zv << ")" << endl;

}
int main()
{
	int x, y, z;


	cout << "Digite os componentes do vetor: " << endl;
	cin >> x >> y >> z;

	versor(x, y, z);


	return 0;
}
