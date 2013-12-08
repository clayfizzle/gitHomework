#include <iostream>
#include "IntCell.h"

using namespace std;

int main(){
    IntCell i1(15);
    IntCell i2;
    IntCell i3;

    IntCell  cellArray[10];


    for(int i = 0; i < 10; i++){
        cellArray[i].write(i + 10);
        cout << "cellArray[" << i << "] : " << cellArray[i].read() << endl;
    }

    for(int i = 0; i < 10; i++){
        cout << "pArray[" << i << "] : " << pArray[i] << endl;
    }

//Looks like I need a copy constructor
//
// CellMain.cpp:25: error: no match for ‘operator=’ in ‘* pArray = 
// (IntCell*)rArray’ 
// IntCell.h:4: note: candidates are: 
// IntCell& IntCell::operator=(const IntCell&)

    IntCell& rArray = &cellArray;
    IntCell* pArray;
    *pArray = &rArray;
    
    i2.write(92);

    cout << "i1 : " << i1.read() << endl;
    cout << "i2 : " << i2.read() << endl;
   
    i3 = i1 + i2;
     
    i1 += i2;
   
    i2 = i1 - i3;

    cout << "i1 : " << i1.read() << endl;
    cout << "i2 : " << i2.read() << endl;
    cout << "i3 : " << i3.read() << endl;
    
    cin.get();
    return 1;
}
