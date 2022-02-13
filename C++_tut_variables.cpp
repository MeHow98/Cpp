#include <iostream>

using namespace std;

int main()
{
   string imiePostaci = "Marek";
   int wiekPostaci;
   wiekPostaci = 35;

    cout << "Zyl pewien mezczyzna zwany " << imiePostaci << endl;
    cout << imiePostaci << " mial " << wiekPostaci<< " lat" << endl;

    imiePostaci = "Tomek"; //Zmiana wartosci w srodku kodu
    cout << "Podobalo mu sie imie " << imiePostaci << endl;
    cout << "Ale nie podobalo mu sie ze mial " << wiekPostaci << " lat" << endl;
    //Co jesli chce zmienic imie postaci lub jej wiek?
    //Moge zmienic je na piechote zmieniajac kazda linijke ktora zawiera te wartosci albo przypisac do nich zmienne
    return 0;
}
