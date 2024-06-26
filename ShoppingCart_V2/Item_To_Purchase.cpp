#include <string>

#include "ItemToPurchase.h"

using namespace std;

// Default constructor

ItemToPurchase::ItemToPurchase()

{

itemName = "none";

itemPrice = 0;

itemQuantity = 0;

}

// Parameterized constructor with itemName, itemPrice and itemQuantity as arguments

ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity)

{

this->itemName = itemName;

this->itemPrice = itemPrice;

this->itemQuantity = itemQuantity;

}


void ItemToPurchase::SetName(string itemName)

{

this->itemName = itemName;

}


string ItemToPurchase::GetName()

{

return itemName;

}


void ItemToPurchase::SetPrice(int itemPrice)

{

this->itemPrice = itemPrice;

}


int ItemToPurchase::GetPrice()

{

return itemPrice;

}


void ItemToPurchase::SetQuantity(int itemQuantity)

{

this->itemQuantity = itemQuantity;

}


int ItemToPurchase::GetQuantity()

{

return itemQuantity;

}