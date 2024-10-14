//Assignment14 

#include <iostream>

//Performing while loop
using namespace std; 

int main() {
    int secretNumber = 5; 
    int guessNumber; 

    cout <<"Enter guess number: "<< endl; 

    while(guessNumber != secretNumber)
    cin >> guessNumber; 
    cout << "True." << endl; 

    return 0; 

}
