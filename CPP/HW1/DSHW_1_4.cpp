//Clay Francisco
//Data Structures
//10-17-13
//Homework 1
//
//

#include "ifHeader.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct ProveIt p;

void print_P( struct ProveIt x );

int main(){
    p.f = 7.0;
    p.c = "holy cow";
    p.i = 16;
  //no strings // p.s = "Super star!!!"
    
    cout << "cout << " << p.c << endl;
    printf("p.f : %f\n", p.f);
    print_P(p);   
}

void print_P( struct ProveIt x ){
//    printf(p.f, "\n");

    printf("p.i : %d\n", p.i);

    printf("p.s : %s\n", p.c);

}
