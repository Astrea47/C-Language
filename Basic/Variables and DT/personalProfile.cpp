/*Write a program with these variables:
name
age
course
university
height
initial
isLearningCpp */

#include <iostream> 
using namespace std;

int main() {
    string name = "Ian";
    int age = 21;
    string course = "Architecture";
    string university = "Harvard University";
    double height = 1.75;
    char initial = 'I';
    bool isLearningCpp = true;

    cout << "===== Personal Profile =====" << endl;
    cout << "Name: " << name << endl;   
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
    cout << "University: " << university << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Initial: " << initial << endl;
    cout << "Is Learning C++: " << (isLearningCpp ? "Yes" : "No") << endl;
    cout << "============================" << endl;

    return 0;
}