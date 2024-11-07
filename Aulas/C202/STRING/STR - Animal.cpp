#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	char p1[50], p2[50], p3[50];

	cin.getline(p1, 50);

	cin.getline(p2, 50);

	cin.getline(p3, 50);

	if(strcmp(p1, "vertebrado") == 0)
	{
		if(strcmp(p2, "ave") == 0)
		{
			if(strcmp(p3, "carnivoro") == 0)
			{
				cout << "aguia" << endl;
			}
			else if(strcmp(p3, "onivoro") == 0)
			{
				cout << "pomba" << endl;
			}
		}
		else if(strcmp(p2, "mamifero") == 0)
		{
			if(strcmp(p3, "herbivoro") == 0)
			{
				cout << "vaca" << endl;
			}
			else if(strcmp(p3, "onivoro") == 0)
			{
				cout << "homem" << endl;
			}
		}
	}

		else if(strcmp(p1, "invertebrado") == 0)
		{
			
		
			if(strcmp(p2, "inseto") == 0)
			{
				if(strcmp(p3, "hematofago") == 0)
				{
					cout << "pulga" << endl;
				}
				else if(strcmp(p3, "herbivoro") == 0)
				{
					cout << "lagarta" << endl;
				}
			}
			else if(strcmp(p2, "anelido" ) == 0)
			{
				if(strcmp(p3, "hematofago") == 0)
				{
					cout << "sanguessuga" << endl;
				}
				else if(strcmp(p3, "onivoro") == 0)
				{
					cout << "minhoca" << endl;
				}

			}
		}















	
	return 0;
	}
