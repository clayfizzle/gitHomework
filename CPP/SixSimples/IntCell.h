#ifndef INTCELL_H
#define INTCELL_H

class IntCell{
    public:
        
        //IntCell();
        //Default Constructor  " IntCell m;  //NOT IntCell m(); "
        explicit IntCell( int initVal = 0 );
        //Constructor w/initial value
        //IntCell( int initVal );
        
        //Non-destrcutive add
        //Destructive add
        //int  operator + ( IntCell &x );
        int add ( IntCell &x );
        // void operator += ( IntCell &x );

        int  read( );
        void write( int x );
                            
    private:        
        int storedVal;

};
#endif
