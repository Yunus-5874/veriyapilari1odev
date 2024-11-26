/**
* @file kromozom.cpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yýlmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#include "Kromozom.hpp"

Kromozom::Kromozom()
{
    ilk = son = 0;
    onceki=sonraki=0;
    uzunluk=0;
}
Kromozom::~Kromozom()
{
    Gen *gezici = ilk;
    while (gezici != 0)
    {
        Gen *yoket = gezici;
        gezici = gezici->sonraki;
        delete yoket;
    }
}
void Kromozom::GenEkle(char veri)
{
    Gen *yeni = new Gen(veri);
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

void Kromozom::Yazdir()
{
    Gen *gezici = son;
    while (gezici!=0)
    {
        if(ilk->veri>=gezici->veri)
        {
            cout<<gezici->veri<<" ";
            return;
        }
        gezici=gezici->onceki;
    }
   
    
}