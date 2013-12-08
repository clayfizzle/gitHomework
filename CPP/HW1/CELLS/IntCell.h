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
        void    operator += ( IntCell x );
        IntCell operator +  ( IntCell x );
        IntCell operator -  ( IntCell x ); 

        IntCell add ( IntCell x );

        int  read( );
        void write( int x );
                            
    private:        
        int storedVal;

};
#endif
