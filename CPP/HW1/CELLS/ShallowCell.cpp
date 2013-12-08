#include <iostream>
#include "ShallowCell.h"

using namespace std;

ShallowCell::ShallowCell( int initVal ) : storedVal( initVal ){

}

void ShallowCell::operator += ( ShallowCell &cellRef ){
    storedVal = storedVal + cellRef.read();
}
void &ShallowCell::operator = ( ShallowCell &cellRef ){
    storedVal = cellRef.read();
}
ShallowCell ShallowCell::operator + ( ShallowCell &cellRef ){
    return storedVal + cellRef.read();
}
ShallowCell ShallowCell::operator - ( ShallowCell &cellRef ){
    return ShallowCell( storedVal - cellRef.read() );
}


