/*This is the food inventory layout*/

#include <stdio.h>
#include <string.h>

#include "../main_menu/main_menu.h"
#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../include/potions_menu.h"

#define MAX_SIZE 10


Item potionsList[MAX_SIZE];
int potionsListCount = 0;

int potionsMenu() {
    clearScreen();

    int input_pm;

    printf("====POTIONS MENU==============\n\n\n");
    printf("This is the current inventory      \n\n\n");
    printItems(potionsList, &potionsListCount);
    printf("==============================\n\n");

    printf("Add Item: 3\nRemove Item: 2\nReturn to Inventory Menu: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input_pm);

    switch (input_pm)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        inventoryMenu();
        break;
    case 2:
        removeItem(potionsList, &potionsListCount);
        potionsMenu();
        break;
    case 3:
        addItem(potionsList, &potionsListCount);
        potionsMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}