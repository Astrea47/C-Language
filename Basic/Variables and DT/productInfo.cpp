/* Make variables for a simple product:
productName
quantity
price
category
available  */

#include <iostream>
using namespace std;

int main() {
    string productName = "Clock";
    int quantity = 50;
    double price = 19.99;
    string category = "Home Decor";
    bool available = true;

    cout << "===== Product Information =====" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: $" << price << endl;
    cout << "Category: " << category << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
    cout << "===============================" << endl;

    return 0;
}
