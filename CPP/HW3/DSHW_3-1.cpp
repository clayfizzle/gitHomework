//Clay Francisco
//10-04-13
//
//Data structures
//Homework 3
//

#include <iostream>
#include <list>

using namespace std;

void printLots(list<int> l, list<int> p);

list<int> fillList(  list<int> list, int maxVal );
list<int> fillList2( list<int> list, int maxVal );

int main(){

    int Larry [] = {2,3,5,7,9,14,18,33,38};
    int Parry [] = {4,8};

    list<int> L(Larry, Larry + sizeof(Larry) / sizeof(int));
    list<int> P(Parry, Parry + sizeof(Parry) / sizeof(int));
    list<int> X;

    list<int>::iterator Litr;
    list<int>::iterator Pitr;

    Litr = L.begin();
    Pitr = P.begin();
    
    int i = 0;
    for(Litr = L.begin(); Litr != L.end(); Litr++){
        cout << "L[" << 1+ i++ << "] = " << *Litr << endl;
        
    }

    cout << endl;
    cout << endl;

    i = 0;
    for(Pitr = P.begin(); Pitr != P.end(); Pitr++){
        cout << "P[" << 1+ i++ << "] = " << *Pitr << endl;
        
    }

    cout << endl;
    cout << endl;
    
    printLots(L, P);

    cin.get();
    return 1;
}

void printLots(list<int> l, list<int> p){
   
    list<int>::iterator pit = p.begin();
    list<int>::iterator lit = l.begin();

    int val = 1;
    
    for(; val < l.size(); val++){
        if(val == *pit){
            cout << "L[" << val << "] = " << *lit << endl;
            pit++;
            lit++;
        }
        else{
            lit++;
        }
    } 
}

