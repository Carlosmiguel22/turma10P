#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num,i;
	char sair = 's';
	string namoradas[9];
	string nomefofo[9];
		for (i = 0; i < 9; i++)
		{

			cout << "Digite o nome da sua " << i+1 << "� namorada: ";
			cin >> namoradas[i];
			nomefofo[i] = namoradas[i];
		}
		while (sair == 's') {
			cout << "Qual n�mero que queres para uma namorada\n";
			cin >> num;
			cout << "O nome da tua namorada � " << namoradas[num - 1] << " o nome fofo da namorada �: " << nomefofo[num - 1];
			cout << "\n deseja continuar? (s/n)";
			cin >> sair;
		}
}