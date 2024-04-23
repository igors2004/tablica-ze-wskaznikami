#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


float srednia(float* tab, int ile)
{
	float suma = 0;
	for (int i = 0; i < 3; i++)
	{
		suma += *tab;
		tab++;
	}
	return suma / ile;
}


int main()
{
	float tablica[3] = { 1.5, 2.3, 2.8 };

	for (int i = 0; i < 3; i++)
	{
		cout << tablica[i] << endl;
	}
	cout << "srednia liczb z tablicy wynosi: " << srednia(tablica, 3);
}