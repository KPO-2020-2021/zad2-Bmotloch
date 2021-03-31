#include "LZespolona.hh"
#define MIN_DIFF 0.01
 using namespace std;
/*!
 * Realizuje porównanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwsza porównywana liczba zespolona,
 *    Skl2 - druga porównywana liczba zespolona.
 * Zwraca:
 *    True dla równych liczb zespolonych.
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2){
  if ((abs(Skl1.re - Skl2.re) <= MIN_DIFF) && (abs(Skl1.im - Skl2.im) <= MIN_DIFF))
    return true;
  else
    return false;
}

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;
  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

/*
*przeciazenie odejmowania
*/
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;
  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

/*
*przeciazenie mnozenia
*/
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;
  Wynik.re = (Skl1.re * Skl2.re) - (Skl1.im * Skl2.im);
  Wynik.im = (Skl1.re * Skl2.im) + (Skl1.im * Skl2.re);
  return Wynik;
}

/*!
 * Realizuje dzielenie liczby zespolonej przez skakar.
 * Argumenty:
 *    Skl1 - dzielona liczba zespolona,
 *    Skl2 - skalar-dzielnik.
 * Zwraca:
 *    Wynik dzielenia dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator / (LZespolona  Skl1,  double  Skl2){
  LZespolona  Wynik;
if(Skl2 != 0){
  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}
else{
cerr << "Dzielenie przez 0!" << endl;
return Wynik;
}
}

/*
*przeciazenie dzielenia
*/
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona Wynik;
  if (Skl2.re == 0 || Skl2.im == 0){
    cerr<< "Dzielenie przez 0!"<<endl;
  }
  Wynik= operator * (LZespolona(Skl1), Sprzezenie(Skl2));
  Wynik.re=Wynik.re/(Modul2(Skl2));
  Wynik.im = Wynik.im/(Modul2(Skl2));
  return Wynik;
}
LZespolona Sprzezenie(LZespolona Skl2){
  Skl2.im=-(Skl2.im);
  return Skl2;
}

double Modul2(LZespolona Skl2){
double Wynik;
Wynik = pow(Skl2.re,2)+pow(Skl2.im,2);
return Wynik;
}

/*
*przeciazenie wyswietlania liczby zespolonej
*/
ostream& operator << (ostream &strumien, LZespolona &Lzesp)
{
  strumien << "(" << Lzesp.re << showpos << Lzesp.im << "i)" << noshowpos;
  return strumien;
}