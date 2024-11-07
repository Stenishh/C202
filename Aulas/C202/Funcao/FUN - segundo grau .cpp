#include <iostream>
#include <cmath>
using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	int t;
	if(((b*b)-4*a*c)<0 ||a==0)
	{
        cout<<"nao ha raizes"<<endl;
    }else{
         t=sqrt((b*b)-4*a*c);
         x1=((-b + t) / (2 * a));
         x2=((-b - t) / (2 * a));
         
    }
}

int main()
{
	float a,b,c;
	float x1 =0;
	float x2 =0;
	float resp;
	
	cin >> a >> b >>c;
	
	
	resp = calc_raizes(a,b,c,x1,x2);
	
	cout << x1 << endl;
	cout << x2 << endl;
	
	
	
	
	
	
	
	


	return 0;
}
