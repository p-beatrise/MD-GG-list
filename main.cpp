/****
Vards, uzvards: Paula Beatrise Valtere

G20. Uzrakstit funkciju, kas ieliek saraksta elementu ar vertibu n pec pirma elementa ar vertibu m.

GG.** Vismaz viena no datu parbaudem jarealize, izmantojot iznemumsituaciju apstrades (exception handling) mehanismu.
****/

#include <iostream>
#include <list>
#include <algorithm>
#include"GGlist.h"
using namespace std;

void parbaude (int s){

if(s<0) {throw "!!!Kluda!!! Garums nevar but negativs!";}       ///Iznemuma izmesanas bloki
if(s==0) {throw "!!!Kluda!!! Garums nevar but 0!";}

}

int main()
{
    int ok=1;
do{
    list<int> s1;
                                                    ///Funkcija saraksta elementu ievadei

    int garums;
    int skaitlis;
    bool nav=false;
    bool ir=true;

    cout<<"Ievadiet velamo saraksta garumu: ";
    cin>>garums;

    try {parbaude(garums);}                         ///Funkcija iznemumsituaciju parbaudei

    catch(const char *e){cout<<e<<endl;ir=false;}           ///Iznemuma partversanas bloki
    catch(...){cout<<"Nezinama kluda!"<<endl;ir=false;}

    while(ir!=true){

        cout<<"Ievadiet garumu velreiz:";
        cin>>garums;

            try {parbaude(garums);}

            catch(const char *e){cout<<e<<endl;nav=true;}
            catch(...){cout<<"Nezinama kluda!"<<endl;nav=true;}

     if(nav!=true)ir=true;
     nav=false;
    }


    for (int i=0; i < garums; i++)
    {
        cout<<"Ievadiet "<<i+1<<". skaitli: ";
        cin>>skaitlis;
        s1.push_back(skaitlis);                                              ///Saraksta elementu ievade
    }
    cout<<endl;
    cout<<"Jusu ievadita saraksta vertibas: ";
    for (auto &a: s1) { cout<<a<<" "; };                                     ///Saraksta izprintesana
    cout<<endl;cout<<endl;

		int pirmav;
		cout<<"Kadu elementu velaties ievietot?"<<endl;
		cin>>pirmav;
		cout<<endl;
		int peckura;
		cout<<"Pec kadas elementa vertibas velaties ievietot "<<pirmav<<" ?"<<endl;
		cin>>peckura;
		cout<<endl;


int ir2=0;

while(ir2!=1){                                   ///Cikls vertibas eksistences parbaudei, pec kuras japievieno elements

auto i = find (s1.begin(), s1.end(), peckura);
if (i!= s1.end()) ir2=1;
     else {cout<<"Vertiba, pec kuras velaties ievietot "<<pirmav<<" neeksiste\nIevadiet citu vertibu: ";
     cin>>peckura;}
    }

iesprauz(s1, pirmav, peckura);                                       ///Funkcija elementa iespausanai saraksta

cout<<"Jusu ievadita saraksta vertibas ar iesprausto elementu: ";
for (auto &a: s1) { cout<<a<<" "; };
cout<<endl;

s1.clear();                                                            ///Saraksta izdzesana

cout<<endl;
cout<<"Ja velaties atkartot darbibas, spiediet '1', citadak - '0'."<<endl;
cin>>ok;
cout<<endl;
}while(ok!=0);
}
