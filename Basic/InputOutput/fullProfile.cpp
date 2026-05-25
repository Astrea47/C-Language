//Task 1: Full Profile Using getline()

#include <iostream>
using namespace std;

int main() { 
    string name;
    int age;
    string course;
    string university;
    int phoneNumber;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(); // To ignore the newline character left in the buffer after reading age
    /*cin.ignore(); = clears the leftover newline character
    This happen when C++ leaves an invisible Enter key/newline in memory (e.g., cin >> age;), and the next getline() reads that newline instead of waiting for user input.
    */

    cout << "Enter your course: ";
    getline(cin, course); 

    cout << "Enter your university: ";
    getline(cin, university);

    cout << "Enter your phone number: ";
    cin >> phoneNumber;

    cout << endl;
    cout << "===== Student Profile =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
    cout << "University: " << university << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "===========================" << endl;  

    return 0;

}