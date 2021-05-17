#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <fstream>
using namespace std;
int i, b;// i ve b deðiþkenleri oluþturdum
char  k[100], devam;// k dizisi ve uygulamadan çýkmadan devam etmek için devam adlý karakter verisi tanýmladým
int main()
{   ofstream dosya;// ofstream sayesinde dosya isimli dosyayý oluþturdum
	do
	{	
		cout << "********************************************"<<endl;
	    cout << "Kontrol etmek icin veri giriniz : " << endl;//Kulllanýcýdan veri girmesini istedim
	    cin >> k;// girilen veriyi k'ya atadým
		b = 0; //alt tarafta b sayacý tanýmlamýþtýr her sorguda baþtan baþlamasý gerektiði için sýfýrladým
		for (i = 0; i <strlen(k); i++)// for döngüsünü girilen kelime yada sayý tümünün kaç karakter olduðunu strlen(k)sayesinde bulup ona göre döngü oluþturdum
		{
			k[strlen(k) - i - 1];//k dizisine girilen verinin tersini aldýk çünkü palimdronik ifadeler tersten kendisiyle ayný olan ifadeler olduðunu için diziye girilen veriyi tersten alýp karþýlaþtýrma yaptým 

		}
		for (i = 0; i < strlen(k); i++)//yine karakter sayýsý kadar döngü oluþturup dizideki karakterlerin tersten ve düzden ayný olup olmadýðýný yani palimdronik mi diye sorgusunu yapmak için bu döngüyü oluþturdum
		{

			if (k[strlen(k) - i - 1] == k[i])//tersten ve düzden eþit mi diye sorguya çekiyoruz eþit ise alt tarafta olan döngüyü çalýþtýracak ama biz else için de sorguya çektiðimiz için sorguyu boþ geçiyorum
			{
			}
			else // else üstteki sorgunun olmadýðý durumlarda kullanýldýðý için kullandým ve altta b sayacaý tanýmlayarak tersten ve düzdeb eþit olmayan ifadelerin sayýsýný alýyorum
				b++;//sayaç
		}
		if (b>0)//eðer tersten ve düzden karakterlerin bir tanesi bile eþleþmez ise ekrana palimdronik deðil yazdýrýyorum
		{
			cout << "Palimdronik degil" << endl;// ekrana palimdronik deðil yazdýrýyorum
		}
		else// eðer b sýfýra eþitse yani üstteki sorguyu saðlamýyorsa alt tarafý çalýþtýyor
		{
			cout << "Palimdronik" << endl;// ekrana palimdronik yazdýrýyorum
			dosya.open("deneme.txt", ios::app);// dosya klasöründe deneme txtini veri eklemek için açýyorum
			dosya << k << endl;//dosyanýn içine deneme txtine sorguyu geçen k verisini yazdýrýyorum
			cout << "******* Kayit basarili! *******";// yapýlan iþlemin baþarýlý oldupunu ekrana yazdýrýyorum	
			dosya.close(); //dosyada iþlem bittiði için kayýt olmasý için sonlandýrýyorum
		}
		cout << "********************************************" << endl;;
		cout << "Devam etmek istiyor musunuz? E/H" << endl;//tekrar uygulamayý çalýþtýrmak yada sonlandýrmak içim ekrana yazdýrýyorum
		cin >> devam;//girilen E yada H verisini yukarda tanýmladýðýmýz devam charýna atýyorum
	
	}
    while (devam == 'e' || devam == 'E');// girilen char e E ise while sayesinde do' ya dönüyoruz ve uygulama tekrar baþlýyor
	system("pause");//yapýlan iþlem ekranda görülsün diye durdurma iþlemi 
	return strlen(k);// reqursive iþlemi yaptýk ve uygulama girilen karakter sayýsýný kýsa bir kodla sorguya çekip ona göre uygulamayý return edecek bu uygulama da gereksiz kod iþini azaltýp daha soft ve hýzlý çalýþmasýný saðlayacak
}
