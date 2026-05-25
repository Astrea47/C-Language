#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    string course;

    cout << "Enter your name: ";
   // cin >> name;
   getline(cin, name);

    /* Note: 
    cin >> name; will only read one word.
    if we type "Alia Amira" - it will only read "Alia" and ignore "Amira".

    getline(cin, name); will read the entire line, including spaces. 
    So if we type "Alia Amira", it will read "Alia Amira" as the name.
    */

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your course: ";
    cin >> course;

    cout << endl;
    cout << "===== Student Information =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
    cout << "===============================" << endl;

    return 0;
}
