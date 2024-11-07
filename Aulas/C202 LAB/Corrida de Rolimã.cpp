#include <iostream>

using namespace std;

int main ()
{
	
	int n,input[100],min;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
	 cin >> input[i]; 
	}
	 min = input[0];
    
      for(int i = 0; i < n; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
    cout << min <<endl;
	
	
			
			
			
			
	
	

		
	
	
	
	
	return 0;
}