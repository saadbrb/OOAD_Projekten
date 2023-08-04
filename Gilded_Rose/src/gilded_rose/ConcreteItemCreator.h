//
// Created by rreckerz on 13.06.2023.
//

#ifndef GILDEDROSE_CONCRETEITEMCREATOR_H
#define GILDEDROSE_CONCRETEITEMCREATOR_H

#include "Item.h"
#include "ItemCreator.h"
#include <string>
#include <iostream>

class [[maybe_unused]] ConcreteItemCreator: public ItemCreator{

public:

    ConcreteItemCreator(int test);
     Item* createItem(string name, int sellIn, int quality) const;
private:
    int test;

};



#endif //GILDEDROSE_CONCRETEITEMCREATOR_H
