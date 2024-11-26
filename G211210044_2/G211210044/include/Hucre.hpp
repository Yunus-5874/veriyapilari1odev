/**
* @file hucre.hpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yılmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#ifndef Hucre_hpp
#define Hucre_hpp

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "Kromozom.hpp"

using namespace std;

class Hucre
{
public:
    Kromozom *ilk;
    Kromozom *son;
    int uzunluk;
    Hucre();
    ~Hucre();
    void KromozomEkle(Kromozom *ekle);
    void CrosOver(int index1, int index2);
    void Mutasyon(int indexK, int indexG);
    void Yazdir();
    void OtoIslemler();
};

#endif