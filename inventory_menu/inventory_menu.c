#include <stdio.h>

#include "../utils/utils.h"
#include "inventory_menu.h"

/*This is the main inventory menu layout*/


typedef struct
{
    char *name;
    float cost;

} Item;

Item foodList[] = {
    {"Apple", 1},
    {"Banana", .50},
    {"Orange", .75},
    {"egg", 5},
};

/* loop function that displays all the current items in inventory*/

void printItems() {
    int len = sizeof(foodList) / sizeof(foodList[0]);

    printf("%-15s %8s\n", "Name", "Cost");

    for (int i = 0; i < len; i++) {
        printf("%-15s $%7.2f\n", 
                  foodList[i].name, 
                 foodList[i].cost);
    }
}

int inventoryMenu() {

    int input;

    printf("====INVENTORY MENU=================\r\n\r\n\r\n");
    printf("This is the current inventory      \n\n\n");
    printItems();
    printf("===================================\n\n");

    printf("Continue: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        clearScreen();
        inventoryMenu();
        break;
    
    default:
        printf("Invalid Input.\n");
        break;
    }
}


