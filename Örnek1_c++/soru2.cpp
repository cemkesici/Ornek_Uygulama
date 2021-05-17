#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <fstream>
#include <Windows.h>
using namespace std;

int sec, kac1, kac2, kac3;
char devam;
int top[20], toplam = 0;//Toplama değişkenleri
int cik[20], cikar = 0;//Çıkarma değişkenleri
int carp[20], carpim = 0;//Çarpma değişkenleri


class toplamaislem
{

public:
	void toplama();
	friend class genel;

private:

};
void toplamaislem::toplama() {
	cout << "Kac Sayi Ile Islem Yapilacakk: " << endl; cin >> kac1;
	for (int i = 0; i < kac1; i++)
	{
		cout << "Toplanacak sayiyi girin: " << endl; cin >> top[i];
		toplam += top[i];
	};

	cout << "Sonuc: " << toplam << endl;
}


class cikarmaislem
{

public:
	void cikarma();
	friend class genel;
private:

};
void cikarmaislem::cikarma() {
	cout << "Kac Sayi Ile Islem Yapilacak : " << endl; cin >> kac2;
	for (int i = 0; i < kac2; i++)
	{
		cout << "Cikarilacak Sayiyi Giriniz  : " << endl; cin >> cik[i];
		cikar -= cik[i];
	};

	cout << "Sonuc : " << cikar << endl;
}


class carpmaislem
{

public:
	void carpma();
	friend class genel;

private:

};
void carpmaislem::carpma() {
	cout << "Kac Sayi Ile Islem Yapilacak : " << endl; cin >> kac3;
	for (int i = 0; i < kac3; i++)
	{
		cout << "Carpilacak Sayiyi Giriniz : " << endl; cin >> carp[i];
		carpim += carp[i];
	};

	cout << "Sonuc : " << carpim << endl;
}


class genel
{
public:
	toplamaislem topgenel;
	cikarmaislem cikgenel;
	carpmaislem carpgenel;
	void menu() {
		cout << "**************" << endl;
		cout << "Toplama  -> 1 " << endl;
		cout << "Cikarma  -> 2 " << endl;
		cout << "Carpma   -> 3 " << endl;
		cout << "Secim Yapin :  " << endl;
		cout << "**************" << endl;
		cin >> sec;
		switch (sec)
		{
		case(1):
			topgenel.toplama(); break;
		case(2):
			cikgenel.cikarma(); break;
		case(3):
			carpgenel.carpma(); break;
		default:
			break;
		}
	};
private:

};




int main()
{
	genel genelislem;
	system("color 80");
	setlocale(LC_ALL, "turkish");
	do
	{
		genelislem.menu();
		cout << "Devam etmek istiyor musunuz? E|H :"; cin >> devam;
	} while (devam == 'e' || devam == 'E');
return 0;
}


