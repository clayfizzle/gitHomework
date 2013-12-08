#include <iostream>
#include "IntCell.h"
using namespace std;

int main( )
{
    //Calls default constructor // Or, IntCell m( 0 ); but not IntCell m( );
    IntCell m; 
    m.write( 5 );
    cout << "Cell contents: " << m.read( ) << endl;

    return 0;
}
