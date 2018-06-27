/**
* ItemToPurchase.h - Struct definition and related function declarations
*
* Build the ItemToPurchase struct with the following specifications:
*
* Data members (3 pts)
* char itemName [ ]
* int itemPrice
* int itemQuantity
* Related functions
* MakeItemBlank() (2 pts)
* Has a pointer to an ItemToPurchase parameter.
* Sets item's name = "none", item's price = 0, item's quantity = 0
* PrintItemCost()
* Has an ItemToPurchase parameter.
*/

typedef struct ItemToPurchase_struct {
  char *itemName;
  int itemPrice;
  int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase *n) {
  n->itemName = "none";
  n->itemPrice = 0;
  n->itemQuantity = 0;
}

void PrintItemCost(const ItemToPurchase n) {
  printf("%s %d @ $%d = %f\n", n->itemName, n->itemQuantity, n->itemPrice, (n->itemQuantity*n->itemPrice));
}
