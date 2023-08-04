//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#ifndef ITEM_H
#define ITEM_H




#include <string>
#include <utility>
#include <vector>
using namespace std;
//

//enum ItemType { LEGENDARY, CONJURED, MATURING, EXPIRING, NORMAL };

class Item {
protected:
  bool checkSellInExpired();
  bool checkQualityBetween0And50();
  void reduceQuality(int reduceBy);
  void reduceSellIn();

public:
  virtual void update() = 0;
  string name;
  int sellIn;
  int quality;
  Item(std::string name, int sellIn, int quality) : name(std::move(std::move(name))), sellIn(sellIn), quality(quality)
            {};

 // [[maybe_unused]] [[nodiscard]] ItemType typeOf() const;

};

#endif

