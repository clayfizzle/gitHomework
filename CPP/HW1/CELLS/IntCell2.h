#ifndef "INTCELL2_H"
#define "INTCELL2_H"

class IntCell2{
    public:
        IntCell2( initVal = 0 );
        IntCell2( const ShallowCell &rhs );
//       ~IntCell2( );
        
        IntCell2 read( IntCell2 i );
        
        replace( IntCell2 i );
        
        add( IntCell2 i );

        subtract( IntCell2 i );

        bool operator < ( IntCell2 i );
        bool operator <= ( IntCell2 i );
        bool operator == ( IntCell2 i );
        bool operator != ( IntCell2 i );
        ostream operator << ( IntCell2 &i );
        ostream operator >> ( IntCell2 &i );
    
    private:
        const storedVal;
}

#endif
