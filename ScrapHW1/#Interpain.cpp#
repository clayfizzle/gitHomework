#include <iostream>
#include "IntCell.h"

using namespace std;


IntCell::IntCell( int initVal ) : storedVal( initVal = 0 ){
    
}
//IntCell methods
int IntCell::read( ){
    return storedVal;
}

void IntCell::write( int x ){
    storedVal = x;
}

int IntCell::operator + ( IntCell &x ){
    return storedVal + x.storedVal;
}

void IntCell::operator += ( IntCell &x ){
    storedVal += x.read();
}


int main(){

    IntCell[] arr = new IntCell[3];

    IntCell m;
    cout << "Getting shit started !!" << endl;

    cout << "My Cell:  " << m.read() << endl;

    m.write(25);
    cout << "My Cell:  " << m.read() << endl;
}
