#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <cmath>
#include <iostream>
#include <cstdlib> 
#include <cstring>
using namespace std;
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator + (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator - (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator * (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator / (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator / (LZespolona Skl1, double Skl2);

LZespolona operator += (LZespolona Skl1, LZespolona Skl2);

LZespolona operator /= (LZespolona Skl1, LZespolona Skl2);

LZespolona Sprzezenie(LZespolona Skl2);

double Modul2(LZespolona Skl2);

void Wyswietl(LZespolona);

ostream& operator << (ostream &strumien, LZespolona &Lzesp);

#endif
