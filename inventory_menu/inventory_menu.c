#include <stdio.h>

#include "../utils/utils.h"
#include "inventory_menu.h"

/*This is the main inventory menu layout*/


typedef struct
{
    char *name;
    int cost;

} Item;

Item food_1 = {"Apple", 1};


int inventoryMenu() {

    int input;

    printf("====INVENTORY MENU=================\r\n\r\n\r\n");
    printf("This is the current inventory      \n\n\n");
    printf("Name: %s            \n\n\n", food_1.name);
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

    printf("Program continues...\n");
}


