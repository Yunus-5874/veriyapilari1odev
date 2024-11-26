/**
* @file kromozom.hpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yılmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#ifndef Kromozom_hpp
#define Kromozom_hpp

#include <iostream>
#include <iomanip>
#include "Gen.hpp"

using namespace std;

class Kromozom
{
public:
    Kromozom();
    ~Kromozom();
    Gen *ilk;
    Gen *son;
    Kromozom *onceki;
    Kromozom *sonraki;
    int uzunluk;
    void Yazdir();
    void GenEkle(char veri);
};

#endif