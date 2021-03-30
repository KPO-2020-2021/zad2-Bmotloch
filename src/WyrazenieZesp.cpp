#include "WyrazenieZesp.hh"
#include <iostream>
//#include "LZespolona.hh"

using namespace std;
/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */


/*
* Przeciazenie operatora
*/
ostream & operator << (ostream & strumien, const Operator op){
switch (op)
{
case Op_Dodaj:
strumien << "+";
return strumien;
    break;
case Op_Odejmij:
strumien << "-";
return strumien;
    break;
    case Op_Mnoz:
strumien << "*";
return strumien;
    break;
    case Op_Dziel:
strumien << "/";
return strumien;
    break;
default:
    break;
}
return strumien;
}


/*
*Przeciazenie wyswietlenia
*/
ostream & operator << (ostream & strumien, WyrazenieZesp Wyr){
    strumien<<Wyr.Arg1<<Wyr.Op<<Wyr.Arg2;
    return strumien;
}

