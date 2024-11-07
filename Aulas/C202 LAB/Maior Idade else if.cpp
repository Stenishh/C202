#include <iostream>
using namespace std;

int main ()
{
	
	string nome1,nome2;
	double idade1,idade2;
	
	
	cout << "Nome" <<endl;
	   cin >> nome1;
	  
	  cout << "Idade" <<endl;
	     cin >> idade1;
	
		cout << "Nome 2" <<endl;
            cin >> nome2;
	 
	 cout << "Idade 2" <<endl;
	       cin >> idade2;
	
	      if(idade1 == idade2)
		  {
		  	cout <<"Idades iguais"<<endl;
		  }
		   else if(idade1 > idade2)
		  {
		  	cout << nome1 <<endl;
		  } 
		   else 
		  {
			  cout << nome2<<endl;
		  }
	
	
		  
		  
	
	
	
return 0;
}