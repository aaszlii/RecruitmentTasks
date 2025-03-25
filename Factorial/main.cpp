#include <iostream>
using namespace std;

int silniaR(int n)
{
	if (n == 0 or n == 1) return 1;
	return n * silniaR(n - 1);
}

int silniaI(int n) {
	int wynik = 1;
	for (int i = 2; n >= i; i++)
	{
		wynik = wynik * i;
	}
	return wynik;
}

int main()
{
	int a;
	cin >> a;
	cout << "Rekurencyjnie: " << silniaR(a) << endl;
	cout << "Iteracyjnie: " << silniaI(a) << endl;
}
