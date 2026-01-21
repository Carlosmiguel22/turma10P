#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
#include <Windows.h>

//Este programa vai fazer oque este programa fizer!!!!

using namespace std;
void verificar(int saldo)
{
	std::cout << saldo;
}
int debito(int saldo)
{
	int valor;
	std::cout << "quantos bitcoins quer tirar\n";
	std::cin >> valor;
	if (valor > saldo)
	{
		std::cout << "  o debito e superior ao saldo";
	}
	else
	{
		saldo = saldo - valor;
	}
	return saldo;
}
int deposito(int saldo)
{
	int valor;
	string frase[5] = { "Uau!Ainda vais preso!", "A nadar em dinheiro, ahn ? " , "Cuidado para não afundares o banco com tanto dinheiro!", "Já vi que finalmente tomaste banho e foste a casa damadrinha","olha o tio patinhas" };
	srand(time(0));
	std::cout << "quantos bitcoins quer adicionar\n";
	std::cin >> valor;
	saldo = saldo + valor;
	if (valor > 2000) {
		std::cout << frase[rand() % 5] << "\n";
	}
	return saldo;
}

void iniciarEcran(int saldo)
{
	int opçao;
	do
	{
		std::cout << "------------------MENU------------------\n";
		std::cout << "1 : depositar\n";
		std::cout << "2 : debitar\n";
		std::cout << "3 : verificar saldo\n";
		std::cout << "0 : sair\n";
		std::cin >> opçao;
		switch (opçao)
		{
		case 1:

			saldo = deposito(saldo);
			break;
		case 2:
			saldo = debito(saldo);
			break;
		case 3:
			verificar(saldo);
			break;
		default:
			break;
		}


	} while (opçao != 0);
}

int main()

{
	int saldo = 1000;
	iniciarEcran(saldo);
	return 0;
}