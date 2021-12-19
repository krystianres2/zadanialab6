

#include <iostream>
using namespace std;
int dwusilnia(int n);

int main()
{
    int n;
    poczatek:
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n >= 0 && n <= 30)
    {
        cout << "Dwusilnia liczby " << n << " wynosi: " << dwusilnia(n) << endl;
    }
    else goto poczatek;
    
}

int dwusilnia(int n)
{
    int wynik = 1;
    while (n > 1) {
        wynik = wynik * n;
        n = n - 2;
    }
    return wynik;
}

