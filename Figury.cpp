// Figury.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Prostokat.h"
#include "Trojkat.h"
#include "Szescian.h"
#include "Trapez.h"
#include "Kolo.h"



int main()
{
	Prostokat Prostokat1;
	Trojkat Trojkat1;
	Szescian Szescian1;
	Trapez Trapez1;
	Kolo Kolo1;

	int menu = 0;
	while (true)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		if (menu == 0)
		{
			std::cout << "Menu Glowne" << std::endl;
			std::cout << "1. Prostokat - obwod" << std::endl;
			std::cout << "2. Trojkat - obwod" << std::endl;
			std::cout << "3. Szescian - objetosc" << std::endl;
			std::cout << "4. Trapez - pole" << std::endl;
			std::cout << "5. Kolo - pole" << std::endl;

		}
		else if (menu == 1)
		{
			std::cout << "Bok pierwszy:" << std::endl;
			std::cin >> a;
			std::cout << "Bok drugi:" << std::endl;
			std::cin >> b;
			Prostokat1.obliczanie(a, b);
		}
		else if (menu == 2)
		{
			std::cout << "Bok pierwszy:" << std::endl;
			std::cin >> a;
			std::cout << "Bok drugi:" << std::endl;
			std::cin >> b;
			std::cout << "Bok trzeci:" << std::endl;
			std::cin >> c;
			Trojkat1.obliczanie2(a, b, c);

		}
		else if (menu == 3)
		{
			std::cout << "Krawedz:" << std::endl;
			std::cin >> a;
			Szescian1.obliczanie3(a);
		}
		else if (menu == 4)
		{
			std::cout << "Podstawa pierwsza:" << std::endl;
			std::cin >> a;
			std::cout << "Podstawa druga:" << std::endl;
			std::cin >> b;
			std::cout << "Wysokosc:" << std::endl;
			std::cin >> c;
			Trapez1.obliczanie4(a, b, c);
		}
		else if (menu == 5)
		{
			std::cout << "Promien:" << std::endl;
			std::cin >> a;
			Kolo1.obliczanie5(a);
	
		}
		std::cout << "wybor menu" << std::endl;
		std::cin >> menu;
		system("cls");
	}

	

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
