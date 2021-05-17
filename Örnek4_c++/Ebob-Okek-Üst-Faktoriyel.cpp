#include <stdio.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <Windows.h>
#include <cstdlib>

using namespace std;
//Yukarda kutuphaneleri tanimladik

//OzelIslem classini actik
class OzelIslem {
    int sayi, sayi1, sayi2, sayi3;//degiskenleri tanimladik
public:
    int Ekok(int sayi1, int sayi2);
    int Ekok(int sayi1, int sayi2, int sayi3);
    int Ebob(int sayi1, int sayi2);
    int Ebob(int sayi1, int sayi2, int sayi3);
    int Faktoriyel(int sayi1);
    int UsAlma(int sayi1, int sayi2);
//Kullamilacak fonksiyonlari tanittik

    int seto_sayi1(int o_sayi1)
    {
        sayi1 = o_sayi1;
    }
    int seto_sayi2(int o_sayi2)
    {
        sayi2 = o_sayi2;
    }
    int seto_sayi3(int o_sayi3)
    {
        sayi3 = o_sayi3;
    }


    int geto_sayi1()
    {
        return sayi1;
    }
    int geto_sayi2()
    {
        return sayi2;
    }
    int geto_sayi3()
    {
        return sayi3;
    }
//Yukarida alinacak ve okunacak degiskenler icin get/set'leri tanimladik

private:

};
int OzelIslem::Ekok(int sayi1, int sayi2, int sayi3) {
//3 parametre icin gerekli Ekok fonksiyonunu olusturduk 

    for (int i = 1; i <= geto_sayi1() * geto_sayi2()*geto_sayi3(); i++) {//Alinan sayilari carparak ekok dongusu olusturduk cunku carpýmlarýnýn kesin kati oldugu biliniyor
        if ((i % geto_sayi1() == 0) && (i % geto_sayi2() == 0)&& (i % geto_sayi3() == 0)) {//Sayilari mod=0 saglayan deger bulana kadar kosul yazdim
            cout << "Sonuc : " << i;//sonucu yazdirdik
            break;
        }
    }
    return 0;
}
int OzelIslem::Ekok(int sayi1, int sayi2 ) {
//2 parametre icin gerekli Ekok fonksiyonunu olusturduk 

    for (int i = 1; i <= geto_sayi1() * geto_sayi2(); i++) {//Alinan sayilari carparak ekok dongusu olusturduk cunku carpýmlarýnýn kesin kati oldugu biliniyor
        if ((i % geto_sayi1() == 0) && (i % geto_sayi2() == 0)) {//Sayilari mod=0 saglayan deger bulana kadar kosul yazdim
            cout << "Sonuc : " << i;//sonucu yazdirdik
            break;
        }
    }
    return 0;
}
int OzelIslem::Ebob(int sayi1, int sayi2, int sayi3) {
	//3 parametre icin gerekli Ebob fonksiyonunu olusturduk 
    int buyukSayi;// buyukSayi degiskenini tanimladik
    //EBOB en fazla büyük sayý olabilir.
    if (geto_sayi1() > geto_sayi2() && geto_sayi1() > geto_sayi3()) {
        buyukSayi = geto_sayi1();
    }
    else if (geto_sayi2() > geto_sayi1() && geto_sayi2() > geto_sayi3())
	{
        buyukSayi = geto_sayi2();
    }

   else
   buyukSayi = geto_sayi3();
   //Yukarda 3 sayi arasinda sorgu yaparak en buyuk olani bulmaya calistik
   
    for (buyukSayi; buyukSayi > 0; buyukSayi--) {//Hangi sayi buyuk ise for dongusu kurduk
        if ((geto_sayi1() % buyukSayi == 0) && (geto_sayi2() % buyukSayi == 0)&& (geto_sayi3() % buyukSayi == 0)) {//Sayilari mod=0 saglayan deger bulana kadar kosul yazdim
            cout << "Sonuc : " << buyukSayi;//sonucu yazdirdik
            break;
        }
    }
    return 0;
}
int OzelIslem::Ebob(int sayi1, int sayi2) {
//3 parametre icin gerekli Ebob fonksiyonunu olusturduk 
    int buyukSayi;// buyukSayi degiskenini tanimladik
   //EBOB en fazla büyük sayý olabilir.
    if (geto_sayi1() > geto_sayi2()) {
        buyukSayi = geto_sayi1();
    }
    else {
        buyukSayi = geto_sayi2();
    }
 //Yukarda 2 sayi arasinda sorgu yaparak en buyuk olani bulmaya calistik
    for (buyukSayi; buyukSayi > 0; buyukSayi--) {
        if ((geto_sayi1() % buyukSayi == 0) && (geto_sayi2() % buyukSayi == 0)) {//Sayilari mod=0 saglayan deger bulana kadar kosul yazdim
            cout << "Sonuc : " << buyukSayi;//sonucu yazdirdik
            break;
        }
    }
    return 0;
}
int OzelIslem::Faktoriyel(int sayi1) {
//Faktoriyel icin gerekli fonksiyonu olusturduk
    if (sayi1 == 1 || sayi1 == 0)//Girilen sayi 1 yada 0 ise fonksiyon olmayacagi icin kosul sagladik
        return 1;
    else//Eger girilen sayi 0 ya da 1 degil ise alttaki recursive fonkisiyonu calistiracak
        return sayi1 * Faktoriyel(sayi1 - 1);//Faktoriyel icin gerekli recursive dongusunu yazdik

}
int OzelIslem::UsAlma(int sayi1, int sayi2) {
//Ust alma icin gerekli fonksiyonu sagladik
    int b = geto_sayi1();//girilen sayiyi b degiskenine tanimladik
    for (int a = 1; a < geto_sayi2(); a++) {// Ust alýnacak sayi kadar dongu donmesini sagladik
        b = geto_sayi1() * b;// girilen sayiyi deger atanan b sayisi ile yani girilen ilk deger ile dongu boyunca carptik
    }

    cout << "Sonuc : " << b; // Döngü bitti ve sonucu ekrana yazdirdik

    return 0;
}



class DortIslem {
    int sayi1, sayi2, sayi3;//degiskenleri tanimladik
public:
    int Topla(int sayi1, int sayi2);
    int Topla(int sayi1, int sayi2, int sayi3);
    int Cikar(int sayi1, int sayi2);
    int Cikar(int sayi1, int sayi2, int sayi3);
    int Carp(int sayi1, int sayi2);
    int Carp(int sayi1, int sayi2, int sayi3);
    int Bol(int sayi1, int sayi2);
    int Bol(int sayi1, int sayi2, int sayi3);
//Kullamilacak fonksiyonlari tanittik

    int setd_sayi1(int d_sayi1) {
        sayi1 = d_sayi1;
    }
    int setd_sayi2(int d_sayi2) {
        sayi2 = d_sayi2;
    }
    int setd_sayi3(int d_sayi3) {
        sayi3 = d_sayi3;
    }

    int getd_sayi1() {
        return sayi1;
    }
    int getd_sayi2() {
        return sayi2;
    }
    int getd_sayi3() {
        return sayi3;
    }
//Yukarida alinacak ve okunacak degiskenler icin get/set'leri tanimladik

};
int DortIslem::Topla(int sayi1, int sayi2) {
	//Toplama icin kullanilacak 2 parametreli fonksiyonu kurduk
    return sayi1 + sayi2;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Topla(int sayi1, int sayi2, int sayi3) {
	//Toplama icin kullanilacak 3 parametreli fonksiyonu kurduk
    return sayi1 + sayi2+ sayi3;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Cikar(int sayi1, int sayi2) {
	   //Cikarma icin kullanilacak 2 parametreli fonksiyonu kurduk
    return sayi1 - sayi2;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Cikar(int sayi1, int sayi2, int sayi3) {
		//Cikarma icin kullanilacak 3 parametreli fonksiyonu kurduk
    return sayi1 - sayi2- sayi3;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Carp(int sayi1, int sayi2) {
		//Carpma icin kullanilacak 2 parametreli fonksiyonu kurduk
    return sayi1 * sayi2;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Carp(int sayi1, int sayi2, int sayi3) {
		//Carpma icin kullanilacak 3 parametreli fonksiyonu kurduk
    return sayi1 * sayi2* sayi3;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Bol(int sayi1, int sayi2) {
		//Bolme icin kullanilacak 2 parametreli fonksiyonu kurduk
    return sayi1 / sayi2;// girilen degerleri recursive fonksiyon ile kurduk
}
int DortIslem::Bol(int sayi1, int sayi2, int sayi3) {
		//Bolme icin kullanilacak 3 parametreli fonksiyonu kurduk
    return (sayi1 / sayi2)/sayi3;// girilen degerleri recursive fonksiyon ile kurduk
}




class Islemler :public OzelIslem, public DortIslem{//OzelIslem ve DortIslem icin coklu kalýtým classý kurduk
int sec, sayi, sayi1, sayi2, sayi3, kac, a=0;//degiskenleri tanimladik
public:
    char devam;//degiskenleri tanimladik
    int genelmenu();//menu fonksiyonunu kurduk
};
int Islemler::genelmenu(){
    OzelIslem classozel;//OzelIslem classýna classozel objesi kurduk
    DortIslem classdort;//DortIslem classýna classdort objesi kurduk
    do
    {   cout << "<--***********************************************-->" << endl;
    	cout << "<--     Cem Kesici<--->172120002 Final Ödevi      -->" << endl;
        cout << "<--     1 -        EKOK (En Kucuk Ortak Kat )     -->" << endl;
        cout << "<--     2 -        EBOB(En Buyuk Ortak Bolen)     -->" << endl;
        cout << "<--     3 -        Faktoriyel Hesabý              -->" << endl;
        cout << "<--     4 -        Ust Alma                        -->" << endl;
        cout << "<--     5 -        Toplama                        -->" << endl;
        cout << "<--     6 -        Cikarma                        -->" << endl;
        cout << "<--     7 -        Carpma                         -->" << endl;
        cout << "<--     8 -        Bölme                          -->" << endl;
        cout << "<--***********************************************-->" << endl;
        cout << "<--            Secim Yapin                        -->" << endl;
        cin >> sec;
        a = 0;
        //Ekrana Yazdirdik ve secimi aldik
        if (sec < 0 || sec>8)
        {
           cout<<"Secim Hatali !  ";
            a = 1;
        }
        else   
            system("cls");
            
      //Yukarda eger girilen edger 8 den buyuk yada 0dan kucuk ise uyari verecek ve tekrar baslatacak 
	  //degil ise ekrani temizeyip gerekli secime götürecek sekilde kosul yazdim
	  
        switch (sec)
        {
        case(1)://1 yani Ekok secildiyse calisacak
        	cout<<"2 ya da 3 Sayi Ile Ýslem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;
        	//Ekrana yazdirdik ve deger aldik
        	if(kac==2){ // eger 2 secildiyse asagidaki kodu calistiracak
			cout << "1. Sayiyi giriniz : "; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; seto_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Ekok(geto_sayi1(), geto_sayi2());//2 parametreli Ekok fonksiyonunu cagirdik
            cout << endl; break;// Bir satir indirdik ve secimi bitirdik
			}
        	else if(kac==3){  // eger 3 secildiyse asagidaki kodu calistiracak         
		    cout << "1. Sayiyi giriniz : "; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; seto_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << "3. Sayiyi giriniz : "; cin >> sayi3; seto_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Ekok(geto_sayi1(), geto_sayi2(),geto_sayi3());//3 parametreli Ekok fonksiyonunu cagirdik
            cout << endl; break;// Bir satir indirdik ve secimi bitirdik
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        case(2)://2 yani Ebob secildiyse calisacak
        	cout<<"2 ya da 3 Sayi Ile Islem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;
        	//Ekrana yazdirdik ve deger aldik
        	if(kac==2){// eger 2 secildiyse asagidaki kodu calistiracak           
			cout << "1. Sayiyi giriniz : "; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; seto_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Ebob(geto_sayi1(), geto_sayi2());//2 parametreli Ebob fonksiyonunu cagirdik
            cout << endl; break;// Bir satir indirdik ve secimi bitirdik
			}
        	else if(kac==3){ // eger 3 secildiyse asagidaki kodu calistiracak          
		    cout << "1. Sayiyi giriniz : "; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; seto_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << "3. Sayiyi giriniz : "; cin >> sayi3; seto_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Ebob(geto_sayi1(), geto_sayi2(),geto_sayi3());//3 parametreli Ebob fonksiyonunu cagirdik
            cout << endl; break;// Bir satir indirdik ve secimi bitirdik
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        case(3): // 3 yani Faktoriyel secildiyse calistiracak
            cout << " Faktoriyel Alinacak Sayiyi Giriniz :"; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            Faktoriyel(geto_sayi1());// Faktoriyel fonksiyonunu cagirdik
            cout << "Sonuc : " << Faktoriyel(sayi1) << endl; break;// Sonucu ekrana yazdirdik

        case(4): // 4 yani Bolme secildiyse calistiracak
            cout << " Tabani Giriniz : "; cin >> sayi1; seto_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << " Ustu  Giriniz  : "; cin >> sayi2; seto_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            UsAlma(geto_sayi1(), geto_sayi2());// UsAlma fonksiyonunu cagirdik
            cout << endl; break;// Bir satir indirdik ve secimi bitirdik

        case(5): // 5 yani Toplama secildiyse calistiracak
        	cout<<"2 ya da 3 Sayi Ile Islem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;//Ekrana yazdirdik ve deger aldik
        	if(kac==2){// eger 2 secildiyse asagidaki kodu calistiracak            
			cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Topla(getd_sayi1(), getd_sayi2());// 2 parametreli Topla fonksiyonunu cagirdik
            cout << "Sonuc : " << Topla(getd_sayi1(), getd_sayi2()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
        	else if(kac==3){// eger 3 secildiyse asagidaki kodu calistiracak           
		    cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << "3. Sayiyi giriniz : "; cin >> sayi3; setd_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Topla(getd_sayi1(), getd_sayi2(), getd_sayi3());// 3 parametreli Topla fonksiyonunu cagirdik
            cout << "Sonuc : " << Topla(getd_sayi1(), getd_sayi2(), getd_sayi3()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        case(6):// 6 yani Cikarma secildiyse calistiracak
        	cout<<"2 ya da 3 Sayi Ile Islem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;//Ekrana yazdirdik ve deger aldik
        	if(kac==2){// eger 2 secildiyse asagidaki kodu calistiracak            
			cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Cikar(getd_sayi1(), getd_sayi2());// 2 parametreli Cikar fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Cikar(getd_sayi1(), getd_sayi2()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
        	else if(kac==3){// eger 3 secildiyse asagidaki kodu calistiracak           
		    cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << "3. Sayiyi giriniz : "; cin >> sayi3; setd_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Cikar(getd_sayi1(), getd_sayi2(), getd_sayi3());// 3 parametreli Cikar fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Cikar(getd_sayi1(), getd_sayi2(), getd_sayi3()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        case(7):// 7 yani Carpma secildiyse calistiracak
        	cout<<"2 ya da 3 Sayi Ile Islem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;//Ekrana yazdirdik ve deger aldik
        	if(kac==2){// eger 2 secildiyse asagidaki kodu calistiracak            
			cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Carp(getd_sayi1(), getd_sayi2());// 2 parametreli Carp fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Carp(getd_sayi1(), getd_sayi2()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
        	else if(kac==3){// eger 3 secildiyse asagidaki kodu calistiracak           
		    cout << "1. Sayiyi giriniz : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << "2. Sayiyi giriniz : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << "3. Sayiyi giriniz : "; cin >> sayi3; setd_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Carp(getd_sayi1(), getd_sayi2(), getd_sayi3());// 3 parametreli Carp fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Carp(getd_sayi1(), getd_sayi2(), getd_sayi3()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        case(8):// 8 yani Bolme secildiyse calistiracak
          	cout<<"2 ya da 3 Sayi Ile Islem Yapiliyor. Secim Yapin 2-3 : "<< endl; cin>> kac;//Ekrana yazdirdik ve deger aldik
        	if(kac==2){ // eger 2 secildiyse asagidaki kodu calistiracak           
            cout << " Bolunecek Sayiyi Giriniz    : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << " Bolen Sayiyi  Giriniz       : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            Bol(getd_sayi1(), getd_sayi2());// 2 parametreli Bol fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Bol(getd_sayi1(), getd_sayi2()) << endl;// Sonucu ekrana yazdirdik
            break;
			}
        	else if(kac==3){// eger 3 secildiyse asagidaki kodu calistiracak           
            cout << " Bolunecek Sayiyi Giriniz    : "; cin >> sayi1; setd_sayi1(sayi1);//Ekrana yazdirdik ve deger aldik
            cout << " Bolen Sayiyi  Giriniz       : "; cin >> sayi2; setd_sayi2(sayi2);//Ekrana yazdirdik ve deger aldik
            cout << " 2. Bolen Sayiyi  Giriniz    : "; cin >> sayi3; setd_sayi3(sayi3);//Ekrana yazdirdik ve deger aldik
            Bol(getd_sayi1(), getd_sayi2(), getd_sayi3());// 3 parametreli Bol fonksiyonunu cagirdik
            cout << "Sonuc : " <<  Bol(getd_sayi1(), getd_sayi2(), getd_sayi3()) << endl;// Sonucu ekrana yazdirdik
			break;
			}
			else//Eger 2 ya da 3 degil ise hata verecek 
			cout<<"Secim Hatali !  ";
	    	break;
	    	
        }
        if(a==0)//Eger a=0 ise fonksiyonu calistir dedik bunu nedeni de yukarida yanlis secim yapildiysa tekrar devam edilsin mi diye sormadan baslamasi icin
        {
        cout << "Devam etmek istiyor musunuz? E|H"; cin >> devam;//Ekrana yazdirdik ve deger aldik
        }

    } while (devam == 'e' || devam == 'E' || a==0);// e girildyise yada a=1 ise yani yanlis deger girildiyse program tekrar baslayacak

    return 0;

}



int main(){
    Islemler classmenu;// menu classona pbje tanimladik
    system("color 80");// rengi ayarladik
    setlocale(LC_ALL, "turkish");// Turkce karakter tanimladik
    classmenu.genelmenu();// tanimlanan objeyle genelmenu fonksiyonunu cagirdik
    return 0;
}
