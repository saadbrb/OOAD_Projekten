#include "GildedRose.h"

#include <iostream>

using namespace std;

ostream &operator<<(ostream &s, Item &item) {
  s << item.name << ", " << item.sellIn << ", " << item.quality;
  return s;
}

int main() {
  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfur's, Hand of Ragnar's", 0, 80));
  items.push_back(G.createItem("Sulfur's, Hand of Ragnar's", -1, 80));
  items.push_back(G.createItem("Backstage passes to a ALTAF80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a ALTAF80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a ALTAF80ETC concert", 5, 49));
  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  cout << "SONGHAI!" << endl;

  for (int day = 0; day <= 30; day++) {
    cout << "-------- day " << day << " --------" << endl;
    cout << "name, sellInDays, quality" << endl;
    for (const auto &item : items) {
      cout << *item << endl;
    }

    cout << endl;

    G.updateAllItems();
  }
}
