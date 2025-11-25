#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int matriz[5][3], linha, coluna, soma = 0, matriz2[5][3], somamatrizes = 0;
	for (linha = 0; linha < 6; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			cout << "Fale o valor da matriz [" << linha << "][" << coluna << "]: ";
			cin >> matriz[linha][coluna];
			soma = soma + matriz[linha][coluna];
		}
	}
	cout << "O valor da matriz é: " << endl;
	for
		(linha = 0; linha < 5; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			cout << matriz[linha][coluna] << " ";
		}
		cout << endl;
	}
	for
		(linha = 0; linha < 5; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			cout << "Fale o da matriz2 [" << linha << "][" << coluna << "]: ";
			cin >> matriz2[linha][coluna];
			somamatrizes = somamatrizes + matriz2[linha][coluna];
		}
	}
	cout << "O valor da matriz2 é: " << endl;
	for
		(linha = 0; linha < 5; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			cout << matriz2[linha][coluna] << " ";
		}
		cout << endl;
	}
	cout << "A soma dos valores da primeira matriz é: " << soma << endl;
	cout << "A soma dos valores da segunda matriz é: " << somamatrizes << endl;
	cout << "A soma das duas matrizes é: " << soma + somamatrizes << endl;
	return 0;
}