#include <iostream>
#include <iomanip>
using namespace std;

 int main (){
 	
 	int idade,nome;
 	double ind;
 	
     cin >> idade;
     cin >> nome;
 	
 	cout << setprecision(4) << fixed;
 	
 	ind = idade*1/42 - (idade - 3);
 	
 	cout << "Ind = " << ind << endl;
 	
 	
 	
 	
return 0;
 }