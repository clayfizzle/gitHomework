#ifndef SHALLOWCELL_H
#define SHALLOWCELL_H

class ShallowCell{

    public:
        
        ShallowCell( int initVal = 0 );
        // ShallowCell( int initVal );
        ShallowCell( const ShallowCell &rhs );
       ~ShallowCell( );
        
        
        /* -- Methods -- */
        
        ShallowCell operator + ( ShallowCell &refX );
        
        ShallowCell operator - ( ShallowCell &refX );
        
        void operator += ( ShallowCell &refX ); 

        void &ShallowCell operator = ( const ShallowCell &refX );
        
        int  read( );
        void write( int x );

        
    private:
        int storedVal;
};
#endif
