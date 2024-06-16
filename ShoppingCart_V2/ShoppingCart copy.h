/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   ShoppingCart.h
 * Author: albertruiz
 *
 * Created on March 26, 2024, 5:23 PM
 */

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <vector>

class ShoppingCart {
public:
    ShoppingCart();
    void AddItem(const ItemToPurchase& item);
    void RemoveItem(const std::string& itemName);
    void ModifyItem(const ItemToPurchase& item);
    int GetNumItemsInCart() const;
    int GetCostOfCart() const;
    void PrintTotal() const;
    void PrintDescriptions() const;
private:
    std::vector<ItemToPurchase> cartItems;
};


#endif /* SHOPPINGCART_H */

