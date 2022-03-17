/****
Vards, uzvards: Paula Beatrise Valtere

G20. Uzrakstit funkciju, kas ieliek saraksta elementu ar vertibu n pec pirma elementa ar vertibu m.

GG.** Vismaz viena funkcija (velams, galvena) ir janoteste, izmantojot vienibtestesanu,
kur attieciga funkcija butu japarbauda uz vismaz tris dazadiem nosacijumiem
****/


#include <iostream>
#include <list>
#include"../../GGlist/GGlist.h"

using namespace std;

bool vai_vienads(list<int> list1,list<int> list2){          ///Funkcija sarakstu identiskuma parbaudei

if(list1.size()!=list2.size())return false;

auto it=list1.begin();
auto it2=list2.begin();

for(;it!=list1.end() && it2!=list2.end();it++ , it2++) {
        if(*it!=*it2) {
        cout<<*it<<" "<<*it2<<endl;return false;
        }
 }
return true;
}

bool test_A(list<int> list1,list<int> list2){               ///Vienibtests

int ko=99;
int pecka=3;

iesprauz(list1, ko,  pecka);                                ///Testejamas funkcijas izsaukums

return vai_vienads(list1,list2);                            ///Sarakstu identiskuma patiesuma parbaude
}

bool test_B(list<int> list1,list<int> list2){              ///Vienibtests

int ko=99;
int pecka=5;

iesprauz(list1, ko,  pecka);

return vai_vienads(list1,list2);
}

bool test_C(list<int> list1,list<int> list2){           ///Vienibtests

int ko=99;
int pecka=1;

iesprauz(list1, ko,  pecka);

return vai_vienads(list1,list2);
}

bool test_D(list<int> list1){                           ///Vienibtests

int ko=99;
int pecka=78;


try{(iesprauz(list1, ko,  pecka));}                    ///Iznemuma situacijas apstrades funkcija

catch(int error) {if(error==0) return 1;                ///Iznemuma partversanas bloki
                    else return 0;}
catch(...) {return 0;}
}

int main()
{
    cout << "Testi:" << endl;

list<int>Sar={1,2,3,4,5};
list<int>Sar2={1,1,2,3,4,5};

list<int>A={1,2,3,99,4,5};
list<int>B={1,2,3,4,5,99};
list<int>C={1,99,1,2,3,4,5};

cout<<test_A(Sar,A)<<endl;  ///Vienibtestu funkciju izsauksana
cout<<test_B(Sar,B)<<endl;
cout<<test_C(Sar2,C)<<endl;
cout<<test_D(Sar)<<endl;
}
