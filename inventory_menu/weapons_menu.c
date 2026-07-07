/*This is the food inventory layout*/

#include <stdio.h>
#include <string.h>

#include "../main_menu/main_menu.h"
#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../include/weapons_menu.h"

#define MAX_SIZE 10


Item weaponsList[MAX_SIZE];
int weaponsListCount = 0;

int weaponsMenu() {
    clearScreen();

    int input_wm;

    printf("====WEAPONS MENU==============\n\n\n");
    printf("This is the current inventory      \n\n\n");
    printItems(weaponsList, &weaponsListCount);
    printf("==============================\n\n");

    printf("Add Item: 3\nRemove Item: 2\nReturn to Inventory Menu: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input_wm);

    switch (input_wm)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        inventoryMenu();
        break;
    case 2:
        removeItem(weaponsList, &weaponsListCount);
        weaponsMenu();
        break;
    case 3:
        addItem(weaponsList, &weaponsListCount);
        weaponsMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}