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
