#include <stdio.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//Kutuphaneler tanimlandi

//int main degiskenleri baslangic
int sec;
char devam;
//int main degiskenleri bitis



//Musteri degiskenleri baslangic 
int musteriurun, musterino = 0, musterisec, musteriuzun1, musteriuzun2, musterisayac = 0;
string musteriad, musterisoyad, musteriaranan, musteriokunan, musterisayi, musteriliste, silmusteri, sildmusteri;
//Musteri degiskenleri bitis




//Satis degiskenleri baslangic
char s_sildevam, sd_sildevam;
int satissayac = 0, satisno = 0, satissec, satisuzun1, satisuzun2, satisaduzun1, satisaduzun2, s_g = 0, s_a = 0, s_gd = 0, s_ad = 0,s_s = 0, suzun1, suzun2, sidyn = 0, siduzun ;
string satissayi, satisliste, satisad, satisaranan, satisokunan, satisadaranan, satisadokunan, silsatis, sildsatis, smusteriad, smusterisoyad,surunokunan, surunaranan ;
//Satis degiskenleri bitis




//Urun degiskenleri baslangic
float urunfiyat;
int urunsec, urunno = 0, urunuzun1, urunuzun2, urunsayac = 0, iduzun, idyn = 0, ubarkod = 0, r,u_g = 0, u_a = 0 ;
string urunaranan, urunokunan, urunad, urunmarka, urunsayi, urunliste, silyedek, silurun, sildurun, urunid;
char u_sildevam;
//Urun degiskenleri bitis



//Tarih degiskenleri baslangic
double tarihgun, tarihay, tarihyil;
int s = 0;
//Tarih degiskenleri bitis




//Telefon degiskenleri baslangic
char kabul;
int top = 0, uzunlukk;
string musterinumara;
//Telefon degiskenleri bitis




void telno()
{//Telefon numarasi icin gerekli sartlari burda kontrol ettim

    do
    {
        top = 0;// top degerini 0 a esitledim
        cout << "Telefon numarasini basinda ' 0 ' olmadan giriniz : " << endl; cin >> musterinumara;
        //Ekrana yazi yazdirdim ve girilen degeri aldim
        uzunlukk = musterinumara.length();//girilen degerin uzunlugunu uzunlukk degikenine atadim

        if (uzunlukk < 11 && uzunlukk>9)//uzunlukk degiskeni 10 a esitse donguye gir dedim
        {
            cout << musterinumara << "' numarasini girdiniz " << endl;// girilen numarayi ekrana yazdirdim
            cout << "Onayliyor musunuz? E|H " << endl; cin >> kabul;// onayliyor musunuz diye sordum
        }
        else// kosul saglaniyorsa donguye girecek
        {
            cout << "Girdiginiz numara uygun degil tekrar girin! " << endl;// Numaranin hatali oldugunu yazdirdim
            top++;// top'u 1 arttirdim
        }
    } while (kabul == 'h' || kabul == 'H' || top == 1);
    //Girilen numara yanlissa ya da tekrar numara girilmesini istiyorsa donguye tekrar baslatmasini sagladim
}




class tarih
{
public:
    tarih();
    ~tarih();
    void tarihh();
    void settarihgun(double s_tarihgun) {
        tarihgun = s_tarihgun;
    }
    void settarihay(double s_tarihay) {
        tarihay = s_tarihay;
    }
    void settarihyil(double s_tarihyil) {
        tarihyil = s_tarihyil;
    }
    void setALL(double tg, double  ta, double  ty) {
        tarihgun = ta;
        tarihay = ta;
        tarihyil = ty;

    }
    double gettarihgun() {
        return tarihgun;
    }
    double gettarihay() {
        return tarihay;
    }
    double gettarihyil() {
        return tarihyil;
    }
private:
};
tarih::tarih()
{
    int s = 0, tarihgun = 1, tarihay = 1, tarihyil = 1901;
}
tarih::~tarih()
{
}
void tarih::tarihh()//Tarih secmek icin gerekli sartlari burda kontrol ettim
{
    // s degiskenini tanimladim
    cout << "<-- Tarih: -->" << endl;// ekrana <-- Tarih: --> yazdirdim
    do
    {   s = 0; // s degiskenini s??f??ra esitledim
        cout << "GUN: "; cin >> tarihgun; settarihgun(tarihgun);//Ekrana gun yazdirdim ve kullanicidan gun degerini istedim
        if (tarihgun <= 0 || tarihgun > 31)// eger gun 31 den buyukse kosula gir
        {
            cout << "Hatali! Tekrar girin." << endl;// hatali girildigini ekrana yazdirdim
            s = 1;// s'i 1'e esitledim
        }
        
        if (s == 0)// Eger gun hatali ise ay sormamasi i??in s 0'a esitse gir diye kosulu yazd??m
        {
            cout << "AY:  ";  cin >> tarihay; settarihay(tarihay);// Ekrana ay yazdirdim ve kullanicidan ay degeri istedim
            if (tarihay <= 0 || tarihay > 12)// eger 12den buyukse donguye gir dedim
            {
                cout << "Hatali! Tekrar girin: " << endl;//hatali girildigini ekrana yazdirdim
                s = 1;// s'i 1'e esitledim
            }
        }
        if (s == 0)// Eger gun yada ay hatali ise yil sormamasi icin s 0'a esitse gir diye kosul yazdim
        {
            cout << "YIL: ";  cin >> tarihyil; settarihyil(tarihyil);// Ekrana yil yazdirdim ve kullanicidan yil degeri istedim
            if (1900 > tarihyil || tarihyil > 2020) {// eger yil 1900den kucuk ya da 2020den buyukse donguye gir dedim
                cout << "Hatali! Tekrar girin." << endl;//hatali girildigini ekrana yazdirdim
                s = 1;// s'i 1'e esitledim
            }
        }
    } while (s == 1);// eger s 1'e esitse tarih isteme ekrani tekrar acilsin diye while yazdim
    cout << "<-- Tarih --> " << gettarihgun() << "." << gettarihay() << "." << gettarihyil() << endl;// girilen tarihi ekrana yazdirdim
}

class tarihkalangun: public tarih
{
public:
    double gun, ay;
    void kalangun() 
    {
        gun = 31 - tarihgun;
        ay = 12 - tarihay;
        cout << endl;
        cout << "Yil sonuna: " << gun << " gun, " << ay << " ay kaldi" << endl;
    }
private:
};




class satis
{// satis classini olusturdum
public:
    void satisekle();//satis eklemek icin kurulan fonksiyonu tanimladim
    void satislistele();//satis listelemek icin kurulan fonksiyonu tanimladim
    void satisara();//satis aramak icin kurulan fonksiyonu tanimladim
    void satiskayitsayi();//satis da kac kayit oldugunu bulmak i????in kurulan fonksiyonu tanimladim
    void satissil();//satis silmek icin kurulan fonksiyonu tanimladim
    void satisduzenle();//satis duzenlemek icin kurulan fonksiyonu tanimladim
    friend class tarih;//tarih classini arkadas olarak tanimladim
    friend void telno();//telno fonksiyonunu arkadas olarak tanimladim
    satis();//satis icin yapici fonksiyonunu tanimladim
    ~satis();//satis icin yikici fonksiyonunu tanimladim
    void setsmusteriad(string s_smusteriad)
    {
        smusteriad = s_smusteriad;
    }
    void setsmusterisoyad(string s_smusterisoyad)
    {
        smusterisoyad = s_smusterisoyad;
    }
    void setsatisadaranan(string s_satisadaranan)
    {
        satisadaranan = s_satisadaranan;
    }
    void setALL(int m_sad, string m_snu, string m_ssa)
    {
        musteriad = m_sad;
        musterisoyad = m_ssa;
        musterinumara = m_snu;
    }
    //Ustte disardan alinacak degerlerinin tanimalamasini ve ne islemden gececeklerini belirttim
    string getsmusteriad()
    {
        return smusteriad;
    }
    string getsmusterisoyad()
    {
        return smusterisoyad;
    }
    string getsatisadaranan()
    {
        return satisadaranan;
    }
    //Ustte klavyeden alinan degerleri okuttum
    void satismenu() {
        system("cls");// ekrani temizlettim
        cout << "Teknoloji Magazasi Uygulamasi Satis Menusu " << endl;
        cout << "<--            1. Satis Ekle            -->" << endl;
        cout << "<--            2. Satis Listele         -->" << endl;
        cout << "<--            3. Satis Sil             -->" << endl;
        cout << "<--            4. Satis Ara             -->" << endl;
        cout << "<--            5. Satis Duzenle         -->" << endl;
        cout << "<--            6. Geri Don              -->" << endl;
        cout << "<--            Secim Yapin              -->" << endl;
        //Usttekileri ekrana yazdirdim
        cin >> satissec;//Girilen secimi aldim
        //Altta switch de girilen deger neyse o fonksiyona yonlendirdim
        switch (satissec)
        {
        case(1):
            satisekle();
            break;
        case(2):
            satiskayitsayi();
            satislistele();
            break;
        case(3):
            satissil();
            break;
        case(4):
            satiskayitsayi();
            satisara();
            break;
        case(5):
            satisduzenle();
            break;
        case(6):
            break;
        default:
            break;
        }
    };
private:
};
satis::satis()
{// yapici fonksiyonda deger atadim
    int satissayac = 0, satisno = 0, musterisayac = 0;
}
satis::~satis()
{

}
void satis::satisekle()
{
    ofstream satisekle; satisekle.open("sat.txt", ios::app);
    ofstream musteriekle; musteriekle.open("musteri.txt", ios::app);
    //satisekle dosyasini tanimladik ve sat.txt'ini yazma formatinda cagirdik 
    //musterisekle dosyasini tanimladik ve musteri.txt'ini yazma formatinda cagirdik 
    do 
    {           s_s = 0;//sayaci sifira esitledik
               ifstream urunekle;
               urunekle.open("urun.txt", ios::in);
               //urunekle dosyasini tanimladik ve urun.txt'ini okuma formatinda cagirdik 
               do
               {
                   sidyn = 0;//sayaci sifira esitledik
                   cout << "6 Haneli Urun ID'sini girin : " << endl; cin >> surunaranan; setsatisadaranan(surunaranan);
                   //Ekrana yazdirdik ve deger aldik
                   siduzun = surunaranan.length();//girilen degerin uzunlugunu bulup degiskene atad??k
                   if (siduzun == 6)
                   {// eger degisken 6 ya esitse fonksiyona girecek
                       sidyn = 0;//sayaci sifira esitledik
                   }
                   else
                   {// degilse de altta olan fonksiyonu dondurecek
                       cout << "Hatali! Tekrar deneyin. " << endl; 
                       sidyn++;//sayaci 1 arttirdik
                   }

               } while (sidyn != 0);// degisken 0 degilse dogru deger dondurecek ve yeniden baslatacak

               while (!urunekle.eof())// urunekle dosyasini sonuna kadar calistiracak
               {
                   getline(urunekle, surunokunan);// urunekleyi degiskene kopyaliyor
                   suzun1 = surunokunan.length();// okunan degerin uzunlugunu degiskene atiyor
                   suzun2 = surunaranan.length();// aranan degerin uzunlugunu degiskene atiyor
                   for (int i = 0; i < (suzun1 - suzun2); i++)
                   {//okunan deger uzunlugundan aranani cikartip donguyu kurduk
                       if (surunaranan.compare(surunokunan.substr(i, suzun2)) == 0)//aranan degeri okunan degerde donguye sokup kosula bagladik
                       {
                           s_s = 1; break; // degiskeni 1e esitledik
                       }
                    }
               }
               urunekle.close();// urunekle dosyasini kapattik
               if (s_s==0)
               {// eger degisken  0 a esitse fonksiyona girecek
               cout << "Urun Bulunmuyor! " << endl;
               }

       } while (s_s == 0);// degisken 0a esitse dogru deger dondurecek ve yeniden baslatacak
    cout << "<-- Musteri'nin bilgilerini girin --> " << endl;
    cout << "Musteri'nin Adi: " << endl; cin >> smusteriad; setsmusteriad(smusteriad);
    cout << "Musteri'nin Soyadi : " << endl;	cin >> smusterisoyad; setsmusterisoyad(smusterisoyad);
    // Yukardakileri ekrana yazdiracak ve deger alacak
    telno();// telno fonksiyonunu cagirdik

    satisekle << getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t\t" << getsatisadaranan() << endl;
    satisekle.close();
    // girilen degerleri satisekle dosyasina ekledik ve dosyayi kapattik
    cout << "Urun eklendi..." << endl;
    //Ekrana yazdirdik

    musteriekle << getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t" << musterinumara << endl;
    musteriekle.close();
    // girilen degerleri musteriekle dosyasina ekledik ve dosyayi kapattik
    cout << "Musteri eklendi..." << endl;
    //Ekrana yazdirdik

}
void satis::satiskayitsayi() {

    satissayac = 0;//sayaci sifira esitledik
    ifstream satisekle; satisekle.open("sat.txt", ios::in);//satisekle dosyasini tanimladik ve sat.txt'ini okuma formatinda cagirdik 
    while (!satisekle.eof())// satisekle dosyasi sona gelene kadar dongunun saglanmas??nu sagladik
    {
        getline(satisekle, satissayi);// getline ile satisekleyi satissayi stringine aktardik
        satissayac++;//sayaci 1 arttirdik

    }
    satisno = satissayac - 1;// satissayac degerini bos deger de eklendigi icin 1 c??kart??p satisno ya atadik
    satisekle.close();// satisekle dosyasini kapattik
}
void satis::satislistele()
{
    satisno = 0;//satisno yu sifira esitledik
    ifstream satisekle; satisekle.open("sat.txt", ios::in);//satisekle dosyasini tanimladik ve sat.txt'ini okuma formatinda cagirdik 
    while (!satisekle.eof())// satisekle dosyasi sona gelene kadar dongunun saglanmas??nu sagladik
    {
        if (satisno == 0)
        {// Eger satisno sifirsa yani sifirinci satirda ise altta olanlari yazirdik
            cout << "No" << "\t" << "??sim" << "\t\t" << "Soy ??sim" << "\t\t\t" << "Alinan Urun??D" << "\t\t" << "G??N" << "." << "AY" << "." << "Y??L" << endl;
        }
        satisno++;//sayaci 1 arttirdik
        getline(satisekle, satisliste);// getline ile satisekleyi satisliste stringine aktardik
        cout << satisno << "\t" << satisliste << "\t\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;// satislisteye aktarilan degerleri ekrana yazdirdik
    }

    satisekle.close();// satisekle dosyasini kapattik
}
void satis::satisara()
{
    ifstream satisekle; satisekle.open("sat.txt", ios::in);;//satisekle dosyasi tanimladik ve okuma formatinda cagirdik
    cout << "Aranan veriyi giriniz : " << endl;//ekrana yazdirdik
    cin >> satisaranan;//girilen degeri aldik
    while (!satisekle.eof())// satisekle dosyasi sona gelene kadar dongunun saglanmas??nu sagladik
    {
        getline(satisekle, satisokunan);// getline ile satisekleyi satisokunan stringine aktardik
        satisuzun1 = satisokunan.length();//okunan degerin uzunlugunu satisuzun1 degiskenine atadik
        satisuzun2 = satisaranan.length();//aranan degerin uzunlugunu satisuzun2 degiskenine atadik
        for (int i = 0; i < (satisuzun1 - satisuzun2); i++)//okunan deger uzunlugundan aranani cikartip donguyu kurduk
        {
            if (satisaranan.compare(satisokunan.substr(i, satisuzun2)) == 0)//aranan degeri okunan degerde donguye sokup kosula bagladik
            {
                cout << "Aradiginiz " << endl;
                cout << satisno << "\t" << satisokunan << "\t\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;
                cout << "  bulundu. " << endl;
                break;
                //okunan deger var ise ekrana yazdirdik
            }
            else
            {
                cout << "Girilen veri bulunmuyor..." << endl;
            }
            //aranan deger yok ise ekrana yazdirdik
        }
    }
    satisekle.close();// satisekle dosyasini kapattik
}
void satis::satissil() {
    do
    {
        s_g = 0;//sayaci sifira esitledik
        s_a = 0;//sayaci sifira esitledik
       
        ifstream satisekle;
        ofstream syedek;
        satisekle.open("sat.txt", ios::in);
        syedek.open("sgecici.tmp");
        //satisnekle dosyasini tanimladik ve sat.txt'ini okuma formatinda cagirdik 
        //syedek dosyasini tanimladik ve sgecici.tmp'ini yazma formatinda cagirdik 
        cout << "Silinecek Satis ??cin Musterinin Adini Giriniz :"; cin >> silsatis;
        //Ekrana yazdirdik ve deger aldik
        while (!satisekle.eof())// satisekle dosyasini sonuna kadar calistiracak
        {
            satisekle >> smusteriad >> smusterisoyad >> satisadaranan;// satisekle dosyas??ndan verileri ald??k
            void setALL(int m_sad, string m_snu, string m_ssa);// degiskenleri aldik
            if (getsmusteriad() == silsatis && s_a == 0)//gerekli kosulu yazdik
            {
                s_a++;// sayaci 1 arttitrdik
                cout << "Urun Silindi..." << endl;  //Ekrana yazdirdik 
                s_g++;// sayaci 1 arttitrdik
            }
            else
            {// kosul saglanmiyorsa asagidaki fonksiyonu calistiracak
                s_g++;// sayaci 1 arttitrdik
                while (!satisekle.eof())// satisekle dosyasini sonuna kadar calistiracak
                {
                    syedek << getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t\t" << getsatisadaranan() << endl; break;
                    // girilen degerleri syedek dosyasina ekledik 
                }
            }
        }
        if (s_g == 0)
        { //gerekli kosulu yazdik
            cout << "Kayit Bulunamadi!" << endl; //Ekrana yazdirdik
        }
        satisekle.close();// satisekle dosyasini kapattik
        syedek.close();// syedek dosyasini kapattik
        remove("sat.txt");// sat.txt sildik
        rename("sgecici.tmp", "sat.txt");// sgecici.tmp ad??n?? sat.txt olarak degistirdik
        cout << "Silme islemine devam edilsin mi ? (E|H)"; cin >> s_sildevam;
        // ekrana yazdirdik ve devam etmek icin E yada H harfi aldik
    } while (s_sildevam == 'e' || s_sildevam == 'E');
    //girilen veri e E ise tekrar baslattik
}
void satis::satisduzenle()
{


    do
    {
        s_gd = 0;
        s_ad = 0;
        // s_gd s_ad degerlerini sifira esitledik
        ifstream satisekle;
        ofstream sdyedek;
        fstream musteriekle;
        satisekle.open("sat.txt", ios::in);
        sdyedek.open("sdgecici.tmp", ios::app);
        //satisekle dosyasini olusturup okuma olarak actik
        //syedek dosyasin olusturup yazma olarak actik
        cout << "Duzenlenecek Satis ??cin Musterinin Adini Giriniz :"; cin >> sildsatis;// ekrana yazdirdik ve girilen degeri atadik
        while (!satisekle.eof())// satisekle dosyasi sona gelene kadar dongunun saglanmasini sagladik
        {
            satisekle >> smusteriad >> smusterisoyad >> satisadaranan;//satisekleden degerleri aldik
            void setALL(int m_sad, string m_snu, string m_ssa);// degiskenleri aldik
            if (getsmusteriad() == sildsatis && s_ad == 0)// satisekleden okunan smusteriad degerini girilen degerle ayni mi ve a=0 mi diye kosula soktuk."Get kullandik"
            {
                s_ad++;// s_ad 1 arttirdik
                cout << "Guncel bilgileri giriniz: " << endl;//Ekrana yazdirdik
                do
                {
                    s_s = 0;// sayaci sifira esitledik
                    ifstream urunekle;
                    urunekle.open("urun.txt", ios::in);// urunekle dosyasini actik urun.txti okuma olarak cagirdik
                    do
                    {
                        sidyn = 0;// degiskeni sifira esitledik
                        cout << "6 Haneli Urun ID'sini girin : " << endl; cin >> surunaranan; setsatisadaranan(surunaranan);
                        //Ekrana yazdik ve deger aldik
                        siduzun = surunaranan.length();
                        //girilen degerin uzunlugunu ogrendik
                        if (siduzun == 6)
                        {// Kosul saglaniyorsa girilen degerin uzunlugu 6 ise fonksiyonu calistiriyor
                            sidyn = 0;// sayaci sifira esitledik
                        }
                        else
                        {//kosul saglanmiyorsa fonksiyonu calistiriyor
                            cout << "Hatali! Tekrar deneyin. " << endl; sidyn++;
                        }

                    } while (sidyn != 0);// degiskenin degeri 0 degil ise true deger dondurup yeniden baslatiyor

                    while (!urunekle.eof())// urunekle dosyasi sona gelene kadar dongunun saglanmasini sagladik
                    {
                        getline(urunekle, surunokunan);// getline ile urunekleyi surunokunan stringine aktardik
                        suzun1 = surunokunan.length();//stringin uzunlugunu ogrendik ve degiskene atadik
                        suzun2 = surunaranan.length();//stringin uzunlugunu ogrendik ve degiskene atadik
                        for (int i = 0; i < (suzun1 - suzun2); i++)//okunan deger uzunlugundan aranani cikartip donguyu kurduk
                        {
                            if (surunaranan.compare(surunokunan.substr(i, suzun2)) == 0)//aranan degeri okunan degerde donguye sokup kosula bagladik
                            {
                                s_s = 1; break;//degiskene 1 atadik
                            }
                        }
                    }
                    urunekle.close();//urunekle dosyasini kapattik
                    if (s_s == 0)
                    {//kosul dogruysa asagidaki fonksiyonu calistiracak 
                        cout << "Urun Bulunmuyor! " << endl;
                    }

                } while (s_s == 0);// degisken 0'sa true degeri dondurecek ve bastan baslatacak
                cout << "Musterinin Adi : " << endl; cin >> smusteriad; setsmusteriad(smusteriad);
                cout << "Musterinin Soyadi : " << endl;	cin >> smusterisoyad; setsmusterisoyad(smusterisoyad);
                //ekrana yazdirip deger alacak
                telno();// telno fonksiyonunu cagirdik
                sdyedek << getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t\t" << getsatisadaranan() << endl;
                //girilen degerleri sdyedek dosyas??na girdik
                cout << "Urun eklendi..." << endl;
                //ekrana yazdirdik
                musteriekle << getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t" << musterinumara << endl;
                //girilen degerleri musteriekle dosyas??na girdik
                cout << "Musteri eklendi..." << endl;
                //ekrana yazdirdik
                s_gd++;// degiskeni 1 arttirdik
                break;
            }
            else
            {// ustteki kosul saglanmiyorsa giriyor
                s_gd = 1;//degiskeni 1e esitledik
                while (!satisekle.eof())// satisekle dosyasi sona gelene kadar dongunun saglanmas??nu sagladik
                {
                    sdyedek<< getsmusteriad() << "\t\t" << getsmusterisoyad() << "\t\t\t\t" << getsatisadaranan() << endl;
                    break;
                    //girilen degerleri syedek dosyasina yazdik
                }
            }
        }
        if (s_gd == 0)
        { // s_g sifir ise kosula gir dedim
            cout << "Kayit Bulunamadi!" << endl;
            // ekrana yazdirdik
        }
        satisekle.close();//satisekle dosyasini kapattik
        sdyedek.close();// sdyedek dosyasini kapattik
        musteriekle.close();// musteri ekle dosyasini kapattik
        remove("sat.txt");// sat.txt i sildik
        rename("sdgecici.tmp", "sat.txt");// sdgecici.tmp ad????n???? sat.txt yaptik

        cout << "Duzenleme islemine devam edilsin mi ? (E|H)"; cin >> sd_sildevam;
        // ekrana yazdirdik ve devam etmek icin E yada H harfi aldik
    } while (sd_sildevam == 'e' || sd_sildevam == 'E');
    //girilen veri e E ise tekrar baslattik
}




class urunn
{
public:
    urunn();
    ~urunn();
    void seturunid(string s_urunid)
    {
        urunid = s_urunid;
    }
    void seturunad(string s_urunadi)
    {
        urunad = s_urunadi;
    }
    void seturunfiyat(float s_urunfiyat)
    {
        urunfiyat = s_urunfiyat;
    }
    void setubarkod(int s_ubarkod) {
        ubarkod = s_ubarkod;
    }
    void setALL(int k, string a, float f, string l, int b)
    {
        ubarkod = b;
        silurun = l;
        urunid = k;
        urunad = a;
        urunfiyat = f;
    }
    string geturunid()
    {
        return urunid;
    }
    string getUrunad()
    {
        return urunad;
    }
    float getUrunfiyat()
    {
        return urunfiyat;
    }
    int getubarkod() {
        return ubarkod;
    }
    void urunekle();
    void urunlistele();
    void urunsil();
    void urunara();
    void urunkayitsayi();
    void urunduzenle();
    int random();
    friend class tarih;
    friend void telno();
    void urunmenu() {
        system("cls");
        cout << " Teknoloji Magazasi Uygulamasi Urun Menusu " << endl;
        cout << "<--            1. Urun Ekle             -->" << endl;
        cout << "<--            2. Urun Listele          -->" << endl;
        cout << "<--            3. Urun Sil              -->" << endl;
        cout << "<--            4. Urun Ara              -->" << endl;
        cout << "<--            5. Urun Duzenle          -->" << endl;
        cout << "<--            6. Geri Don              -->" << endl;
        cout << "<--            Secim Yapin              -->" << endl;
        cin >> urunsec;

        switch (urunsec)
        {
        case(1):
            urunekle();
            break;
        case(2):
            urunkayitsayi();
            urunlistele();
            break;
        case(3):
            urunsil();
            break;
        case(4):
            urunkayitsayi();
            urunara();
            break;
        case(5):
            urunduzenle(); break;
        case(6):
            break;
        default:
            break;
        }
    };
private:
};
urunn::urunn()
{
    int urunno = 0, urunsayac = 0;
}
urunn::~urunn()
{
}
void urunn::urunekle()
{
    random();
    ofstream urunekle; urunekle.open("urun.txt", ios::app);
      
    do
    {
        idyn = 0;
        cout << "6 Haneli Urun ID'sini girin : " << endl; cin >> urunid; seturunid(urunid); 
          iduzun = urunid.length();
            if (iduzun == 6)
            {
                idyn = 0;
            }
            else
            {
                cout << "Hatali!Tekrar deneyin." << endl; idyn++;
            }

     } while (idyn != 0);

    cout << "Urunun adini girin : " << endl; cin >> urunad; seturunad(urunad);
    cout << "Urunun fiyatini girin : " << endl; cin >> urunfiyat; seturunfiyat(urunfiyat);
    setubarkod(ubarkod);
    urunekle << geturunid() << "\t\t" << getUrunad() << "\t\t" << getUrunfiyat() <<"\t\t\t" << getubarkod() << endl;
    urunekle.close();
    cout << "Urun eklendi..." << endl;
}
void urunn::urunkayitsayi()
{

    urunsayac = 0;
    ifstream urunekle;
    urunekle.open("urun.txt", ios::in);
    while (!urunekle.eof())
    {
        getline(urunekle, urunsayi);
        urunsayac++;
    }
    urunno = urunsayac - 1;
    urunekle.close();

}
void urunn::urunlistele()
{
    urunno = 0;
    fstream urunekle;
    urunekle.open("urun.txt");
    while (!urunekle.eof())
    {
        if (urunno == 0) 
        {
         cout << "No" << "\t" << "Urun??D" << "\t\t" <<"??sim" << "\t\t" <<"Fiyat" << "\t\t\t" << "Barkod"<< "\t\t" << "G??N" << "." << "AY" << "." << "Y??L" << endl;
        }
        urunno++;
        getline(urunekle, urunliste);
        cout << urunno << "\t" << urunliste << "\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;
    }

    urunekle.close();
}
void urunn::urunara()
{
    ifstream urunekle;
    urunekle.open("urun.txt", ios::in);
    cout << "Aranan veriyi giriniz : " << endl;
    cin >> urunaranan;
    while (!urunekle.eof())
    {
        getline(urunekle, urunokunan);
        urunuzun1 = urunokunan.length();
        urunuzun2 = urunaranan.length();
        for (int i = 0; i < (urunuzun1 - urunuzun2); i++)
        {
            if (urunaranan.compare(urunokunan.substr(i, urunuzun2)) == 0)
            {
                cout << "Aradiginiz " << endl;
                cout << urunno << "\t" << urunokunan << "\t\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;
                cout << "  bulundu. " << endl;
                break;
            }

        }
    }
    urunekle.close();
}
void urunn::urunsil()
{

    do
    {
        u_g = 0;
        u_a = 0;
        ifstream urunekle;
        ofstream uyedek;
        urunekle.open("urun.txt", ios::in);
        uyedek.open("ugecici.tmp");

        cout << "Silinecek Urunun ID'sini Giriniz :"; cin >> silurun;
        while (!urunekle.eof())
        {
            urunekle >> urunid >> urunad >> urunfiyat >> ubarkod;
            void setALL(int k, string a, float f, string l, int b);

            if (geturunid() == silurun && u_a == 0)
            {
                u_a++;
                u_g++;
                cout << "Urun Silindi..." << endl;


            }

            else
            {
                u_g++;
                while (!urunekle.eof())
                {
                    uyedek << geturunid() << "\t\t" << getUrunad() << "\t\t" << getUrunfiyat() << "\t\t\t" <<getubarkod()<< endl; break;
                }
            }
        }
        if (u_g == 0)
        {
            cout << "Kayit Bulunamadi!" << endl;
        }

        urunekle.close();
        uyedek.close();
        remove("urun.txt");
        rename("ugecici.tmp", "urun.txt");

        cout << "Silme islemine devam edilsin mi ? (E|H)"; cin >> u_sildevam;

    } while (u_sildevam == 'e' || u_sildevam == 'E');

}
void urunn::urunduzenle()
{

    int u_gd = 0, u_ad = 0;
    char ud_sildevam;
    do
    {
        u_gd = 0;
        u_ad = 0;
        ifstream urunekle;
        ofstream udyedek;
        urunekle.open("urun.txt", ios::in);
        udyedek.open("udgecici.tmp");

        cout << "Duzenlenecek Urunun ID'sini Giriniz :"; cin >> sildurun;
        while (!urunekle.eof())
        {
            urunekle >> urunid >> urunad >> urunfiyat >> ubarkod;
            void setALL(int k, string a, float f, string l, int b);

            if (geturunid() == sildurun && u_ad == 0)
            {
                cout << "Urun Bulundu... " << endl;
                cout << "Guncel bilgileri giriniz... " << endl;
                do
                {
                    idyn = 0;
                    cout << "Urunun ID'sini girin : " << endl; cin >> urunid; seturunid(urunid);
                    iduzun = urunid.length();
                    if (iduzun == 6)
                    {
                        idyn = 0;
                    }
                    else
                    {
                        cout << "Hatali!Tekrar deneyin." << endl; idyn++;
                    }

                } while (idyn != 0);
                cout << "Urunun Adini girin : " << endl; cin >> urunad; seturunad(urunad);
                cout << "Urunun Fiyatini girin : " << endl; cin >> urunfiyat; seturunfiyat(urunfiyat);
                udyedek << geturunid() << "\t\t" << getUrunad() << "\t\t" << getUrunfiyat() << "\t\t\t" << getubarkod() << endl;
                cout << "Urun eklendi..." << endl;
                u_ad++;
                u_gd = 1;
            }
            else
            {
                while (!urunekle.eof())
                {
                    udyedek << urunid << "\t\t" << urunad << "\t\t" << urunfiyat << "\t\t\t" << ubarkod << endl; break;
                }


            }
        }
        if (u_gd == 0)
        {
            cout << "Kayit Bulunamadi!" << endl;
        }

        urunekle.close();
        udyedek.close();
        remove("urun.txt");
        rename("udgecici.tmp", "urun.txt");

        cout << "Duzenleme islemine devam edilsin mi ? (E|H)"; cin >> ud_sildevam;

    } while (ud_sildevam == 'e' || ud_sildevam == 'E');

}
int urunn::random() 
{
  
   srand(time(0));
   r = rand() % 100;
   ubarkod = urunfiyat+(r * 100) + 100000+(tarihay * 10)+1000+(r*tarihay)+(tarihgun*10)+(tarihgun*r)+tarihyil+100;
   setubarkod(ubarkod);
   return 1;
 }




class musteri
{
public:
    musteri();
    ~musteri();
    void setmusteriad(string s_musteriad)
    {
        musteriad = s_musteriad;
    }
    void setmusterisoyad(string s_musterisoyad)
    {
        musterisoyad = s_musterisoyad;
    }
    void setmusterinumara(string s_musterinumara)
    {
        musterinumara = s_musterinumara;
    }
    void setALL(int m_ad, string m_nu, string m_sa)
    {
        musteriad = m_ad;
        musterisoyad = m_sa;
        musterinumara = m_nu;
    }
    string getmusteriad()
    {
        return musteriad;
    }
    string getmusterisoyad()
    {
        return musterisoyad;
    }
    string getmusterinumara()
    {
        return musterinumara;
    }
    void musterilistele();
    void musteriara();
    void musteriekle();
    void musterikayitsayi();
    void musterisil();
    void musteriduzenle();
    friend class tarih;
    friend void telno();
    void musterimenu() {
        system("cls");
        cout << "Teknoloji Magazasi Uygulamasi Musteri Menu " << endl;
        cout << "<--            1. Musteri Ekle          -->" << endl;
        cout << "<--            2. Musteri Listele       -->" << endl;
        cout << "<--            3. Musteri Sil           -->" << endl;
        cout << "<--            4. Musteri Ara           -->" << endl;
        cout << "<--            5. Musteri Duzenle       -->" << endl;
        cout << "<--            6. Geri Don              -->" << endl;
        cout << "<--            Secim Yapin              -->" << endl;
        cin >> musterisec;

        switch (musterisec)
        {
        case(1):
            musteriekle();
            break;
        case(2):
            musterikayitsayi();
            musterilistele();
            break;
        case(3):
            musterisil();
            break;
        case(4):
            musterikayitsayi();
            musteriara();
            break;
        case(5):
            musteriduzenle(); break;
        case(6):
            break;
        default:
            break;
        }
    };
private:
};
musteri::musteri()
{
    int  musterino = 0, musterisayac = 0;
}
musteri::~musteri()
{
}
void musteri::musteriekle()
{


    ofstream musteriekle;
    musteriekle.open("musteri.txt", ios::app);
    cout << "<-- Musterinin bilgilerini girin --> " << endl;
    cout << "Musterinin Adi : " << endl; cin >> musteriad; setmusteriad(musteriad);
    cout << "Musterinin Soyadi : " << endl;	cin >> musterisoyad; setmusterisoyad(musterisoyad);
    telno();
    musteriekle << getmusteriad() << "\t\t" << getmusterisoyad() << "\t\t\t" << musterinumara << endl;
    musteriekle.close();
}
void musteri::musterikayitsayi() {

    musterisayac = 0;

    ifstream musteriekle;
    musteriekle.open("musteri.txt", ios::in);
    while (!musteriekle.eof())
    {
        getline(musteriekle, musterisayi);
        musterisayac++;
    }
    musterino = musterisayac - 1;
    musteriekle.close();
}
void musteri::musterilistele()
{
    musterino = 0;
    ifstream musteriekle;
    musteriekle.open("musteri.txt", ios::in);
    while (!musteriekle.eof())
    {
        if (musterino == 0)
        {
            cout << "No" << "\t" << "??sim" << "\t\t" << "Soy ??sim" << "\t\t" << "Tel No." << "\t\t\t" << "G??N" << "." << "AY" << "." << "Y??L" << endl;
        }
        musterino++;
        getline(musteriekle, musteriliste);
        cout << musterino << "\t" << musteriliste << "\t\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;
    }

    musteriekle.close();
}
void musteri::musteriara()
{
    ifstream musteriekle;
    musteriekle.open("musteri.txt", ios::in);
    cout << "Aranan veriyi giriniz : " << endl;
    cin >> musteriaranan;
    while (!musteriekle.eof())
    {
        getline(musteriekle, musteriokunan);
        musteriuzun1 = musteriokunan.length();
        musteriuzun2 = musteriaranan.length();
        for (int i = 0; i < (musteriuzun1 - musteriuzun2); i++)
        {
            if (musteriaranan.compare(musteriokunan.substr(i, musteriuzun2)) == 0)
            {
                cout << "Aradiginiz " << endl;
                cout << musterino << "\t" << musteriokunan << "\t\t\t" << tarihgun << "." << tarihay << "." << tarihyil << endl;
                cout << "  bulundu. " << endl;
                break;
            }

        }
    }
    musteriekle.close();
}
void musteri::musterisil() {

    int m_g = 0, m_a = 0;
    char m_sildevam;
    do
    {
        m_g = 0;
        m_a = 0;

        ifstream musteriekle;
        ofstream myedek;
        musteriekle.open("musteri.txt", ios::in);
        myedek.open("mgecici.tmp");

        cout << "Silinecek Musterinin Adini Giriniz :"; cin >> silmusteri;
        while (!musteriekle.eof())
        {

            musteriekle >> musteriad >> musterisoyad >> musterinumara;
            void setALL(int m_ad, string m_nu, string m_sa);

            if (getmusteriad() == silmusteri && m_a == 0)
            {
                m_a++;
                cout << "Musteri Silindi..." << endl;
                m_g = 1;

            }

            else
            {
                while (!musteriekle.eof())
                {
                    myedek << musteriad << "\t\t" << musterisoyad << "\t\t" << musterinumara << endl; break;
                }
            }


        }
        if (m_g == 0)
        {
            cout << "Kayit Bulunamadi!" << endl;
        }

        musteriekle.close();
        myedek.close();
        remove("musteri.txt");
        rename("mgecici.tmp", "musteri.txt");
        cout << "Silme islemine devam edilsin mi ? (E|H)"; cin >> m_sildevam;

    } while (m_sildevam == 'e' || m_sildevam == 'E');

}
void musteri::musteriduzenle() {
    int m_gd = 0, m_ad = 0;
    char md_sildevam;
    do
    {
        m_gd = 0;
        m_ad = 0;

        ifstream musteriekle;
        ofstream mdyedek;
        musteriekle.open("musteri.txt", ios::in);
        mdyedek.open("mdgecici.tmp");

        cout << "Duzenlenecek Musterinin Adini Giriniz :"; cin >> sildmusteri;
        while (!musteriekle.eof())
        {

            musteriekle >> musteriad >> musterisoyad >> musterinumara;
            void setALL(int m_ad, string m_nu, string m_sa);

            if (getmusteriad() == sildmusteri && m_ad == 0)
            {
                m_gd++;
                cout << "Guncel bilgileri giriniz: " << endl;
                cout << "Musterinin Adi : " << endl; cin >> musteriad; setmusteriad(musteriad);
                cout << "Musterinin Soyadi  : " << endl;	cin >> musterisoyad; setmusterisoyad(musterisoyad);
                telno();

                mdyedek << getmusteriad() << "\t\t" << getmusterisoyad() << "\t\t" << musterinumara << endl;
                m_ad++;
            }

            else
            {
                m_gd++;
                while (!musteriekle.eof())
                {
                    mdyedek << getmusteriad() << "\t\t" << getmusterisoyad() << "\t\t" << musterinumara << endl; break;
                }
            }


        }
        if (m_gd == 0)
        {
            cout << "Kayit Bulunamadi!" << endl;
        }

        musteriekle.close();
        mdyedek.close();
        remove("musteri.txt");
        rename("mdgecici.tmp", "musteri.txt");
        cout << "Duzenleme islemine devam edilsin mi ? (E|H)"; cin >> md_sildevam;

    } while (md_sildevam == 'e' || md_sildevam == 'E');


}




int main()
{   system("color 80");//rengi ayarladik
    setlocale(LC_ALL, "turkish");//Turkce karakterler okumas??n?? sadladik
    satis satisclass;// satis classina satisclass adli objeyi tanimladik
    urunn urunclass;// Urun classina  urunclass adli objeyi tanimladik
    musteri mustericlass;// musteri classina  mustericlass adli objeyi tanimladik
    tarih tarihclass;// tarih classina  tarihclass adli nesneyi tanimladik
    tarihkalangun classkalangun;// tarihkalangun classina classkalangun adli nesneyi tanimladik
    tarihclass.tarihh();//olusturulan nesneyle fonksiyonu cagirdik
    classkalangun.kalangun();//olusturulan nesneyle fonksiyonu cagirdik
    do
    {   cout << endl;
        cout << "   Teknoloji Magazasi Uygulamasi Ust Menu  " << endl;
        cout << "<--             1. Urun                 -->" << endl;
        cout << "<--             2. Musteri              -->" << endl;
        cout << "<--             3. Satis                -->" << endl;
        cout << "<--             Secim Yapin             -->" << endl;
        cin >> sec;
        // Usttekileri ekrana yazdirdik ve secimi aldik
        //Altta switch de girilen secime gore classa yonlendirdi
        switch (sec)
        {
        case(1):
            urunclass.urunmenu();  break;
        case(2):
            mustericlass.musterimenu(); break;
        case(3):
            satisclass.satismenu(); break;
        default:
            break;
        }
        cout << "Devam etmek istiyor musunuz? E|H"; cin >> devam;
        // ekrana yazdirdik ve devam etmek icin E yada H harfi aldik
    } while (devam == 'e' || devam == 'E');
    //girilen veri e E ise tekrar baslattik
    system("pause");
    return 0;
}


