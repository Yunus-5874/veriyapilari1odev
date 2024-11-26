/**
* @file gen.hpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yılmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#ifndef Gen_hpp
#define Gen_hpp

#include <iostream>

using namespace std;

class Gen
{
public:
    Gen(char veri);
    ~Gen();
    char veri;
    Gen *onceki;
    Gen *sonraki;
};

#endif