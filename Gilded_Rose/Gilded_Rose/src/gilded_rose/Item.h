//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
using namespace std;

enum ItemType { LEGENDARY, CONJURED, MATURING, EXPIRING, NORMAL };

class Item {
public:
  string name;
  int sellIn;
  int quality;
  Item(std::string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
  {};
  ItemType typeOf() const;
};

#endif // ITEM_H
