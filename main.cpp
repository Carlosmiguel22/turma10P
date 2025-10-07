#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	do
	{
	    cout << "Escreva um número:\n";
	    cin >> num;
	    if (num == 0)
	    {
	        break;
	    }
	    if (num % 3 == 0)
	    {
	        cout << "É multiplo de 5 \n";
	    }
	}while (num !=0);
}