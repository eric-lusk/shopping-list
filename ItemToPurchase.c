// ItemToPurchase.c - Related function definitions
#include "ItemToPurchase.h"
#include <stdio.h>
#include <string.h>

void MakeItemBlank(ItemToPurchase *itemPtr) {
  strcpy(itemPtr->itemName, "none");
  itemPtr->itemPrice = 0;
  itemPtr->itemQuantity = 0;
}

void PrintItemCost (ItemToPurchase *itemPtr) {
  int totalamount = (itemPtr->itemQuantity) * (itemPtr->itemPrice);
  printf("%s %d @ $%d = $%d\n",itemPtr->itemName, itemPtr->itemQuantity,
  itemPtr->itemPrice, totalamount);
}
