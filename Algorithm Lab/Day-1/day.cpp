#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear, age;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter the current year: ";
    cin >> currentYear;

    age = currentYear - birthYear;

    cout << "Your age is: " << age << " years old." << endl;

    return 0;
}