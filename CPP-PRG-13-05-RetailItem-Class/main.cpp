//
//  main.cpp
//  CPP-PRG-13-05-RetailItem-Class
//
//  Created by Keith Smith on 11/16/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a class named RetailItem that holds data about an item in a retail store. The
//  class should have the following member variables:
//
//  * description - a string that holds a brief descirption of the item
//  * unitsOnHand - an int that holds the number of units currently in inventory
//  * price - a double that holds the item's retail price
//
//  Write a constructor that accepts arguments for each member variable, appropriate mutator
//  functions that store values in these member variables, and accessor functions that
//  return the values in these member variables. Once you have written the class, write a
//  separate program that creates three RetailItem objects and stores the following data in them:
//
//                          Description             Units On Hand               Price
//  ----------------------------------------------------------------------------------------
//  Item #1                 Jacket                  12                          59.95
//  Item #2                 Designer Jeans          40                          34.95
//  Item #3                 Shirt                   20                          24.95
//

#include <iostream>
#include "RetailItem.hpp"

RetailItem createItem1();
RetailItem createItem2();
RetailItem createItem3();
void displayItems(RetailItem, RetailItem, RetailItem);

int main()
{
    RetailItem riItem1;
    RetailItem riItem2;
    RetailItem riItem3;
    
    riItem1 = createItem1();
    riItem2 = createItem2();
    riItem3 = createItem3();
    
    displayItems(riItem1, riItem2, riItem3);
    
    return 0;
}

RetailItem createItem1()
{
    RetailItem item;
    
    item.setDescription("Jacket");
    item.setUnitsOnHand(12);
    item.setPrice(59.95);
    
    return item;
}
RetailItem createItem2()
{
    RetailItem item;
    
    item.setDescription("Designer Jeans");
    item.setUnitsOnHand(40);
    item.setPrice(34.95);
    
    return item;
}
RetailItem createItem3()
{
    RetailItem item;
    
    item.setDescription("Shirt");
    item.setUnitsOnHand(40);
    item.setPrice(24.95);
    
    return item;
}
void displayItems(RetailItem item1, RetailItem item2, RetailItem item3)
{
    std::cout << "Item #1:\n";
    std::cout << "Description: " << item1.getDescription() << std::endl;
    std::cout << "Units On Hand: " << item1.getUnitsOnHand() << std::endl;
    std::cout << "Price: $" << item1.getPrice() << std::endl;
    
    std::cout << "\nItem #1:\n";
    std::cout << "Description: " << item2.getDescription() << std::endl;
    std::cout << "Units On Hand: " << item2.getUnitsOnHand() << std::endl;
    std::cout << "Price: $" << item2.getPrice() << std::endl;
    
    std::cout << "\nItem #1:\n";
    std::cout << "Description: " << item3.getDescription() << std::endl;
    std::cout << "Units On Hand: " << item3.getUnitsOnHand() << std::endl;
    std::cout << "Price: $" << item3.getPrice() << std::endl;
}
