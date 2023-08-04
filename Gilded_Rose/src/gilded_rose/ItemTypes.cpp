
#include "ItemTypes.h"



  void LegendaryItem::update(){
      return;
    }


 void ConjuredItem::update() {
      reduceSellIn();
    if (checkQualityBetween0And50()) {
      if (checkSellInExpired()) {
        reduceQuality(4);
      } else {
        reduceQuality(2);
      }
    }
  }

  void MaturingItem::update() {
    reduceSellIn();
    if (checkQualityBetween0And50() || quality == 0) {
      reduceQuality((-1));

      if (checkSellInExpired()) {
        reduceQuality((-1));
      }
    }
  }


  void ExpiringItem::update() {
    reduceSellIn();
    if (checkQualityBetween0And50()) {
      reduceQuality(-1);
      if (sellIn < 10) {
        reduceQuality(-1);
      }
      if (sellIn < 5) {
        reduceQuality(-1);
      }
      if (!checkQualityBetween0And50()) {
        quality = 50;
      }
    }
    if (checkSellInExpired())
      quality = 0;
  }

  void NormalItem::update(){
    reduceSellIn();
    if (!checkQualityBetween0And50()) {
      return;
    }
    if (checkSellInExpired()) {
      reduceQuality(2);
      return;
    }
    reduceQuality(1);
  }


