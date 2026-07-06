#include <stdio.h>

#include "../utils/utils.h"
#include "../include/inventory_menu.h"
#include "../main_menu/main_menu.h"

#define MAX_SIZE 10

/*This is the main inventory menu layout*/

Item foodList[MAX_SIZE];
int itemCount = 0;


/* funciton that adds to the food item list available*/
void addItem(Item list[], char name[], float cost) {
    list[itemCount] = (Item){name,cost};
    itemCount++;
}

/* removes the last item from the list of items*/
void removeItem(Item list[]) {
    if(itemCount > 0) {
        itemCount--;
        list[itemCount] = (Item){NULL};
    }
}

/* loop function that displays all the current items in inventory*/

void printItems(Item list[]) {
    
    printf("%-15s %8s\n", "Name", "Cost");

    for (int i = 0; i < itemCount; i++) {
        printf("%-15s $%7.2f\n", 
            list[i].name, 
            list[i].cost);
        }
}
      
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
        clearScreen();
        mainMenu();
        break;
    case 2:
        removeItem(foodList);
        inventoryMenu();
        break;
    case 3:
        addItem(foodList,"Apple", 1.0);
        inventoryMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}


