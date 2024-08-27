#include <iostream>
#include <limits>

using namespace std;

bool isValidNumber(double& num) {
    cin >> num;
    if (cin.fail()) {
        cin.clear();  // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        return false;
    }
    return true;
}

int main() {
    double distance;
    int choice;

    do {
        cout << "Enter the distance: ";
        while (!isValidNumber(distance)) {
            cout << "Invalid input. Please enter a valid number: ";
        }

        cout << "Choose the conversion:\n";
        cout << "1. Miles to Kilometers\n";
        cout << "2. Kilometers to Miles\n";
        cout << "3. Exit\n";
        cout << endl;  // Add an extra space after the list

        cout << "Enter your choice (1, 2, or 3): ";
        while (!(cin >> choice) || (choice < 1 || choice > 3)) {
            cout << "Invalid choice. Please enter 1, 2, or 3: ";
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        }

        if (choice == 1) {
            double kilometers = distance * 1.60934;
            cout << distance << " miles is equal to " << kilometers << " kilometers." << endl;
        } else if (choice == 2) {
            double miles = distance / 1.60934;
            cout << distance << " kilometers is equal to " << miles << " miles." << endl;
        } else if (choice == 3) {
            break;
        }
        cout << endl;
    } while (choice != 3);

    cout << "Thank you for using the Distance Converter!" << endl;

    return 0;
}
