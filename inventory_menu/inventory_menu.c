/*This is the main inventory menu layout*/

#include <stdio.h>
#include <string.h>

#include "../utils/utils.h"
#include "../main_menu/main_menu.h"
#include "../include/inventory_menu.h"
#include "../include/food_menu.h"
#include "../include/weapons_menu.h"
#include "../include/armor_menu.h"
#include "../include/potions_menu.h"

#define MAX_SIZE 10

      
int inventoryMenu() {
    clearScreen();

    int input;

    printf("====INVENTORY MENU=================\r\n\r\n\r\n");
    printf("This is the current inventory      \n\n\n");
    printf("===FOOD===WEAPONS===ARMOR===POTIONS\n\n");
    printf("===================================\n\n");

    printf("Potions Menu: 5\nArmor Menu: 4\nWeapons Menu: 3\nFood Menu: 2\nReturn to Main menu: 1\nExit: 0\n\n");

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
        foodMenu();
        break;
    case 3:
        weaponsMenu();
        break;
    case 4:
        armorMenu();
        break;
    case 5:
        potionsMenu();
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }
}


