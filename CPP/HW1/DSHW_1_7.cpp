//Clay Francisco
//Data Structures
//10-17-13
//
//Homework assignment 1
//
//ARGH!!!
//I'm getting floating point errors in my equalities and I don't want to do this by hand!!!

#include <iostream>
#include <math.h>
using namespace std;

bool logX(double x);
bool logAtotheB(double a, double b);

//assumming base two

double inputA;
double inputB;

int  main( ){

    cout << "Gimme an \'A\' : ";
    cin  >> inputA;
    cout << "Gimme an \'B\' : ";
    cin >> inputB;
    if( logX(inputA) ){
        cout << "Yes, logX < X" << endl;
}
    else{
        cout << "Holy crap you broke the laws of mathematics!!!!" << endl;
    }
    if( logAtotheB(inputA, inputB) ){
        cout << "Yes, logA^B == BlogA" << endl;
}
    else{
        cout << "Holy crap you broke the laws of mathematics!!!!" << endl;

    }
    return 0;
}

bool logX(double x){
    if( x < 1 ){
        cout << "HEY!!!  you know the rules... ";
    }
    return ( (log(x)/log(2) < x) );
}

bool logAtotheB(double a, double b){
    int A = a;
    int B = b;
    
    return ( (log(A^B)/log(2) == B*( log(A)) / log(2) ) );
}

