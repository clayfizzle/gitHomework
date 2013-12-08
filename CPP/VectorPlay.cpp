#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

const string & findMax( const vector<string> & arr );


int main(){
    
    vector<string> v;

    v.push_back("hello ");

    cout << "Vector says \"" << v[0] << "\"" << endl;
    
    for( unsigned int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
        cout << v.at(i) << endl;
    }
    


    return 0;
}


const string & findMax( const vector<string> & arr ){

    int currentMax = 0;

    for ( int i = 0; i < arr.size(); i++ ){
        if( arr[currentMax] < arr[i]){ 
            currentMax = i; 
        }
    }
    return arr[currentMax];
}


