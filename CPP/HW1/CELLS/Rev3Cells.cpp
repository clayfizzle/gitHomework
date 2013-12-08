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



int main( ){
    
    //If they only enter ints this will be fine but... 
    //...I'm not sure how to do the error checking yet.
    int temp;
    
    cout << "Enter an integer: ";
    cin >> temp;
    IntCell c1;
    c1.write(temp);

    cout << "Enter another integer: ";
    cin >> temp;
    IntCell c2;
    c2.write(temp);
    
    cout << "Do it again!!! : ";
    cin >> temp;
    IntCell c3;
    c3.write(temp);
 
    cout << "Forward: " << c1.read() << c2.read() << c3.read() << endl;
    cout << "Reverse: " << c3.read() << c2.read() << c1.read() << endl;

    //or is int division is ok?
    temp =  c1.read();
    temp += c2.read();
    temp += c3.read();    
    
    cout << "Average: " << ( temp / 3.0) << endl;
    
    //stupid simple "find max"
    if( c1.read() > c2.read() && c1.read() > c3.read() )
        { cout << "Max:     " << c1.read() << endl; }
    
    if( c2.read() > c1.read() && c2.read() > c3.read() )
        { cout << "Max:     " << c2.read() << endl; }
    
    if( c3.read() > c1.read() && c3.read() > c2.read() )
        { cout << "Mix:     " << c3.read() << endl; }

    //stupid simple "find min"
    if( c1.read() < c2.read() && c1.read() < c3.read() )
        { cout << "Min:     " << c1.read() << endl; }
    
    if( c2.read() < c1.read() && c2.read() > c3.read() )
        { cout << "Min:     " << c2.read() << endl; }
    
    if( c3.read() < c1.read() && c3.read() < c2.read() )
        { cout << "Min:     " << c3.read() << endl; }

}

/*************************************************************
]0;SchoolClay-Franciscos-MacBook:School clayfrancisco$ g++ -o Rev3.cpp RevThree.cpp
]0;SchoolClay-Franciscos-MacBook:School clayfrancisco$ ./Rev3.cpp
Enter an integer: 90
Enter another integer: 10
Do it again!!! : 900
Forward: 9010900
Reverse: 9001090
Average: 333.333
Mix:     900
Min:     10
*************************************************************/
