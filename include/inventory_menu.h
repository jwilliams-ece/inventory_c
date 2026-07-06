#ifndef INVENTORY_MENU_H
#define INVENTORY_MENU_H

typedef struct
{
    char *name;
    float cost;

} Item;

int inventoryMenu();

/* funciton that adds to the food item list available*/
void addItem(Item list[], char name[], float cost);

/* removes the last item from the list of items*/
void removeItem(Item list[]);

/* loop function that displays all the current items in inventory*/
void printItems(Item list[]);

#endif