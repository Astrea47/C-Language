// Task 2: Simple Order Form

#include <iostream>
using namespace std;

int main() {
    string customerName;
    string productName;
    int quantity;
    double price;
    string address;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter quantity: ";
    cin >> quantity;

    cin.ignore(); // To ignore the newline character left in the buffer after reading quantity

    cout << "Enter price per item: ";
    cin >> price;

    cin.ignore(); // To ignore the newline character left in the buffer after reading price

    cout << "Enter delivery address: ";
    getline(cin, address);

    cout << endl;

    cout << "===== Order Summary =====" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price (per item): $" << price << endl;
    cout << "Total: $" << quantity * price << endl;
    cout << "Delivery Address: " << address << endl;
    cout << "=========================" << endl;

    return 0;
    
}