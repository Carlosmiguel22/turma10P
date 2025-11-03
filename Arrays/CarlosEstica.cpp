#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, maior = 0, menor = 2147483647;
	do
	{
		cout << "Diz um número:";
		cin >> num;
		if (num < menor && num != 0)
		{
			menor = num;
		}
		if (num > maior)
		{
			maior = num;
		}
	} while (num != 0);
	cout << "O número maior é o:" << maior << endl;
	cout << "O número menor é o:" << menor << endl;
	return 0;
}