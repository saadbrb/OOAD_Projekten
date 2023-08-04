//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#include "Item.h"
#include "ItemTypes.h"


ItemType Item::typeOf() const {
  if (name == "Backstage passes to a TAFKAL80ETC concert") {
    return EXPIRING;
  }
  if (name == "Sulfuras, Hand of Ragnaros") {
    return LEGENDARY;
  }
  if (name == "Aged Brie") {
    return MATURING;
  }
  if (name == "Conjured Mana Cake") {
    return CONJURED;
  }
  return NORMAL;
}