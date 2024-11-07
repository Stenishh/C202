#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char def1[20];
	char def2[20];
	char subdef1[20];
	char subdef2[20];
	char subdef3[20];
	char subdef4[20];
	char ultdef1[20];
	char ultdef2[20];
	char ultdef3[20];
	char ultdef4[20];

	char q1[20];
	char q2[20];
	char q3[20];

	strcpy(def1, "vertebrado");
	strcpy(def2, "invertebrado");
	strcpy(subdef1, "ave");
	strcpy(subdef2, "mamifero");
	strcpy(subdef3, "inseto");
	strcpy(subdef4, "anelideo");
	strcpy(ultdef1, "carnivoro");
	strcpy(ultdef2, "onivoro");
	strcpy(ultdef3, "herbivoro");
	strcpy(ultdef4, "hematofago");

	cin >> q1 >> q2 >> q3;

	if(strcmp(def1, q1) == 0 && strcmp(subdef1, q2) == 0 && strcmp(ultdef1, q3) == 0)
	{
		cout << "aguia" << endl;
	}
	else if(strcmp(def1, q1) == 0 && strcmp(subdef1, q2) == 0 && strcmp(ultdef2, q3) == 0)
	{
		cout << "pomba" << endl;
	}
	else if(strcmp(def1, q1) == 0 && strcmp(subdef2, q2) == 0 && strcmp(ultdef2, q3) == 0)
	{
		cout << "homem" << endl;
	}
	else if(strcmp(def1, q1) == 0 && strcmp(subdef2, q2) == 0 && strcmp(ultdef3, q3) == 0)
	{
		cout << "vaca" << endl;
	}
	else if(strcmp(def2, q1) == 0 && strcmp(subdef3, q2) == 0 && strcmp(ultdef4, q3) == 0)
	{
		cout << "pulga" << endl;
	}
	else if(strcmp(def2, q1) == 0 && strcmp(subdef3, q2) == 0 && strcmp(ultdef3, q3) == 0)
	{
		cout << "lagarta" << endl;
	}
	else if(strcmp(def2, q1) == 0 && strcmp(subdef4, q2) == 0 && strcmp(ultdef4, q3) == 0)
	{
		cout << "sanguessuga" << endl;
	}
	else if(strcmp(def2, q1) == 0 && strcmp(subdef4, q2) == 0 && strcmp(ultdef2, q3) == 0)
	{
		cout << "minhoca" << endl;
	}
	return 0;
}
