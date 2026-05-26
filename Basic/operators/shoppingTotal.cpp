#include <iostream>
using namespace std;

int main() {
    string itemName;
    int quantity;
    double pricePerItem;
    double totalCost;

    cout << "Enter the item name: ";
    getline(cin, itemName);

    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << "Enter the price per item: ";
    cin >> pricePerItem;

    totalCost = quantity * pricePerItem;

    cout << "Total cost for " << itemName << ": $" << totalCost << endl;

    return 0;
}