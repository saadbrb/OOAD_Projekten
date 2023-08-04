#include "Item.h"
#include <string>
#include <vector>

#include "ItemCreator.h"
#include "ConcreteItemCreator.h"
#include "Item.h"
using namespace std;

class GildedRose {
public:
  vector<Item *> &items;
  GildedRose(vector<Item *> &items);
  Item *createItem(string, int, int);


  void updateAllItems();
  virtual ~GildedRose();
private:
    ItemCreator* myCreator;
};

