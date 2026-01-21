#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, m, Aposta[100] = { 0 }, soma = 0, resto, pontos[100] = { 0 }, Mnum = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		soma = 0;
		for (int j = 0; j < n; j++) {
			cin >> Aposta[j];
			soma = soma + Aposta[j];
		}
		resto = soma % n;
		pontos[resto] = pontos[resto] + 1;
	}
	cout << "\n";
	for (int i = 0; i < n; i++) {
		cout << pontos[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		if (pontos[i] > Mnum) {
			Mnum = pontos[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (Mnum == pontos[i]) {
			cout << i << endl;
		}
	}
	return 0;
}