#include <iostream>

#include "ItemToPurchase.h"

using namespace std;

// Driver code

int main()

{

string itemName;

int itemPrice;

int itemQuantity;

// Fetching details of item 1 from user

cout << "Item 1\n";

cout << "Enter the item name:\n";

getline(cin, itemName);

cout << "Enter the item price:\n";

cin >> itemPrice;

cout << "Enter the item quantity:\n";

cin >> itemQuantity;

ItemToPurchase item1 = ItemToPurchase(itemName, itemPrice, itemQuantity);

// Fetching details of item 2 from user

cout << "\nItem 2\n";

cout << "Enter the item name:\n";

cin.ignore();

getline(cin, itemName);

cout << "Enter the item price:\n";

cin >> itemPrice;

cout << "Enter the item quantity:\n";

cin >> itemQuantity;

ItemToPurchase item2 = ItemToPurchase(itemName, itemPrice, itemQuantity);

cout << "\nTOTAL COST\n";

// Computing cost of item 1

int item1Cost = item1.GetQuantity() * item1.GetPrice();

cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = " << item1Cost << "\n";

// Computing cost of item 2

int item2Cost = item2.GetQuantity() * item2.GetPrice();

cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = " << item2Cost << "\n";

// Computing total cost

int totalCost = item1Cost + item2Cost;

cout << "\nTotal: $" << totalCost;

return 0;

}