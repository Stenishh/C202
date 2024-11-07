#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int d, m, a;
	int n, g, f, delta;
	int ds;

	cin >> d >> m >> a;

	if(m <= 2)
	{
		g = a - 1;
		f = m + 13;

	}

	else if(m > 2)
	{
		g = a;
		f = m + 1;
	}

	n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

	cout << n << endl;

	if(n < 36523)
	{
		delta = 2;
	}
	else if( 36523 <= n || n < 73048)
	{
		delta = 1;
	}
	else if(n >= 73048)
	{
		delta = 0;

	}

	cout << delta << endl;

	ds = ((n / 7) * 7) + delta + 1;
	
	cout << ds << endl;

	if(ds == 1)
	{
		cout << "domingo " << endl;
	}
	else if(ds == 2)
	{
		cout << "segunda " << endl;
	}
	else if(ds == 3)
	{
		cout << "terca " << endl;
	}
	else if(ds == 4)
	{
		cout << "quarta " << endl;
	}
	else if(ds == 5)
	{
		cout << "quinta " << endl;
	}
	else if(ds == 6)
	{
		cout << "sexta " << endl;
	}
	else if(ds == 7)
	{
		cout << "sabado" << endl;
	}






	return 0;
}
