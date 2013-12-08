#include "IntCell.h"
#include <iostream>

using namespace std;

IntCell::IntCell( int initVal ) : storedVal( initVal ){

}

IntCell IntCell::add( IntCell cell ){
    return IntCell( storedVal + cell.read() );
}

IntCell IntCell::operator + ( IntCell cell ){
    return IntCell( storedVal + cell.read() );
}

void IntCell::operator += ( IntCell cell ){
    storedVal = storedVal + cell.read();
}

IntCell IntCell::operator - ( IntCell cell ){
    return IntCell( storedVal - cell.read() );    
}

int IntCell::read( void ){
    return storedVal;
}

void IntCell::write( int newVal ){
    storedVal = newVal;
}


