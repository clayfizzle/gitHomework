#include <iostream>
#include <vector>
//#include "ShallowCell.h"
#include "IntCell2.h"

using namespace std;
/*
IntCell2::IntCell2( int initVal ) : storedVal( initVal = 0 ){
}

int IntCell::add ( IntCell x ){ 
    return this.storedVal + x.read(); 
}

int IntCell2::read( ){
    return storedVal;
}
void IntCell2::write( int x ){
    storedVal = x;
}

*/
int main(){

    IntCell2 i1(95);
    IntCell2 i2;

     cout << "intcell i1: " << i1.read() << endl;
     cout << "intcell i2: " << i2.read() << endl;    
    return 0;
}


