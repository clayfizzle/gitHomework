//Clay Francisco
//10-04-13
//
//Data structures
//Homework 3
//

#include <iostream>
#include <list>

using namespace std;

int[] intersect(list<int> a, list<int> b);

int main(){

    int Larry [] = {2,3,5,7,9,14,18,33,38};
    int Parry [] = {4,8,10,16,19,25,27,31,35};

    list<int> L(Larry, Larry + sizeof(Larry) / sizeof(int));
    list<int> P(Parry, Parry + sizeof(Parry) / sizeof(int));
    list<int> X;

    list<int>::iterator Litr;
    list<int>::iterator Pitr;

    Litr = L.begin();
    Pitr = P.begin();
    
    int i = 0;
    for(Litr = L.begin(); Litr != L.end(); Litr++){
        
    }

    cout << endl;
    cout << endl;

    i = 0;
    for(Pitr = P.begin(); Pitr != P.end(); Pitr++){
        
    }
    
    cin.get();
    return 1;
}

int intersect( list<int> a, list<int> b ){
    if(a.size() > b.size()){
      int temp[a.size()];
    }
    else{
      int temp[b.size()];
    }
    for(){
        if(*itrA == *itrB){
            
        }
    }
}


