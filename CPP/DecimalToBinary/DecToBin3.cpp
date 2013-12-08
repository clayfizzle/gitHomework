//This doesn't work like I want it to!!!

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

//int decToBin(int x);

int main(){

    int printBit, input, wordLength, placeHolder;
    int num1s = 0;
    cout << "please enter a non negative (base 10) number : ";
    cin >> input;
    
    cout << "Binary representation : ";
    for(wordLength = 32; wordLength > 0; wordLength--){
        //bit shove the placeholder 
        placeHolder = input >> wordLength;
        
        if(placeHolder & 1){
            cout << "1";
            num1s++;
        }
        else
            cout << "0";
    }
    cout << endl;

    cout << "number of 1s : " << num1s << endl;
    
 //   printBit = decToBin( input );

    cout << "printBit : " << printBit << endl; 

    return 0;
}
/*
int decToBin( input ){
    int intBit, input, placeHolder;
    int num1s = 0;
    int wordLength = 32;

    if(wordLength == 0){
        return;
    }
    else {    //bit shove the placeholder 
        placeHolder = input >> wordLength;
        
        if(placeHolder & 1){
            intBit = intBit*placeHolder;
            num1s++;
            wordLength--;
        }
        else
            cout << "0";
            wordLength--;
    }
}
*/
