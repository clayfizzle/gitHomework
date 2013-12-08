#include <iostream>

using namespace std;

int main(){

    //LOOKING FOR DIFFERENT WAY TO GET COMMAND LINE ARGS
    //
    //argc = number of args passed in from command line LESS the actual function 
    ////Therfore: 'myFunc 3 5 99'
    ////argc = 3   
    ////
    ////argv = array of the ACTUAL args
    ////Therfore: 'myFunc 3 5 99'
    //argv[0] = 3, argv[1] = 2, argv[2] = 99      
    //This seems really unsafe to not check for input validation
    
    int a, b, c;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    cout << "Do it again!!! : ";
    cin >> c;
        
    string printMe = a, ' ', b, ' ', c;
        
    //cout << a << b << c << endl;
    //cout << c << b << a << endl;
    printf(printMe);  
    

}
