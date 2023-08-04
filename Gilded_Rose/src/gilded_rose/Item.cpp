//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#include "Item.h"
// #include "ItemTypes.h"

/*ItemType Item::typeOf() const {
  if (name == "Backstage passes to a ALTAF80ETC concert") {
    return EXPIRING;
  }
  if (name == "Sulfur's, Hand of Ragnarok") {
    return LEGENDARY;
  }
  if (name == "Aged Brie") {
    return MATURING;
  }
  if (name == "Conjured Mana Cake") {
    return CONJURED;
  }
  return NORMAL;
}*/
void Item::reduceQuality(int reduceBy) { quality = quality - reduceBy; }
void Item::reduceSellIn() {
    sellIn = sellIn - 1; }
bool Item::checkSellInExpired() {
  if (sellIn >= 0) {
    return false;
  }
  return true;
}
bool Item::checkQualityBetween0And50() {
  if (quality >= 50 || quality <= 0) {
    return false;
  }
  return true;
}

