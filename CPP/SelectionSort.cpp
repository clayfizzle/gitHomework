#include <iostream>
using namespace std;

//Declaration of swap function
void swap(int &m, int &n);

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int N = 10;
    int a[10] = {52, 1, 12, 16, 99, 1002, 2001, 0, 79, 99};

    //Start sort remembering 0-9 = 10 elements
    for (int i = 0; i < (N - 1); i++){
        int minIndex = i;

        // Find the index of the minimum element
        for (int j = i + 1; j < N; j++){
            if (a[j] < a[minIndex]){
                minIndex = j;
            }
        }

        // Swap if i-th element not already smallest --just double checking the work
        if (minIndex > i){
            swap(a[i], a[minIndex]);
        }   
    }


// Print sorted results
    for (int i = 0; i < N; i++){
        cout << i << " " << a[i] << endl;
    }

    return 0;
}

