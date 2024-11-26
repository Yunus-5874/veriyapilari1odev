/**
* @file hucre.cpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yýlmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#include "Hucre.hpp"

Hucre::Hucre()
{
    uzunluk = 0;
    ilk = 0;
    son = 0;
    ifstream dosya1("Dna.txt");
    if (dosya1.is_open())
    {
        char gen;
        string kromozom;
        while (getline(dosya1, kromozom))
        {
            stringstream satir(kromozom);
            Kromozom *yenikromozom = new Kromozom();
            while (satir >> gen)
            {
                yenikromozom->GenEkle(gen);
            }
            KromozomEkle(yenikromozom);
        }
    }
}
Hucre::~Hucre()
{
    Kromozom *gezici = ilk;
    while (gezici != 0)
    {
        Kromozom *yoket = gezici;
        gezici = gezici->sonraki;
        delete yoket;
    }
}
void Hucre::KromozomEkle(Kromozom *yeni)
{
    if (ilk == 0)
    {
        ilk = yeni;
        son = yeni;
        yeni->onceki = 0;
        yeni->sonraki = 0;
        uzunluk++;
    }
    else
    {
        son->sonraki = yeni;
        yeni->onceki = son;
        yeni->sonraki = 0;
        son = yeni;
        uzunluk++;
    }
}
void Hucre::CrosOver(int index1, int index2)
{
    if (index1 >= uzunluk || index2 >= uzunluk)
    {
        return;
    }
    Kromozom *yeni1 = new Kromozom();
    Kromozom *yeni2 = new Kromozom();
    Kromozom *kromozom1 = ilk;

    for (int i = 0; i < index1; i++)
    {
        kromozom1 = kromozom1->sonraki;
    }
    Gen *gen1 = kromozom1->ilk;
    for (int i = 0; i < kromozom1->uzunluk; i++)
    {
       
        if (i < kromozom1->uzunluk/2)
        {
            yeni1->GenEkle(gen1->veri);
        }
        else
        {
            yeni2->GenEkle(gen1->veri);
        }
        gen1 = gen1->sonraki;
    }
    Kromozom *kromozom2 = ilk;
    for (int i = 0; i < index2; i++)
    {
        kromozom2 = kromozom2->sonraki;
    }
    Gen *gen2 = kromozom2->ilk;
    for (int i = 0; i < kromozom2->uzunluk; i++)
    {
        if (i < kromozom2->uzunluk/2)
        {
            yeni2->GenEkle(gen2->veri);
        }
        else
        {
            yeni1->GenEkle(gen2->veri);
        }
        gen2 = gen2->sonraki;
    }
    KromozomEkle(yeni1);
    KromozomEkle(yeni2);
}
void Hucre::Mutasyon(int indexK, int indexG)
{
    if (indexK > uzunluk)
    {
        return;
    }
    Kromozom *gezici = ilk;
    for (int i = 0; i < indexK; i++)
    {
        gezici = gezici->sonraki;
    }
    if (indexG > gezici->uzunluk)
    {
        return;
    }
    Gen *geziciGen = gezici->ilk;
    for (int i = 0; i < indexG; i++)
    {
        geziciGen = geziciGen->sonraki;
    }
    geziciGen->veri = 'X';
}
void Hucre::Yazdir()
{
    Kromozom *gezici = ilk;
    while (gezici != 0)
    {
        gezici->Yazdir();
        gezici = gezici->sonraki;
    }
     
}
void Hucre::OtoIslemler()
{
    ifstream dosya2("Islemler.txt");
    if (dosya2.is_open())
    {
        char kod;
        int ilk = 0, iki = 0;
        string satir;
        while (getline(dosya2, satir))
        {
            stringstream okuma(satir);
            if (okuma >> kod)
                if (okuma >> ilk)
                    if (okuma >> iki)

                        if (kod == 'C')
                        {
                            CrosOver(ilk, iki);
                        }
                        else if (kod == 'M')
                        {
                            Mutasyon(ilk, iki);
                        }
                        else
                        {
                            cout << "Hatali Otomasyon Dosyasi \n";
                        }
        }
    }
}
