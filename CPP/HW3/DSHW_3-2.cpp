//Clay Francisco
//10-04-13
//
//Data structures
//Homework 3
//

#include <iostream>
#include <list>
#include <>

using namespace std;

void flipSingly( list<int>::iterator it, int elem );
void flipDoubly( list<int>::iterator it, int elem );

int main(){

    int Larray [] = {2,3,5,7,9, 14,18,33,38};
    int Parray [] = {2,4,6,8,10,12,14,16,18};

    list<int> L(Larray, Larray + sizeof(Larray) / sizeof(int));
    list<int> P(Parray, Parray + sizeof(Parray) / sizeof(int));

    list<int>::iterator Litr;
    list<int>::iterator Pitr;

    Litr = L.begin();
    Pitr = P.begin();
   

    for(int i = 1; i <= L.size(); i++){
        cout << i <<  " : " << *Litr << endl;
    }

    cout << "After the flip " << endl;

    flipDoubly(Litr, 5);

    for(int i = 1; i <= L.size(); i++){
        cout << i <<  " : " << *Litr << endl;
    }
    cin.get();
    return 1;
}

void flipDoubly( list<int>::iterator it, int elem ){
    int place = 1;

    Node *p = it.current;

    for(; place < l.size(); place++){
        if(place == elem){
            
            p->prev->prev->next = p->prev;
            p->prev->prev = p->next;
        
            p->prev->next = p->next->prev;
        }
    }
    cout << "element not found" << endl;
}

void flipSingly( list<int>::iterator it, int elem ){

}
   


