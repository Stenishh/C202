#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char cidade[50]; // vetor em char para a cidade

	cin.getline(cidade, 50); // declarando a cidade

	if(strcmp(cidade, "brasilia") == 0) // se a cidade escolhida for brasilia
		cout << "61" << endl;
	else if(strcmp(cidade, "salvador") == 0)
		cout << "71" << endl;
	else if(strcmp(cidade,"sao paulo")== 0)
		cout << "11" << endl;
	else if (strcmp(cidade,"rio de janeiro")==0)
		cout << "21" << endl;
	else if (strcmp(cidade,"juiz de fora")==0)
		cout << "32" << endl;
	else if (strcmp(cidade,"campinas")==0)
		cout << "19" << endl;
	else if (strcmp(cidade,"vitoria")==0)
		cout << "27" << endl;
	else if (strcmp(cidade,"belo horizonte")==0)
		cout << "31" << endl;
	else if (strcmp(cidade,"santa rita")==0)
		cout << "25" << endl;
	else
		cout << "nao cadastrado" <<endl;
	






	return 0;
}
