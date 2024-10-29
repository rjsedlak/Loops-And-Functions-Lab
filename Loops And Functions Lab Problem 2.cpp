// Number 2:

#include <iostream>
#include <iomanip>
using namespace std;

// Function to print to the menu
void printMenu(){
    cout << "Please select an item to purchase:\n";
    cout << "1 - Soda: $1.00\n";
    cout << "2 - Bagel: $1.48\n"; 
    cout << "3 - Coffee: $2.15\n";
    cout << "4 - Scone: $1.89\n";
    cout << "5 - Orange Juice: $1.75\n";
    cout << "6 - Muffin: 0.75\n";
    cout << "7 - Quit\n"; 
}

int main() {
    int choice; 
    double totalCost = 0.0; 

    
    do {
        // Show the menu 
        printMenu();

        // Please pick an item 
        cout << "Enter your choice (1-7): ";
        cin >> choice; 

        // Check for valid choice 
        if (choice == 1){
            totalCost += 1.00;
        } else if (choice == 2){
            totalCost += 1.48;
        } else if (choice == 3){
            totalCost == 2.15; 
        } else if (choice == 4){
            totalCost += 1.89; 
        } else if (choice == 5){
            totalCost += 1.75;
        } else if (choice == 6){
            totalCost += 0.75; 
        } else if (choice == 7){
        } else {
            cout << "Invalid choice, please try again.\n";
        }

    } while (choice != 7); 
    cout << "Total cost of all items: $" << fixed << setprecision(2) << totalCost << endl; 

    return 0; 
} 
