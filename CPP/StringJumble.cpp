#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char* argv[]){
 
    string noDupes;
    string argStr;
    const char* argString[argc];
    const char* uniqChar[26];
    const char* e     = &empty; 
    const char  empty = ' ';
    int   numLetters  = 0;
    int   stringSize  = 0;
    //clean input
    for( int i = 0; i < argc; i++ ){
        if( argv[i] != e ){ 
            argString[i] = argv[i]; 
            stringSize++;
        }
    }
    //set initial condition and run pruner to eleminate multiples
    uniqChar[0] = argString[0];

    for(int i = 1; i < argc; i++ ){
        for(int k = 0; k < stringSize; k++){
            if(uniqChar[k] != argString[i]){
                uniqChar[i] = argString[i];
                numLetters++;        
            }  
        }
    }
    //assign char[] to a string
    for( int i = 0; i < argc; i++ ){
        argStr = argString[i] + argStr;
    } 
    for( int i = 0; i < numLetters; i++ ){
        if( uniqChar[i] != e ){
            noDupes = uniqChar[i] + noDupes;
        }
    } 
    
    for( int i = 0; i < numLetters^argc; i++ ){
        
    }

    cout << "Permutated Command line : " << argStr << "\nNumber of args :  " << argc <<  endl;
    
    return 0;
}

