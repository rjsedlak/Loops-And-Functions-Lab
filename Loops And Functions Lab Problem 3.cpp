// Number 3 


#include <iostream>
#include <iomanip> 
using namespace std; 

// This function will calculate the average speed 
double calculateAverageSpeed(double miles, double hours){
    if (hours == 0) return 0; 
    return miles / hours;
}

int main(){
    double miles, hours; 

    // This will be a loop for miles and hours 
    while(true){
        cout << "Enter miles traveled: ";
        cin >> miles;
        cout << "Enter hours traveled: "; 
        cin >> hours; 

        if (miles == 0 && hours == 0){
            break; 
        }

        if (miles < 0 || hours < 0){
            cout << "Please enter only positive values.\n";
            continue; 
        }

        double speed = calculateAverageSpeed(miles, hours);
        cout << "Your speed was " << fixed  << setprecision(2) << speed << " mph\n";
    } 

    cout << "Program ended.\n";
    return 0; 
}