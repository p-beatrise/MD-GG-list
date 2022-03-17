#include"GGlist.h"
#include <list>

void iesprauz(std::list<int> &saraksts, int ko, int pecka){ ///Galvena funkcija

bool eksiste=false;

for (auto &a: saraksts){                                ///Cikls ievietojama elementa eksistences parbaudei

    if(a==pecka){eksiste=true;break;}
}


if(eksiste!=true)throw 0;                           ///Iznemuma noteiksanas un pazinojuma izmesanas bloks

std::list<int>bb={ko};
auto it=saraksts.begin();

for (auto &a: saraksts){
    it++;
    if(a==pecka){saraksts.insert(it,bb.begin(),bb.end());break;}       ///Cikls elementa iesprausanai
}


}


