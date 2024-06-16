

/* 
 * File:   ItemToPurchase.h
 * Author: albertruiz
 *
 * Created on March 26, 2024, 2:20 PM
 */

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <string>

using namespace std;

class ItemToPurchase

{

private:

// Private data members itemName, itemPrice amd itemQuantity

string itemName;

int itemPrice;

int itemQuantity;

public:

ItemToPurchase();

ItemToPurchase(string itemName, int itemPrice, int itemQuantity);

void SetName(string itemName);

string GetName();

void SetPrice(int itemPrice);

int GetPrice();

void SetQuantity(int itemQuantity);

int GetQuantity();

};

#endif