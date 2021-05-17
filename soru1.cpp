#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

char arananharf, devam,cumle[200],cumleyedek[200], degistirilen,degistigi, aranankelime[10];
int i,s,sayacharfsayi=0, sayackelimesayi = 0,sec, sayacharf=0, uzun1, uzun2, sayacaranankelime=0;
bool isInCharString(char* str1, char* search);


void harfdegistir() {

	cout << "Degistirmek istediginiz harfi girin: " << endl; cin >> degistirilen;
	cout << "Yerine yazilacak harfi girin: " << endl; cin >> degistigi;
	
	for (i = 0; cumle[i] != '\0'; i++)
	{
		if (cumle[i] == degistirilen)
		{
			cumle[i] = degistigi;
		}
		else
			cumle[i]=cumle[i];
	}
	cout << degistirilen << "<- harfi ->" << degistigi << " ile degisti."<<endl;
	cout << cumle;
}

void harfara() {
	{
		cout << "Aramak istediginiz harfi girin: " << endl; cin >> arananharf;
		for (i = 0; cumle[i] != '\0'; i++)
		{
			if (cumle[i] == arananharf)
			{
				sayacharf++;
			}
		}
		cout << arananharf << " harfi sayisi = " << sayacharf << endl;

	}
}

void kelimeara() {
	cout << "Aranacak kelimeyi girin: " << endl;
	cin >> aranankelime;
	if (isInCharString(cumle, aranankelime))
		cout << "Aranan kelime bulunuyor." << endl;
	else
		cout << "Aranan kelime bulunmuyor." << endl;
};
bool isInCharString(char* str1, char* search)
{
	for (int i = 0; i < strlen(str1); ++i)
	{
		if (strncmp(&str1[i], search, strlen(search)) == 0)
			return true;
	}

	return false;


}

void kelimeveharfsayi() {
	for (int i = 0; i < strlen(cumle); i++)
	{
		sayacharfsayi++;
		if (cumle[i] == ' ')
		{
			sayackelimesayi++;
		}
	}
	cout << "Kelime sayisi :" << sayackelimesayi+1 << endl;
	cout << "Harf sayisi: " << sayacharfsayi - sayackelimesayi << endl;
}

int main()
{	system("color 80");
	setlocale(LC_ALL, "turkish");
	cout << ("Cumleyi giriniz ") << endl;
	gets(cumle);
   	do
	{
    cout << "*********************************" << endl;
	cout << "Harf aramak               1- " << endl;	
	cout << "Kelime aramak             2- " << endl;
	cout << "Kelime ve Harf sayisi     3- " << endl;
	cout << "Harf degistirr             4- " << endl;
	cout << "Secim Yapin ." << endl;
	cout << "*********************************" << endl;
	cin >> sec;
	
	switch (sec)
	{
	case 1:
    harfara();
	break;
	case 2:
	kelimeara(); 
	break;
	case 3:
	kelimeveharfsayi();
	break;
	case 4:
	harfdegistir(); 
	break;
	default:
	break;
	}
	cout << "Devam etmek istiyor musunuz? E|H" << endl;
	cin >> devam;
	} while (devam=='e'|| devam=='E');

	system("pause");
	return 0;
}
