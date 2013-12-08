#include "IntCell2.h"
#include <vector>
#include <iostream>
using namespace std;

IntCell2::IntCell2( initVal ) : storedVal( initVal = 0){

}
/*
IntCell2::~IntCell2(){
    delete;
}
IntCell2( const IntCell &cell ){
    return 
}
*/
int IntCell2::IntCell2 read( IntCell2 i ){
    return storedVal;
}

void replace( IntCell2 i ){
    storedVal = i.storedVal;
}

void add( IntCell2 i ){
    storedVal = this.storedVal + i.storedVal;
}

void subtract( IntCell2 i ){
    storedVal = this.storedVal - i.storedVal;
}
/*
bool IntCell2::operator < ( IntCell2 i ){
    return this.storedVal < i.storedVal;
}

bool IntCell2::operator <= ( IntCell2 i ){
    return this.storedVal <= i.storedVal;
}

bool IntCell2::operator == ( IntCell2 i ){
    return This.storedVal == i.storedVal;
}

bool IntCell2::operator != ( IntCell2 i ){
    rerturn this.storedVal != i.storedVal;
}
*/
ostream IntCell2::operator << ( IntCell2 &i ){
    cout << this.storedVal;
}

ostream IntCell2::operator >> ( IntCell2 &i ){
    int temp;
    cin >> temp;
    IntCell cell(temp);
    return cell;
}




                    
