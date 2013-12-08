// Clay Francisco
// 10-29-13
// Homework 2
//

#include <iostream>
#include <string>
#include <ctime>
#include <sys/time.h>

using namespace std;

unsigned long GetTickCount();

//they return their runtime in a unsigned long
unsigned long sum1( int n );
unsigned long sum2( int n );
unsigned long sum3( int n );
unsigned long sum4( int n );
unsigned long sum5( int n );
unsigned long sum6( int n );

int main(){
    int x = 100;
    unsigned long diffTime;

    diffTime = sum1(x);
    cout << "LOOP 1: " << diffTime << endl;
    diffTime = sum2(x);
    cout << "LOOP 2: " << diffTime << endl;
    diffTime = sum3(x);
    cout << "LOOP 3: " << diffTime << endl;
    diffTime = sum4(x);
    cout << "LOOP 4: " << diffTime << endl;
    diffTime = sum5(x);
    cout << "LOOP 5: " << diffTime << endl;
    diffTime = sum6(x);
    cout << "LOOP 6: " << diffTime << endl;
    
    

//    cout << "Time to complete : " << diffTime << " !!! " << endl;
    cin.get();
    return 1;
}

unsigned long GetTickCount(){
    struct timeval tv;
    if( gettimeofday(&tv, NULL) != 0 ){
        return 0;
    }
    return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}

unsigned long sum1( int n){
    int sum = 0;
    int N = n;
    unsigned long t1 = GetTickCount();
    for( int i = 0; i < N; i++){
        sum++;
    }

    unsigned long t2 = GetTickCount();
    return t1 - t2;
}
    
unsigned long sum2( int n ){
    int sum = 0;
    int N = n;

    unsigned long t1 = GetTickCount();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            sum++;
        }
    
    unsigned long t2 = GetTickCount();
    return t1 - t2;
    }
}

unsigned long sum3( int n ){
    int sum = 0;
    int N = n;

    unsigned long t1 = GetTickCount();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N * N; j++){
            sum++;
        }
    }
unsigned long t2 = GetTickCount();

    return t1 - t2;
}
unsigned long sum4( int n ){
    int sum = 0;
    int N = n;

    unsigned long t1 = GetTickCount();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            sum++;
        }
    }
unsigned long t2 = GetTickCount();

    return t1 - t2;
}

unsigned long sum5( int n ){
    int sum = 0;
    int N = n;

    unsigned long t1 = GetTickCount();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i * i; j++){
            for(int k = 0; k < j; k++){
                sum++;
            }
        }
    }
unsigned long t2 = GetTickCount();

    return t1 - t2;
}
unsigned long sum6( int n ){
    int sum = 0;
    int N = n;

    unsigned long t1 = GetTickCount();
    for(int i = 1; i < N; i++){
        for(int j = 1; j < i; j++){
            if(j % i == 0){
                for(int k = 0; k < j; k++){
                    sum++;
                }
            }
        }
    }
    unsigned long t2 = GetTickCount();
    return t1 - t2;
}

