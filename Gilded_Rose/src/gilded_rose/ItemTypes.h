
// Created by Ralf on 06.10.2022.



#ifndef GILDEDROSE_ITEMTYPES_H
#define GILDEDROSE_ITEMTYPES_H

#include <string>
#include <vector>
using namespace std;

#include "Item.h"
class LegendaryItem : public Item {
public:
  void update();

  LegendaryItem(string name, int sellIn, int quality) : Item(name, sellIn, quality){;
  };
};

class ConjuredItem : public Item {
public:
  void update();
  ConjuredItem(string name, int sellIn, int quality) : Item(name, sellIn, quality){};
};

class MaturingItem : public Item {
public:
  void update();
  MaturingItem(string name, int sellIn, int quality): Item(name, sellIn, quality){};
};

class ExpiringItem : public Item {
public:
  void update();
  ExpiringItem(string name, int sellIn, int quality) : Item(name, sellIn, quality){};
};

class NormalItem : public Item {
public:
void update();
NormalItem(string name, int sellIn, int quality) : Item(name, sellIn, quality){};
};


#endif GILDEDROSE_ITEMTYPES_H
