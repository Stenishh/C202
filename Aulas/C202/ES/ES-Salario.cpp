#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	int num;
	int quantidadeHoras;
	double valorHoras;
	double salario;

	cin >> num >> quantidadeHoras >> valorHoras;

	salario = (num * quantidadeHoras * valorHoras) / num;

	cout << "NUMBER: " << num << endl;

	cout << "SALARY: " << salario << endl;





	return 0;
}
