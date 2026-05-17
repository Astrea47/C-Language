#include <iostream>
using namespace std;

int main() {
    string name = "Alya";
    int age = 20;
    double cgpa = 3.8;
    char grade = 'A';
    bool isStudent = true;

    cout << "===== Student Profile =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student Status: " << (isStudent ? "Yes" : "No") << endl;
    

    return 0;
}