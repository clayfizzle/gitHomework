#include <iostream>
#include "ShallowCell.h"

using namespace std;

int main(){
    ShallowCell i1(15);
    ShallowCell i2;
    ShallowCell i3;

    ShallowCell  cellArray[10];
    ShallowCell& rArray = &cellArray;
    ShallowCell& pArray;
    &pArray = &rArray;

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
// (ShallowCell*)rArray’ 
// ShallowCell.h:4: note: candidates are: 
// ShallowCell& IntCell::operator=(const IntCell&)

    
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
