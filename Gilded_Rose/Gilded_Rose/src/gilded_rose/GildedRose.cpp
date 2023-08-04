#include "GildedRose.h"

GildedRose::GildedRose(vector<Item*> & items) : items(items)
{}

GildedRose::~GildedRose() {
  for (auto & item : items) {
    delete item;
  }
}
    
void GildedRose::updateQuality()
{
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i]->name != "Aged Brie" && items[i]->name != "Backstage passes to a TAFKAL80ETC concert")
        {
            if (items[i]->quality > 0)
            {
                if (items[i]->name != "Sulfuras, Hand of Ragnaros")
                {
                    items[i]->quality = items[i]->quality - 1;
                }
            }
        }
        else
        {
            if (items[i]->quality < 50)
            {
                items[i]->quality = items[i]->quality + 1;

                if (items[i]->name == "Backstage passes to a TAFKAL80ETC concert")
                {
                    if (items[i]->sellIn < 11)
                    {
                        if (items[i]->quality < 50)
                        {
                            items[i]->quality = items[i]->quality + 1;
                        }
                    }

                    if (items[i]->sellIn < 6)
                    {
                        if (items[i]->quality < 50)
                        {
                            items[i]->quality = items[i]->quality + 1;
                        }
                    }
                }
            }
        }

        if (items[i]->name != "Sulfuras, Hand of Ragnaros")
        {
            items[i]->sellIn = items[i]->sellIn - 1;
        }

        if (items[i]->sellIn < 0)
        {
            if (items[i]->name != "Aged Brie")
            {
                if (items[i]->name != "Backstage passes to a TAFKAL80ETC concert")
                {
                    if (items[i]->quality > 0)
                    {
                        if (items[i]->name != "Sulfuras, Hand of Ragnaros")
                        {
                            items[i]->quality = items[i]->quality - 1;
                        }
                    }
                }
                else
                {
                    items[i]->quality = items[i]->quality - items[i]->quality;
                }
            }
            else
            {
                if (items[i]->quality < 50)
                {
                    items[i]->quality = items[i]->quality + 1;
                }
            }
        }
    }
}

Item* GildedRose::createItem(string name, int sellIn, int quality) const {
  return new Item(name, sellIn, quality);
}
