#include <stdio.h>
#include <stdlib.h>

struct Ogrenci //Öðrenci bilgilerini depolayan bir struct yapsý oluþturdum. 
{
 int no;
 char ad[20];
 char soyad[20];
 char adres[13];
};

 void OgrenciBilgileri(struct Ogrenci ogr)//Girdiðim öðrenci bilgilerini ekranda göstermesi için bir void fonsiyonu oluþturdum.
 {
       printf("%s  %s  %d  %s\n",ogr.ad,ogr.soyad,ogr.no,ogr.adres); // Her bir fonksiyon çaðýrmamda öðrencileri ogr deðiþkenine atayarak ekrana yazdýrmasýný saðladým. 
 }

int main()
{
  struct Ogrenci ogrenci1={1220505038,"Zeynep","Uguz  ","Kocaeli"};
  struct Ogrenci ogrenci2={1225050078,"Leyla"," Akman ","Balikesir"};
  struct Ogrenci ogrenci3={1229853079,"Melek"," Yildiz","Bursa"};
  struct Ogrenci ogrenci4={1228943024,"Kemal"," Akay  ","Trabzon"};
  struct Ogrenci ogrenci5={1229053023,"Firat"," Derin ","Istanbul"};
   // 5 Öðrenci oluþturup bilgilerini girdim.Struct yapýsýnda hangi sýrayla girilmesi gereken bilgiler verilmiþse o sýralamada bilgiler girilmelidir.
   
  OgrenciBilgileri(ogrenci1);
  OgrenciBilgileri(ogrenci2);
  OgrenciBilgileri(ogrenci3);
  OgrenciBilgileri(ogrenci4);
  OgrenciBilgileri(ogrenci5);
   // 5 Öðrenciyi oluþturduðum OgrenciBilgileri isimli fonksiyona göndererek ogr deðiþkenine atanmalarýný saðladým. 
   
    return 0;
}
