#include <stdio.h>

void gramatyka(int n) {

	int j, i;
	for (j = 0; j < n; j++)
	{
		for (i = j; i >= 0; i--)
		{
			printf("a");
		}
		printf("\n");
	}
}

int main()
{
	printf("Klaudia Jóźwik \nProgram wypisujacy na ekranie w porzadku kanoniczynym n roznych lancuchow z jezyka opisanego za pomoca gramatyki bezkontekstowej\n V = {S}\n T = {a, b, epsilon}\n P = {S->aS|bSaS|epsilon}\n,gdzie S to symbol poczatkowy\nWypisywane lancuchy sa uporzadkowane w porzadku kanonicznym\nSymulator dzialania gramatyki bezkontekstowej\nPodaj liczbe lancuchow, ktore maja zostac wywolane:");
		int n;
	scanf_s("%d", &n);
	gramatyka(n);
	printf("Wypisano %d lancuchow. Koniec dzialania programu.\n\n\n\n", n);
}