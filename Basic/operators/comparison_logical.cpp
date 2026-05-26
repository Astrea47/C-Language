#include <iostream>
using namespace std;

int main(){
    int age;
    bool hasStudentCard;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a student card? (1 for Yes, 0 for No): ";
    cin >> hasStudentCard;

    cout << "===== Eligibility Check =====" << endl;
    if (age < 18 && hasStudentCard) {
        cout << "You are eligible for a student discount." << endl;
    } else if (age < 18 && !hasStudentCard) {
        cout << "You are not eligible for a student discount." << endl;
    } else if (age >= 18 && hasStudentCard) {
        cout << "You are eligible for a student discount." << endl;
    } else {
        cout << "You are not eligible for a student discount." << endl;
    }

    cout << "=============================" << endl;

return 0;

}