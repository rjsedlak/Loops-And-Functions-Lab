// Number 4 
#include <iostream> 
#include <string>
#include <iomanip>
using namespace std; 

void getLarger(int a, int b){
    if (a > b){
        cout << a << " is the largest\n";
    } else if (b > a){
        cout << b << " is the largest\n"; 
    } else {
        cout << "Your numbers are the same\n"; 
    }
}

void getLarger(double a, double b){
    if (a > b){
        cout << fixed << setprecision(4) << a << " is the largest\n";
    } else if (b > a){
        cout << fixed << setprecision(4) << b << " is the largest\n"; 
    } else {
        cout << "Your numbers are the same\n";
    }
}

void getLarger(char a, char b){
    if (a > b){
        cout << a << " is the largest\n";
    } else if (b > a){
        cout << b << " is the largest\n"; 
    } else {
        cout << "Your characters are the same\n";
    }
}

void getLarger(string a, string b){
    if (a > b){
        cout << a << " is the largest\n"; 
    } else if (b > a){
        cout << b << " it the largest\n"; 
    } else {
        cout << "Your strings are the same\n"; 
    }
}

int main(){
    int choice;

    while (true){
        cout << "Select a data type to compare:\n"; 
        cout << "1: Integer\n";
        cout << "2: Double\n";
        cout << "3: Character\n";
        cout << "4: String\n";
        cout << "5: Quit\n";
        cout << "Enter your choice: "; 
        cin >> choice; 

        if (choice == 5){
            break; 
        }

        int int1, int2;
        double double1, double2; 
        char char1, char2;
        string str1, str2;

        switch(choice){
            case 1:
                cout << "Enter 2 Integers: ";
                cin >> int1 >> int2;
                getLarger(int1, int2); 
                break; 
            case 2:
                cout << "Enter 2 Doubles: "; 
                cin >> double1 >> double2;
                getLarger(double1, double2);
                break; 
            case 3:
                cout << "Enter 2 Characters: ";
                cin >> char1 >> char2;
                getLarger(char1, char2);
                break; 
            case 4:
                cout << "Enter 2 Strings: ";
                cin >> str1, str2;
                getLarger(str1, str2);
                break; 
            default:
                cout << "Invalid selection. Pick number between 1 and 5.\n"; 
        }
    }

    cout << "Program ended.\n"; 
    return 0; 
}