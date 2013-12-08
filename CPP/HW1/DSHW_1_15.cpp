#include <iostream>
#include <functional>
#include <vector>
#include <string>
using namespace std;

template <typename Object, typename Comparator>
const Object & findMax( const vector<Object> &arr, Comparator isLessThan ){
    int maxIndex = 0;

    for( int i = 1; i < arr.size(); i++ ){
        if( isLessthan(arr[ maxIndex ], arr[i]) ){
            maxIndex = i;
        }
    }
    return arr[maxIndex];
}

template <typename Object>
const Object & findMax( const vector<Object> & arr ){
    return findMax( arr, less<Object>( ) );
}

class CaseInsensitiveCompare{
    public:
        bool operator( )(const string & lhs, const string & rhs ) const
            { return strcmp( lhs.c_str(), rhs.c_str() ) < 0; }

};

int main(){
    vector<string> arr(3);
    arr[0] = "Zebra"; 
    arr[1] = "aligator"; 
    arr[2] = "toolbox";

    cout << findMax(arr, CaseInsensitiveCompare( ) ) << endl;
    cout << findMax( arr ) << endl;
    return 0;

}

