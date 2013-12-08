//Clay Francisco
//Data Structures 
//10-17-13
//
//Homework 1
//

#include <iostream>
using namespace std;

void toBinary(int x);

//I know this line is bad but I couldn't figure out how to do it clean
int num1s = 0;

int main() {
    int input;
    
    cout << "I need a positive integer : ";
    cin >> input;
    
    //checking for negative input
    if( input < 0 ){ 
        cout << "That was not a positive integer...\n";
    }
    else{
        cout << "          " << input << " in binary is : ";
        //returns void so no 'cout <<'
        toBinary(input);
        cout << endl;
        cout << "    This bitword contains : " << num1s << " \'one(s)\' " << endl;
    }
    return 0;
}
void toBinary( int decimal ){
    int remainder;
    
    //works as the terminating condition 
    //AND is the last digit to be pushed to the new binary decimal
    if( decimal <= 1 ){
        num1s++;
        cout << decimal;
        return;
    }
    //  stack up the answer of the recursive function 'decimal % 2 until decimal = 1' 
    //  to produce that decimal converted to binary 

    remainder = decimal%2;
    
    if( remainder == 1 ){
        toBinary( decimal >> 1 );    
        cout << remainder;
        num1s++;
    }
    else{
        toBinary( decimal >> 1 );    
        cout << remainder;
   
    }
}


