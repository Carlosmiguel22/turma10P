#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int c = -1; // Para quando adicionar no do/while ir para 0 e não 1
	char A[1000]; //Array para guardar o input
	bool Primeiro = true;  //Para ver se é a Primeira Letra grande
	bool PodeN = true; //Para ver se o número já foi posto
	bool Space = true; //Para ver se é para dar um espaço ou não
	do
	{
		c++;
		cin >> A[c];
	} while (A[c] != '.'); //Repetir até colocarem um '.'

	for (int i = 0; i < c + 1; i++) //Repetir pelo número de letras/números
	{
		if (!isdigit(A[i]) && A[i] != '.') //Ver se não é um número ou um ponto
		{
			if (isupper(A[i]) && Primeiro) //Se for a primeira letra e for uma letra grande
			{
				cout << "\n" << A[i]; //Escreve a Letra
				Primeiro = false; //Diz que já não é o primeiro
				Space = true; //Diz que pode haver um espaço
				PodeN = true; //e diz que pode haver um número
			}
			else if (!isupper(A[i]))//Se não for a primeiro ou grande
			{
				cout << A[i]; //Escreve a letra pequena
			}
			if (isupper(A[i + 1])) //Se a letra depois é grande
			{
				cout << " 1"; //Vai meter 1 porque não há números na frente
				Primeiro = true; //E vai por primeiro porque é outra elemento
			}
		}
		else //Se for um número ou um ponto
		{
			if (A[i] == '.' && PodeN) //Se for um ponto e poder por um número
			{
				cout << " 1";//Vai por 1, porque não há mais nada
			}
			else //Se não for um ponto
			{
				if (Space)//Vai ver se pode dar espaço
				{
					cout << " " << A[i];//Escreve o número com um espaço
					Space = false; //Diz que não podes mais espaço
					PodeN = false; //Diz que já tá um número
					Primeiro = true; //E diz que é a Primeira Letra
				}
				else if (A[i] != '.') //Se já ier posto espaço verifica se não é um ponto
				{
					cout << A[i]; //Escreve o número sem espaço ante
					PodeN = false;//Diz que já tá um número
					Primeiro = true;//e diz que é a Primeira Letra
				}
			}
		}

	}
}

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string nomes[3] = { "Clara","Mateus","Bruno" }, produtos[3] = { "bolo rei","batatas", "Alface" };
	int quantidade[3][3], a = 0, soma = 0, QPorPessoa[3] = { 0 }, QporTipo[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Dá-me a quantidade de " << produtos[i] << " que a pessoa chamada " << nomes[j] << endl;
			cin >> a;
			quantidade[j][i] += a;
			soma += a;
			QPorPessoa[j] += a;
			QporTipo[i] += a;
		}

	}
	cout << "Queres saber o que?\n";
	cout << "1-Quantidades de produtos\n";
	cout << "2-Quantidades por pessoa\n";
	cout << "3-Quantidades por tipo\n";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Há no total " << soma << " produtos";
		break;
	case 2:
		for (int i = 0; i < 3; i++)
		{
			cout << "\nA pessoa chamada " << nomes[i] << " recebeu no total " << QPorPessoa[i];
		}
		break;
	case 3:
		for (int i = 0; i < 3; i++)
		{
			cout << "\nO produto " << produtos[i] << " teve um total " << QporTipo[i];
		}
		break;
	default:
		cout << "Inválido :(";
		break;
	}
	return 0;
}


int Depositar(int Saldo)
{
	system("cls");
	string Frases[5] = { "Uau! Ainda vais preso!", "A nadar em dinheiro, ahn?", "Cuidado para não afundares o banco com tanto dinheiro!", "Já vi que finalmente tomaste banho e foste a casa da madrinha","calma la tio patinhas " };
	int R;
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "Depositar \33[92mDinheiro\33[0m\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "Quantidade a depositar: ";
	cin >> R;
	system("cls");
	if (R == 0)
	{
		cout << "A sair!!!!!!";
		Sleep(1000);
		return Saldo;
	}
	else if (R < 0)
	{
		cout << "Queres perder dinheiro ou via por um número positivo?";
		Sleep(1500);
		Depositar(Saldo);
	}
	else if (R > 2000)
	{
		Saldo += R;
		cout << Frases[rand() % 5] << endl;
		cout << "\33[92m" << R << "\33[0m euros depositados com exito!";
		Sleep(3000);
		return Saldo;
	}
	else
	{
		Saldo += R;
		cout << "\33[92m" << R << "\33[0m euros depositados com exito!";
		Sleep(3000);
		return Saldo;
	}
}
int Debitar(int Saldo)
{
	int R;
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << " Retirar \33[92mDinheiro\33[0m\n";
	cout << " Saldo: \33[92m" << Saldo << "\33[0m\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "Quantidade a retirar: ";
	cin >> R;
	system("cls");
	if (R == 0)
	{
		cout << "A sair!!!!!!";
		Sleep(1000);
		return Saldo;
	}
	else if (R < 0)
	{
		cout << "Queres perder dinheiro ou via por um número positivo?";
		Sleep(1500);
		Debitar(Saldo);
	}
	else if (R > Saldo)
	{
		cout << "Calma lá! Não tens esse dinheiro todo!";
		Sleep(3000);
		Debitar(Saldo);
	}
	else
	{
		Saldo -= R;
		cout << "\33[92m" << R << "\33[0m euros retirados com exito!";
		Sleep(3000);
		return Saldo;
	}
}
void Saldar(int Saldo)
{
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "      \33[92mSaldo\33[0m\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	if (Saldo > 10000)
	{
		cout << "[ Olá caro senhor. ]\n[ O senhor tem \33[92m" << Saldo << "\33[0m euros nesta carteira ]";
		Sleep(3000);
		return;
	}
	else if (Saldo < 100)
	{
		cout << "[ O QUE??? ]\n[ Como é que só tens \33[92m" << Saldo << "\33[0m euros nesta carteira ]";
		Sleep(3000);
		return;
	}
	else
	{
		cout << "[ Tu tens \33[92m" << Saldo << "\33[0m euros nesta carteira ]";
		Sleep(3000);
		return;
	}
}
int Enviar(int Saldo)
{
	string Pessoas;
	int R;
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << " Enviar \33[92mDinheiro\33[0m\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "Pessoas para enviar: ";
	cin >> Pessoas;
	if (Pessoas == "0")
	{
		cout << "A sair!!!!!!";
		Sleep(1000);
		return Saldo;
	}
	cout << "Dinheiro para enviar: ";
	cin >> R;
	system("cls");
	if (R == 0)
	{
		cout << "A sair!!!!!!";
		Sleep(1000);
		return Saldo;
	}
	else if (R < 0)
	{
		cout << "Coitado/a do/a " << Pessoas << " queres dar-lhe dinheiro negativo";
		Sleep(3000);
		Enviar(Saldo);
	}
	else if (R > Saldo)
	{
		cout << "Calma lá! Não tens esse dinheiro todo!";
		Sleep(3000);
		Enviar(Saldo);
	}
	else
	{
		Saldo -= R;
		cout << "Enviaste \33[92m" << R << "\33[0m ao/à " << Pessoas;
		Sleep(3000);
		return Saldo;
	}

}
void Iniciar(int Saldo = 1000)
{
	system("cls");
	int R;
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "\33[93mCarteira Bitcoin\33[0m\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "[1] Depositar\n";
	cout << "[2] Débito\n";
	cout << "[3] Saldo\n";
	cout << "[4] Enviar\n";
	cout << "[0] Sair\n";
	cout << "*-*-*-*-*-*-*-*-*\n";
	cout << "Escolha: ";
	cin >> R;
	system("cls");
	switch (R)
	{
	case 1:
		Saldo = Depositar(Saldo);
		Iniciar(Saldo);
		break;
	case 2:
		Saldo = Debitar(Saldo);
		Iniciar(Saldo);
		break;
	case 3:
		Saldar(Saldo);
		Iniciar(Saldo);
		break;
	case 4:
		Saldo = Enviar(Saldo);
		Iniciar(Saldo);
		break;
	case 0:
		cout << "A sair!!!!!!";
		Sleep(1000);
		break;
	default:
		break;
	}
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	Iniciar();
	return 0;