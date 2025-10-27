#include <iostream>
#include <string>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    char quer = 's';
    string carros[3] = { "Volvo","BMW", "Mercedes" };
    do
    {
        cout << "fala um número do carro: ";
        cin >> num;
        cout << carros[num];
        cout << "\n Quer mais carros? (s/n)";
        cin >> quer;
	} while (quer == 's');
}