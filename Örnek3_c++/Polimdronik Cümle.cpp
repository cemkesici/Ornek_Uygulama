#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <fstream>
using namespace std;
int i, b;// i ve b de�i�kenleri olu�turdum
char  k[100], devam;// k dizisi ve uygulamadan ��kmadan devam etmek i�in devam adl� karakter verisi tan�mlad�m
int main()
{   ofstream dosya;// ofstream sayesinde dosya isimli dosyay� olu�turdum
	do
	{	
		cout << "********************************************"<<endl;
	    cout << "Kontrol etmek icin veri giriniz : " << endl;//Kulllan�c�dan veri girmesini istedim
	    cin >> k;// girilen veriyi k'ya atad�m
		b = 0; //alt tarafta b sayac� tan�mlam��t�r her sorguda ba�tan ba�lamas� gerekti�i i�in s�f�rlad�m
		for (i = 0; i <strlen(k); i++)// for d�ng�s�n� girilen kelime yada say� t�m�n�n ka� karakter oldu�unu strlen(k)sayesinde bulup ona g�re d�ng� olu�turdum
		{
			k[strlen(k) - i - 1];//k dizisine girilen verinin tersini ald�k ��nk� palimdronik ifadeler tersten kendisiyle ayn� olan ifadeler oldu�unu i�in diziye girilen veriyi tersten al�p kar��la�t�rma yapt�m 

		}
		for (i = 0; i < strlen(k); i++)//yine karakter say�s� kadar d�ng� olu�turup dizideki karakterlerin tersten ve d�zden ayn� olup olmad���n� yani palimdronik mi diye sorgusunu yapmak i�in bu d�ng�y� olu�turdum
		{

			if (k[strlen(k) - i - 1] == k[i])//tersten ve d�zden e�it mi diye sorguya �ekiyoruz e�it ise alt tarafta olan d�ng�y� �al��t�racak ama biz else i�in de sorguya �ekti�imiz i�in sorguyu bo� ge�iyorum
			{
			}
			else // else �stteki sorgunun olmad��� durumlarda kullan�ld��� i�in kulland�m ve altta b sayaca� tan�mlayarak tersten ve d�zdeb e�it olmayan ifadelerin say�s�n� al�yorum
				b++;//saya�
		}
		if (b>0)//e�er tersten ve d�zden karakterlerin bir tanesi bile e�le�mez ise ekrana palimdronik de�il yazd�r�yorum
		{
			cout << "Palimdronik degil" << endl;// ekrana palimdronik de�il yazd�r�yorum
		}
		else// e�er b s�f�ra e�itse yani �stteki sorguyu sa�lam�yorsa alt taraf� �al��t�yor
		{
			cout << "Palimdronik" << endl;// ekrana palimdronik yazd�r�yorum
			dosya.open("deneme.txt", ios::app);// dosya klas�r�nde deneme txtini veri eklemek i�in a��yorum
			dosya << k << endl;//dosyan�n i�ine deneme txtine sorguyu ge�en k verisini yazd�r�yorum
			cout << "******* Kayit basarili! *******";// yap�lan i�lemin ba�ar�l� oldupunu ekrana yazd�r�yorum	
			dosya.close(); //dosyada i�lem bitti�i i�in kay�t olmas� i�in sonland�r�yorum
		}
		cout << "********************************************" << endl;;
		cout << "Devam etmek istiyor musunuz? E/H" << endl;//tekrar uygulamay� �al��t�rmak yada sonland�rmak i�im ekrana yazd�r�yorum
		cin >> devam;//girilen E yada H verisini yukarda tan�mlad���m�z devam char�na at�yorum
	
	}
    while (devam == 'e' || devam == 'E');// girilen char e E ise while sayesinde do' ya d�n�yoruz ve uygulama tekrar ba�l�yor
	system("pause");//yap�lan i�lem ekranda g�r�ls�n diye durdurma i�lemi 
	return strlen(k);// reqursive i�lemi yapt�k ve uygulama girilen karakter say�s�n� k�sa bir kodla sorguya �ekip ona g�re uygulamay� return edecek bu uygulama da gereksiz kod i�ini azalt�p daha soft ve h�zl� �al��mas�n� sa�layacak
}
