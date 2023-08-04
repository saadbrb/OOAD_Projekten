//
// Created by rreckerz on 13.06.2023.
//


#include "ConcreteItemCreator.h"
#include "ItemCreator.h"
#include "Item.h"
#include "ItemTypes.h"
ConcreteItemCreator::ConcreteItemCreator(int test):ItemCreator(){
    this->test=test;
}
Item* ConcreteItemCreator::createItem(string name, int sellIn, int quality) const{
    if (name == "Sulfur's, Hand of Ragnarok") {
        return new LegendaryItem(name, sellIn, quality);
    }
    if (name == "Conjured Mana Cake") {
        return new ConjuredItem(name, sellIn, quality);
    }
    if (name == "Aged Brie") {
        return new MaturingItem(name, sellIn, quality);
    }
    if (name == "Backstage passes to a ALTAF80ETC concert") {
        return new ExpiringItem(name, sellIn, quality);
    }
    return new NormalItem(name, sellIn, quality);
}

