// ConsoleApplication6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <vector>

void wypisz(int a)
{
	std::cout << a << "\n";
}
 int suma(int a, int b)
 {
	 return a + b;
}
 int suma(int a, int b, int c)
 {
	 int wynik = suma(a, b);
	 return suma(wynik, c);
 }






int main()
{
    std::cout << "micka ma latek\n";
	

	int a = 5 + 3;
	int b = suma(a, 5);
	wypisz(b);
	b = suma(b, b, b);
	wypisz(b);
	//std::cin >> b;

	std::vector <int> tab;
	tab.push_back(5);
	wypisz(tab[0]);
	if (a > 5)
	{
		wypisz(a);
	}
	else
	{
		std::cout << "ale maciek lipa sie okazala!!!\n";
	}
}


