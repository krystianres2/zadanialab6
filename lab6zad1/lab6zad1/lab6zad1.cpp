
#include <iostream>
#include "lab6zad1f.h"
using namespace std;


int main()
{
	int a = 2, b = 3, c = 5, r=4, h=6;
	
	cout << "p_kola = " << p_kola(r) << endl;
	cout << "p_prostokata = " << p_prostokata(a, b) << endl;
	cout << "p_trojkata = " << p_trojkata(a, b) << endl;
	cout << "p_szescianu = " << p_szescianu(a) << endl;
	cout << "p_walca= " << p_walca(r, h) << endl;
	cout << "v_szescianu = " << v_szescianu(a) << endl;
	cout << "v_walca = " << v_walca(r, h) << endl;


}