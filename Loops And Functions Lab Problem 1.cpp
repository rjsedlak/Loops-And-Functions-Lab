#include <iostream>
using namespace std;

//Number 1 

// This function will be used to calculate the sum of all even numbers between 0 and the given value
int calculateSumOfEvents(int num){
    int sum = 0;
    for (int i = 2; i <= num; i += 2){ // This is where 2 will be incremented 
        sum += i; 
    }
    return sum; 
}

int main(){
    int userInput; 

    // Enter in a positive number 
    cout << "Enter a positive integer: ";
    cin >> userInput;

    // The input will be checked to see if this is valid to enter 
    if (userInput < 0){
        cout << "Not a valid entry." << endl; 
    } else {
        // The function now has to calculate the sum of all even numnbers
        int sum = calculateSumOfEvents(userInput);

        // The result should now be outputted 
        cout << "The sum of all even numbers between 0 and " << userInput << " is: " << sum << endl; 
    }

    return 0; 
}