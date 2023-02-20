#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <windows.h>




using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	int liczba_A, liczba_B, liczba_C, wyn_dodawania, wyn_potegowania;
	
	
	
	printf("Podaj pierwsz¹ liczbê	A=");
	scanf("%d", &liczba_A);
		
	printf("Podaj drug¹ liczbê	B=");
	scanf("%d", &liczba_B);
	
	printf("Podaj trzeci¹ liczbê	C=");
	scanf("%d", &liczba_C);
		
	
	printf("Wczytane s¹ liczby: 	A=%d",liczba_A);
	printf("	B=%d",liczba_B);
	printf("	C=%d",liczba_C);
	
	printf("\n");
	
	
	wyn_dodawania = liczba_A + liczba_B + liczba_C;
	
	printf("%d  ", wyn_dodawania);
	printf("=  %d", liczba_A);
	printf("  +%d" , liczba_B);
	printf(" + %d", liczba_C);
	
	printf("\n");
	
	wyn_potegowania = wyn_dodawania * wyn_dodawania * wyn_dodawania;
	
	printf("%d  ", wyn_potegowania);	
	printf("=  (%d", liczba_A);
	printf("  +%d" , liczba_B);
	printf(" + %d", liczba_C);
	printf(")^3");
	
	

	
	
	
	
	return 0;
}
