
cmake_minimum_required(VERSION 3.20)

project(Inventory_C C)

add_executable(inventory 
    main.c 
    inventory_menu/inventory_menu.c
    utils/utils.c
)

