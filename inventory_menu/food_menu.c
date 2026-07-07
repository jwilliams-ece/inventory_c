/*This is the food inventory layout*/

#include <stdio.h>
#include <string.h>

#include "../main_menu/main_menu.h"
#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../include/food_menu.h"

#define MAX_SIZE 10


Item foodList[MAX_SIZE];
int foodListCount = 0;

int foodMenu() {
    clearScreen();

    int input_fm;

    printf("====FOOD MENU=================\n\n\n");
    printf("This is the current inventory      \n\n\n");
    printItems(foodList, &foodListCount);
    printf("==============================\n\n");

    printf("Add Item: 3\nRemove Item: 2\nReturn to Inventory Menu: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input_fm);

    switch (input_fm)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        inventoryMenu();
        break;
    case 2:
        removeItem(foodList, &foodListCount);
        foodMenu();
        break;
    case 3:
        addItem(foodList, &foodListCount);
        foodMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}