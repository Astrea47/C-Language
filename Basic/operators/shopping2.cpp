// Another version of the shopping program - more advanced version.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string itemName;
    int quantity;
    double pricePerItem;
    double subtotal;
    
    double discountRate = 0.0;
    double discountAmount;
    double taxRate = 0.06;
    double taxAmount;
    double finalTotal;

    cout << "===== Advanced Shopping Receipt =====" << endl;

    cout << "Enter item name: ";
    getline(cin, itemName);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per item: RM ";
    cin >> pricePerItem;

    if (quantity <= 0 || pricePerItem <= 0) {
        cout << "Error: Quantity and price must be greater than 0." << endl;
        return 1;
    }

    subtotal = quantity * pricePerItem;

    if (subtotal >= 500) {
        discountRate = 0.15;
    } else if (subtotal >= 200) {
        discountRate = 0.10;
    } else if (subtotal >= 100) {
        discountRate = 0.05;
    } else {
        discountRate = 0.0;
    }

    discountAmount = subtotal * discountRate;
    taxAmount = (subtotal - discountAmount) * taxRate;
    finalTotal = subtotal - discountAmount + taxAmount;

    cout << fixed << setprecision(2);

    cout << "\n===== Receipt =====" << endl;
    cout << "Item Name: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price Per Item: RM " << pricePerItem << endl;
    cout << "Subtotal: RM " << subtotal << endl;
    cout << "Discount Rate: " << discountRate * 100 << "%" << endl;
    cout << "Discount Amount: RM " << discountAmount << endl;
    cout << "Tax 6%: RM " << taxAmount << endl;
    cout << "Final Total: RM " << finalTotal << endl;

    return 0;
}