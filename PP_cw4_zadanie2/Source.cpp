#include<iostream>
using namespace std;

int zliczCyfry(long long a) {
	int licznik_cyfr = 0;
	if (a == 0) {
		return licznik_cyfr;
	}
	else if (a < 0) {
		a = -a;
	}

	while (a > 0) {
		a = a / 10;
		licznik_cyfr++;
	}
	return licznik_cyfr;
}

int main() {
	long long  liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "\n" << " ilosc cyfr liczby " << liczba << " wynosi " << zliczCyfry(liczba);

}