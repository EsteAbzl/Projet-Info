#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "map.h"

int main(void) {
  Pos test;
  test.x = 2;
  test.y = 3;
  
  printf("Hello World\n");
  printf("x: %d\ny: %d\n");

  printf("\e[48;2;150;0;0m \e[38;2;100;200;100m 🌳🤙✨👍🥶😅😓❄💪💨💦🧭💭🖥🎮©🍾👩‍❤️‍👩🙂😎😊😖✈🏹🏎💩💀⬛◼◾▪🏴⚫🖤🔲🟦💙🔵🔷🔹🍀🌿🌾🌴🌳🍃🍁🍂🌲🌱⛏ 🛡 ⚔\n");
  
  int width = 70;
  int heigth = 30;

  Map* pMap = NULL;
  pMap = constructor_Map(width, heigth);


  printMap(pMap);

  free_Map(pMap);
  return 0;
}