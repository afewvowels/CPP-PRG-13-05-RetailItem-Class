//
//  RetailItem.cpp
//  CPP-PRG-13-05-RetailItem-Class
//
//  Created by Keith Smith on 11/16/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "RetailItem.hpp"

RetailItem::RetailItem(std::string descrip, int units, double cost)
{
    description = descrip;
    unitsOnHand = units;
    price = cost;
}

RetailItem::RetailItem()
{
    description = "";
    unitsOnHand = -1;
    price = -1.0;
}

void RetailItem::setDescription(std::string descrip)
{
    description = descrip;
}

void RetailItem::setUnitsOnHand(int units)
{
    unitsOnHand = units;
}

void RetailItem::setPrice(double cost)
{
    price = cost;
}

std::string RetailItem::getDescription()
{
    return description;
}

int RetailItem::getUnitsOnHand()
{
    return unitsOnHand;
}

double RetailItem::getPrice()
{
    return price;
}
