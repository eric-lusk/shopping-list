/**
* ItemToPurchase.h - Struct definition and related function declarations
*
* Build the ItemToPurchase struct with the following specifications:
*
* Data members (3 pts)
* char itemName [ ]
* int itemPrice
* int itemQuantity
*/

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

void MakeItemBlank(ItemToPurchase*);
void PrintItemCost(ItemToPurchase*);

typedef struct ItemToPurchase{
   char itemName[50];
   int itemPrice;
   int itemQuantity;
} ItemToPurchase;

#endif
