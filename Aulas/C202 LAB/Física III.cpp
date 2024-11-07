#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int Q1, Q2 , D ;
	 double F;
	 

	 cin >> Q1;
	 cin >> Q2;
	 cin >> D;
	 
	 cout<<setprecision(2)<<fixed;
	 
	 F = 100 * Q1*Q2/D*D;
	 
	  cout << " F = " << F << endl;
	 
	
	
	
	
return 0;
}