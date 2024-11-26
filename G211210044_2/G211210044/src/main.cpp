/**
* @file main.cpp
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yýlmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "Hucre.hpp"
#include "Kromozom.hpp"
#include "Gen.hpp"
using namespace std;
int main()
{
    Hucre *hucre = new Hucre();
    int islem = 0;
    while (islem != 5)
    {
        int bir = 0, iki = 0;
        cout << "1.Caprazlama\n2.Mutasyon\n3.Otomatik Islemler\n4.Yazdir\n5.Cikis \nIslem seciniz\n";
        cin >> islem;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
        }
        system("cls");
        if (islem == 1)
        {
            cout << "Birinci degeri girin \n";
            cin >> bir;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            cout << "Ikinci degeri girin \n";
            cin >> iki;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            hucre->CrosOver(bir, iki);
        }
        else if (islem == 2)
        {
            cout << "Birinci degeri girin \n";
            cin >> bir;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            cout << "Ikinci degeri girin \n";
            cin >> iki;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            hucre->Mutasyon(bir, iki);
        }
        else if (islem == 3)
        {
            hucre->OtoIslemler();
        }
        else if (islem == 4)
        {
            hucre->Yazdir();
        }
        else if (islem == 5)
        {
            delete hucre;
        }
        cout << "\n\n";
    }
}
