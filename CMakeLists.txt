
cmake_minimum_required(VERSION 3.20)

project(Inventory_C C)

add_executable(inventory 
    main.c
    main_menu/main_menu.c 
    inventory_menu/inventory_menu.c
    inventory_menu/food_menu.c
    inventory_menu/armor_menu.c
    inventory_menu/weapons_menu.c
    inventory_menu/potions_menu.c
    utils/utils.c
)

