/*This is the food inventory layout*/

#include <stdio.h>
#include <string.h>

#include "../main_menu/main_menu.h"
#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../include/armor_menu.h"

#define MAX_SIZE 10


Item armorList[MAX_SIZE];
int armorListCount = 0;

int armorMenu() {
    clearScreen();

    int input_am;

    printf("====ARMOR MENU================\n\n\n");
    printf("This is the current inventory      \n\n\n");
    printItems(armorList, &armorListCount);
    printf("==============================\n\n");

    printf("Add Item: 3\nRemove Item: 2\nReturn to Inventory Menu: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input_am);

    switch (input_am)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        inventoryMenu();
        break;
    case 2:
        removeItem(armorList, &armorListCount);
        armorMenu();
        break;
    case 3:
        addItem(armorList, &armorListCount);
        armorMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}