//
// Created by rreckerz on 12.06.2023.
//

#ifndef GILDEDROSE_ITEMCREATOR_H
#define GILDEDROSE_ITEMCREATOR_H

#include "Item.h"

class ItemCreator {

public:
    virtual Item* createItem(string name, int sellIn, int quality) const=0;

};


#endif //GILDEDROSE_ITEMCREATOR_H
