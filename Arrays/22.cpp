#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	// Sempre diferente
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	// N�mero aleat�rio entre 0 e 100
	int randomNum = rand() % 99 + 1, adv = 0, N, con = 0;
	do {
		cout << "Dame um n�mero aleat�rio entre 1 e 100: ";
		cin >> N;
		con = con++;
		if (N < randomNum) {
			cout << "Muito baixo! Tente novamente." << endl;
		}
		else if (N > randomNum) {
			cout << "Muito alto! Tente novamente." << endl;
		}
		else {
			cout << "Parab�ns! Voc� acertou o n�mero!" << endl;
			adv = 1;
		}
	} while (adv==0);
	cout << "Ola";
	return 0;
}