#include <stdio.h>
#include <stdlib.h>

struct Ogrenci //��renci bilgilerini depolayan bir struct yaps� olu�turdum. 
{
 int no;
 char ad[20];
 char soyad[20];
 char adres[13];
};

 void OgrenciBilgileri(struct Ogrenci ogr)//Girdi�im ��renci bilgilerini ekranda g�stermesi i�in bir void fonsiyonu olu�turdum.
 {
       printf("%s  %s  %d  %s\n",ogr.ad,ogr.soyad,ogr.no,ogr.adres); // Her bir fonksiyon �a��rmamda ��rencileri ogr de�i�kenine atayarak ekrana yazd�rmas�n� sa�lad�m. 
 }

int main()
{
  struct Ogrenci ogrenci1={1220505038,"Zeynep","Uguz  ","Kocaeli"};
  struct Ogrenci ogrenci2={1225050078,"Leyla"," Akman ","Balikesir"};
  struct Ogrenci ogrenci3={1229853079,"Melek"," Yildiz","Bursa"};
  struct Ogrenci ogrenci4={1228943024,"Kemal"," Akay  ","Trabzon"};
  struct Ogrenci ogrenci5={1229053023,"Firat"," Derin ","Istanbul"};
   // 5 ��renci olu�turup bilgilerini girdim.Struct yap�s�nda hangi s�rayla girilmesi gereken bilgiler verilmi�se o s�ralamada bilgiler girilmelidir.
   
  OgrenciBilgileri(ogrenci1);
  OgrenciBilgileri(ogrenci2);
  OgrenciBilgileri(ogrenci3);
  OgrenciBilgileri(ogrenci4);
  OgrenciBilgileri(ogrenci5);
   // 5 ��renciyi olu�turdu�um OgrenciBilgileri isimli fonksiyona g�ndererek ogr de�i�kenine atanmalar�n� sa�lad�m. 
   
    return 0;
}
