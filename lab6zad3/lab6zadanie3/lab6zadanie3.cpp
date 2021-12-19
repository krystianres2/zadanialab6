

#include <iostream>
using namespace std;
void z_binarne(int liczba);
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout<< "liczba w systemie binarnym:  ";
    z_binarne(liczba);
    cout << endl;
}
void z_binarne(int liczba) {
    int i = 0, tab[100];
    while (liczba) {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << tab[j];
}
