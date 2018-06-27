#include "ItemToPurchase.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char item1[50];
  char item2[50];
  ItemToPurchase firstItem;
  ItemToPurchase secondItem;


  printf("Item 1\n");
  printf("Enter the item name:\n");
  gets(&(firstItem.itemName));

  printf("Enter the item price:\n");
  scanf("%d", &(firstItem.itemPrice));

  printf("Enter the item quantity:\n");
  scanf("%d", &(firstItem.itemQuantity));
  printf("\n");

  printf("Item 2\n");
  printf("Enter the item name:\n");
  gets(&(secondItem.itemName));
  printf("Enter the item price:\n");
  scanf("%d", &(secondItem.itemPrice));
  printf("Enter the item quantity:\n");
  scanf("%d", &(secondItem.itemQuantity));
  printf("\n");

  printf("TOTAL COST\n");
  PrintItemCost(&firstItem);
  PrintItemCost(&secondItem);
  printf("\n");
  printf("Total: $%d\n",(firstItem.itemPrice * firstItem.itemQuantity)+
                        (secondItem.itemPrice * secondItem.itemQuantity));


  return (0);

}
