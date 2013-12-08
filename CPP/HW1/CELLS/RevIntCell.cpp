#include <iostream>
#include "IntCell.h"
#include "ShallowCell.h"

using namespace std;

/* -- Constructors/Destructors -- */
//"Default" Constructors
IntCell::IntCell( int initVal ) : storedVal( initVal ){
}
//Copy Constructor
ShallowCell::ShallowCell( const ShallowCell &refX ) : storedVal( refX.storedVal ){
}

//Destructor
ShallowCell::~ShallowCell( ){
//If IntCell contained any class objects, their destructors would be called here
}

/* -- Methods -- */
// (=) operator overloading for SHALLOW COPY
Shallow &ShallowCell::operator=( const ShallowCell &refX ){
    if(this != &refX)
        { storedVal = refX.storedVal; }
    return *this;
}

ShallowCell ShallowCell::operator + ( ShallowCell &refX ){
    return ShallowCell( storedVal + refX.read() );
}

void ShallowCell::operator+= ( ShallowCell &refX ){
    this.write( storedVal + refX.read() );
} 

// (+) operator overloading for NON-destructive  addition
IntCell IntCell::operator + ( IntCell &x ){
    return IntCell( this.read() + x.read() );
}

// (+=) operator overloading for descructive addition.
void IntCell::operator += ( IntCell &x ){
    this.write( this.read() + x.read() );
}

int IntCell::read( )
    { return storedVal; }
int ShallowCell::read( ) const
    { return storedVal; }

void IntCell::write( int x )
    { storedVal = x; }
void ShallowCell::write( int x )
    { storedVal = x; }


/*
//Non-desctructive add
int IntCell::operator+( const IntCell c1, const IntCell c2 )
    { return c1 + c2; }

//Descrutive add
void IntCell::operator+( IntCell c1, IntCell c2 )
    { c1 += c2 }
*/

int main( int argc, char *argv[] ){
    IntCell i1(25);

    IntCell i2;

    cout << "Cell 1: " << i1.read() << "\nCell 2: " << i2.read() << endl;

    i1.write(15); 
       
    i2.write(i1.read());

    cout << "Cell 1: " << i1.read() << "\nCell 2: " << i2.read() << endl;

}


