//
//  RetailItem.hpp
//  CPP-PRG-13-05-RetailItem-Class
//
//  Created by Keith Smith on 11/16/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef RetailItem_hpp
#define RetailItem_hpp

#include <stdio.h>
#include <string>

class RetailItem
{
private:
    std::string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(std::string, int, double);
    RetailItem();
    
    void setDescription(std::string);
    void setUnitsOnHand(int);
    void setPrice(double);
    
    std::string getDescription();
    int getUnitsOnHand();
    double getPrice();
};

#endif /* RetailItem_hpp */
