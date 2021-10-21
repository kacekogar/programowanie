// ConsoleApplication11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// miciek nie zda =]

#include "pch.h"
#include <iostream>
#include <vector>

void wypisz(std::vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		std::cout << tab[i] << ", ";
	}
	bool CzyNalezy(std::vector<int>tab, int element)
	{
		for (int i = 0; i < tab.size(); i++)
		{
			if ( tab[i] == element)
			{
				return true;
			}
		}
		return false;
	}
}

int main()
{
	std::cout << "I AM GOD and Miciek i Artur is my Adam and Ewa\n";

	std::vector<int>tab = { 1, 3, 5, 7 };
	std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << "\n ";
	
	wypisz(tab);
	
	bool wynik = CzyNalezy(tab, 4);




}
