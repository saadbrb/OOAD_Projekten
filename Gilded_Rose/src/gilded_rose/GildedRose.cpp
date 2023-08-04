#include "GildedRose.h"

#include <utility>
//#include "ItemCreator.h"
#include "ConcreteItemCreator.h"
#include "Item.h"
GildedRose::GildedRose(vector<Item *> &items): items(items) {
   myCreator= new  ConcreteItemCreator(4);
}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}

void GildedRose::updateAllItems() {
  for (Item *myItem : items) {
    myItem->update();
  }
}

Item *GildedRose::createItem(string name, int sellIn, int quality) {

   return myCreator->createItem(name, sellIn,quality);

}


