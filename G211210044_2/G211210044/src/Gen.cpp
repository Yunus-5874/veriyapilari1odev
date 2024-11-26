/**
* @file gen.cpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yýlmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#include "Gen.hpp"

Gen::Gen(char veri)
{
    this->veri = veri;
    onceki = sonraki = 0;
}
Gen::~Gen()
{
}