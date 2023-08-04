#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class GildedRose
{
public:
    vector<Item*> & items;
    GildedRose(vector<Item*> & items);
    Item* createItem(string,int,int) const;
    void updateQuality();
    virtual ~GildedRose();
};

