#include <iostream>
using namespace std;

void calculateRemainingCalories() {
    double dailyGoal, caloriesConsumed, remainingCalories;

    // Taking user inputs
    cout << "Enter your daily calorie goal: ";
    cin >> dailyGoal;

    cout << "Enter the calories you have consumed today so far: ";
    cin >> caloriesConsumed;

    // Calculate remaining calories
    remainingCalories = dailyGoal - caloriesConsumed;

    // Display the result
    if (remainingCalories >= 0) {
        cout << "You have " << remainingCalories << " calories remaining for today." << endl;
    } else {
        cout << "You have exceeded your daily calorie goal by " << -remainingCalories << " calories." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        // Display menu
        cout << "\n--- Daily Calories Calculator ---" << endl;
        cout << "1. Calculate Remaining Calories" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice (1/2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateRemainingCalories();
                break;
            case 2:
                cout << "Exiting the program. Have a healthy day!" << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice! Please enter 1 or 2." << endl;
        }
    }

    return 0;
}
