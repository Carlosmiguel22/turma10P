#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[10] = { 15, 7, 54, 12, 1, 2, 5, 23, 14, 4 }, aux, sporting, i;
	do
	{
		sporting = 0;
		for (i = 0; i < 9; i++)
		{
			if (num[i] > num[i + 1])
			{
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
				sporting++;
			}
		}
	} while (sporting > 0);
	for (i = 0; i < 10; i++)
	{
		cout << "\33[32m" << num[i] << endl;
	}
	return 0;
}