#ifndef "BOOKCELL_H"
#define "BOOKCELL_H"

class BookCell
{
  public:
    explicit BookCell( int initialValue = 0 );

    BookCell( const BookCell & rhs );
    ~BookCell( );
    const BookCell & operator=( const BookCell & rhs );

    int read( ) const;
    void write( int x );
  private:
    int *storedValue;
};

#endif
