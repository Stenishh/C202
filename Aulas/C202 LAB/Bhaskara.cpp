	#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,t,X1,X2;
    
	cin>>a>>b>>c;

    if(((b*b)-4*a*c)<0 ||a==0)
	{
        cout<<"Impossivel"<<endl;
    }else{
         t=sqrt((b*b)-4*a*c);
         X1=((-b + t) / (2 * a));
         X2=((-b - t) / (2 * a));
         cout<<fixed;
         cout<<setprecision(5)<<"X1 = "<<X1<<endl;
         cout<<setprecision(5)<<"X2 = "<<X2<<endl;
    }
    return 0;
}
