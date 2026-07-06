/*This is the main inventory menu layout*/

#include <stdio.h>
#include <string.h>

#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../main_menu/main_menu.h"

#define MAX_SIZE 10


Item foodList[MAX_SIZE];

      
int inventoryMenu() {
    clearScreen();

    int input;

    printf("====INVENTORY MENU=================\r\n\r\n\r\n");
    printf("This is the current inventory      \n\n\n");
    printItems(foodList);
    printf("===================================\n\n");

    printf("Add Item: 3\nRemove Item: 2\nReturn to Main menu: 1\nExit: 0\n\n");

    printf("Input: ");
    scanf("%d", &input);

    switch (input)
    {
    case 0:
        printf("Goodbye!\n");
        return 0;
    case 1:
        mainMenu();
        break;
    case 2:
        removeItem(foodList);
        inventoryMenu();
        break;
    case 3:
        addItem(foodList);
        inventoryMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}


