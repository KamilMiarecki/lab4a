// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
using namespace std;


int main()
{	//zad1
	//const int roz = 10;
	//int tab[10], x=3;
	//for (int i = 0; i < roz; i++)
	//{
	//	tab[i] = x;

	//	cout << tab[i]<< " " ;
	//	x += 3;
	//}
	//zad2	
	//const int roz = 10;
	//int tab[10], x=3;
	//for (int i = 0; i < roz; i += 2)
	//{
	//	tab[i] = x;

	//	cout << tab[i] << " ";
	//	x += 6;
	//}
	//zad3
	//const int roz=5;
	//int tab[roz], x = 0;
	//int a;
	//cout << "podaj wartosc ";
	//cin >> a;
	//for (int i = roz - 1; i >= 0; i--)
	//{
	//	tab[i] = a - x; x += 5;
	//}
	//for (int i = 0; i < roz; i++)
	//{
	//	cout << tab[i] << " ";
	//}

	//zad4
	/*int losowa_liczba, min;


	int tab[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{

		losowa_liczba=rand() % 50 - 23;
		tab[i] = losowa_liczba;
		cout << "tab[" << i << "]= " << losowa_liczba << endl;
	}
	min = tab[0];
	for (int i=1;i<10;i++)
	{
		if (min > tab[i])
		{
			min = tab[i];
		}
	}
	cout << min;*/
	//zad5
	/*int a, b, n;

	cout << "podaj 2 pierwsze wartosci " << endl;
	cin >> a;
	cin >> b;
	cout << "podaj ile chcesz wypisac wyrazow ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << b << " ";
		b += a;
		a = b - a;
	}*/
	//zad6

	//int tab[20] = { 0,1,2,3,4,5,6,7,8,9 };
	//for (int i = 0; i < 10; i++)
	//{
	//	tab[i + 10] = tab[i];
	//}
	//for (int i = 0; i < 20; i++)
	//{
	//	cout << "tab[" << i << "]= " << tab[i] << endl;
	//}

	//zad7
	//int tab1[3][3] =
	//{
	//	{1,0,0},
	//	{0,2,0},
	//	{0,0,3}

	//};
	//int suma = 0;
	//for (int i = 0, j = 0; i < 3; i++, j++)
	//{
	//	suma += tab1[i][j];
	//}
	//cout << "suma przekatnych macierzy: " << suma << endl;

	//zad8
	//int suma;
	//int tab1[3][3] =
	//{
	//	{1,0,0},
	//	{0,2,0},
	//	{0,0,3}

	//};
	//int tab2[3][3] =
	//{
	//	{1,0,0},
	//	{0,2,0},
	//	{0,0,3}

	//};
	//suma = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	
	//	for (int j = 0; j < 3; j++)
	//	{
	//		suma= tab1[i][j] + tab2[i][j];
	//		cout << " " << suma;
	//		
	//	}
	//	cout << endl;
	//}
	





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