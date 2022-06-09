// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int wynik = 0;
    int n;
    int tab[6];
    int x[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        tab[i] = rand() % 49 + 1;


        for (int j = 0; j < i; j++)
        {
            if (tab[i] == tab[j])
            {
                i = i - 1;
            }

        }
    }
    for (int i = 0; i < 6; i++)
    {

    }

    cout << "Podaj swoje liczby!" << endl;

    for (int k = 0; k < 6; k++)
    {
        cin >> n;


        if (n == tab[0])
            wynik = wynik + 1;
        if (n == tab[1])
            wynik = wynik + 1;
        if (n == tab[2])
            wynik = wynik + 1;
        if (n == tab[3])
            wynik = wynik + 1;
        if (n == tab[4])
            wynik = wynik + 1;
        if (n == tab[5])
            wynik = wynik + 1;
    }


    if (wynik == 0)
        cout << "Nic nie trafiłeś" << endl;

    if (wynik == 1)
        cout << "Trafiles 1 liczbe!" << endl;
    if (wynik == 2)
        cout << "Trafiles 2 liczby!" << endl;
    if (wynik == 3)
        cout << "Trafiles 3 Liczby!" << endl;
    if (wynik == 4)
        cout << "Trafiles 4 liczby!" << endl;
    if (wynik == 5)
        cout << "Trafiles 5 liczb!" << endl;
    if (wynik == 6)
        cout << "Wygrales!" << endl;

    return 0;
}

