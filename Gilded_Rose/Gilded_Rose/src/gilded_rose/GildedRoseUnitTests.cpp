#include <gtest/gtest.h>

#include "GildedRose.h"
#include "Item.h"

#define TEST_CONJURED_ITEMS

TEST(GildedRoseTest, Day01) {
  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  EXPECT_EQ("+5 Dexterity Vest", G.items[0]->name);
  EXPECT_EQ(9, G.items[0]->sellIn);
  EXPECT_EQ(19, G.items[0]->quality);

  EXPECT_EQ("Aged Brie", G.items[1]->name);
  EXPECT_EQ(1, G.items[1]->sellIn);
  EXPECT_EQ(1, G.items[1]->quality);

  EXPECT_EQ("Elixir of the Mongoose", G.items[2]->name);
  EXPECT_EQ(4, G.items[2]->sellIn);
  EXPECT_EQ(6, G.items[2]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[3]->name);
  EXPECT_EQ(0, G.items[3]->sellIn);
  EXPECT_EQ(80, G.items[3]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[4]->name);
  EXPECT_EQ(-1, G.items[4]->sellIn);
  EXPECT_EQ(80, G.items[4]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[5]->name);
  EXPECT_EQ(14, G.items[5]->sellIn);
  EXPECT_EQ(21, G.items[5]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[6]->name);
  EXPECT_EQ(9, G.items[6]->sellIn);
  EXPECT_EQ(50, G.items[6]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[7]->name);
  EXPECT_EQ(4, G.items[7]->sellIn);
  EXPECT_EQ(50, G.items[7]->quality);
}

TEST(GildedRoseTest, Day02) {
  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  G.updateQuality();

  EXPECT_EQ("+5 Dexterity Vest", G.items[0]->name);
  EXPECT_EQ(8, G.items[0]->sellIn);
  EXPECT_EQ(18, G.items[0]->quality);

  EXPECT_EQ("Aged Brie", G.items[1]->name);
  EXPECT_EQ(0, G.items[1]->sellIn);
  EXPECT_EQ(2, G.items[1]->quality);

  EXPECT_EQ("Elixir of the Mongoose", G.items[2]->name);
  EXPECT_EQ(3, G.items[2]->sellIn);
  EXPECT_EQ(5, G.items[2]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[3]->name);
  EXPECT_EQ(0, G.items[3]->sellIn);
  EXPECT_EQ(80, G.items[3]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[4]->name);
  EXPECT_EQ(-1, G.items[4]->sellIn);
  EXPECT_EQ(80, G.items[4]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[5]->name);
  EXPECT_EQ(13, G.items[5]->sellIn);
  EXPECT_EQ(22, G.items[5]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[6]->name);
  EXPECT_EQ(8, G.items[6]->sellIn);
  EXPECT_EQ(50, G.items[6]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[7]->name);
  EXPECT_EQ(3, G.items[7]->sellIn);
  EXPECT_EQ(50, G.items[7]->quality);
}

TEST(GildedRoseTest, Day05) {
  const int NO_OF_DAYS =5;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i=1; i<=NO_OF_DAYS;i++) {
    G.updateQuality();
  }

  EXPECT_EQ("+5 Dexterity Vest", G.items[0]->name);
  EXPECT_EQ(5, G.items[0]->sellIn);
  EXPECT_EQ(15, G.items[0]->quality);

  EXPECT_EQ("Aged Brie", G.items[1]->name);
  EXPECT_EQ(-3, G.items[1]->sellIn);
  EXPECT_EQ(8, G.items[1]->quality);

  EXPECT_EQ("Elixir of the Mongoose", G.items[2]->name);
  EXPECT_EQ(0, G.items[2]->sellIn);
  EXPECT_EQ(2, G.items[2]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[3]->name);
  EXPECT_EQ(0, G.items[3]->sellIn);
  EXPECT_EQ(80, G.items[3]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[4]->name);
  EXPECT_EQ(-1, G.items[4]->sellIn);
  EXPECT_EQ(80, G.items[4]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[5]->name);
  EXPECT_EQ(10, G.items[5]->sellIn);
  EXPECT_EQ(25, G.items[5]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[6]->name);
  EXPECT_EQ(5, G.items[6]->sellIn);
  EXPECT_EQ(50, G.items[6]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[7]->name);
  EXPECT_EQ(0, G.items[7]->sellIn);
  EXPECT_EQ(50, G.items[7]->quality);
}

TEST(GildedRoseTest, Day20) {
  const int NO_OF_DAYS =20;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i=1; i<=NO_OF_DAYS;i++) {
    G.updateQuality();
  }

  EXPECT_EQ("+5 Dexterity Vest", G.items[0]->name);
  EXPECT_EQ(-10, G.items[0]->sellIn);
  EXPECT_EQ(0, G.items[0]->quality);

  EXPECT_EQ("Aged Brie", G.items[1]->name);
  EXPECT_EQ(-18, G.items[1]->sellIn);
  EXPECT_EQ(38, G.items[1]->quality);

  EXPECT_EQ("Elixir of the Mongoose", G.items[2]->name);
  EXPECT_EQ(-15, G.items[2]->sellIn);
  EXPECT_EQ(0, G.items[2]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[3]->name);
  EXPECT_EQ(0, G.items[3]->sellIn);
  EXPECT_EQ(80, G.items[3]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[4]->name);
  EXPECT_EQ(-1, G.items[4]->sellIn);
  EXPECT_EQ(80, G.items[4]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[5]->name);
  EXPECT_EQ(-5, G.items[5]->sellIn);
  EXPECT_EQ(0, G.items[5]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[6]->name);
  EXPECT_EQ(-10, G.items[6]->sellIn);
  EXPECT_EQ(0, G.items[6]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[7]->name);
  EXPECT_EQ(-15, G.items[7]->sellIn);
  EXPECT_EQ(0, G.items[7]->quality);
}

TEST(GildedRoseTest, Day30) {
  const int NO_OF_DAYS =30;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i=1; i<=NO_OF_DAYS;i++) {
    G.updateQuality();
  }

  EXPECT_EQ("+5 Dexterity Vest", G.items[0]->name);
  EXPECT_EQ(-20, G.items[0]->sellIn);
  EXPECT_EQ(0, G.items[0]->quality);

  EXPECT_EQ("Aged Brie", G.items[1]->name);
  EXPECT_EQ(-28, G.items[1]->sellIn);
  EXPECT_EQ(50, G.items[1]->quality);

  EXPECT_EQ("Elixir of the Mongoose", G.items[2]->name);
  EXPECT_EQ(-25, G.items[2]->sellIn);
  EXPECT_EQ(0, G.items[2]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[3]->name);
  EXPECT_EQ(0, G.items[3]->sellIn);
  EXPECT_EQ(80, G.items[3]->quality);

  EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.items[4]->name);
  EXPECT_EQ(-1, G.items[4]->sellIn);
  EXPECT_EQ(80, G.items[4]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[5]->name);
  EXPECT_EQ(-15, G.items[5]->sellIn);
  EXPECT_EQ(0, G.items[5]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[6]->name);
  EXPECT_EQ(-20, G.items[6]->sellIn);
  EXPECT_EQ(0, G.items[6]->quality);

  EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.items[7]->name);
  EXPECT_EQ(-25, G.items[7]->sellIn);
  EXPECT_EQ(0, G.items[7]->quality);
}

#ifdef TEST_CONJURED_ITEMS

TEST(NewConjuredItemsTest, Day01) {
  const int NO_OF_DAYS = 1;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }
  cout << "\"Conjured\" items degrade in Quality twice as fast as normal items";

  EXPECT_EQ("Conjured Mana Cake", G.items[0]->name);
  EXPECT_EQ(5, G.items[0]->quality);
}

TEST(NewConjuredItemsTest, Day02) {
  const int NO_OF_DAYS = 2;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ("Conjured Mana Cake", G.items[0]->name);
  EXPECT_EQ(4, G.items[0]->quality);
}

TEST(NewConjuredItemsTest, Day05) {
  const int NO_OF_DAYS = 5;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ("Conjured Mana Cake", G.items[0]->name);
  EXPECT_EQ(0, G.items[0]->quality);
}

TEST(NewConjuredItemsTest, Day20) {
  const int NO_OF_DAYS = 20;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ("Conjured Mana Cake", G.items[0]->name);
  EXPECT_EQ(0, G.items[0]->quality);
}

TEST(NewConjuredItemsTest, Day30) {
  const int NO_OF_DAYS = 30;

  vector<Item*> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_EQ("Conjured Mana Cake", G.items[0]->name);
  EXPECT_EQ(0, G.items[0]->quality);
}
#endif
