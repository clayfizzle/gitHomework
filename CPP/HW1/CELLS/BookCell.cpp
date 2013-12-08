#include "BookCell.h"
#include <iostream>

using namespace std;

BookCell::BookCell( int initialValue ) : storedValue( initialValue = 0){

}

BookCell::BookCell( const BookCell & rhs ){
    storedValue = new int( *rhs.storedValue );
}

BookCell::~BookCell( ){
    delete storedValue;
}

const BookCell & BookCell::operator=( const BookCell & rhs ){
    if( this != &rhs )
        *storedValue = *rhs.storedValue;
    return *this;
}

int BookCell::read( ) const{
    return *storedValue;
}

void BookCell::write( int x ){
    *storedValue = x;
}
