#ifndef UTILS_H
#define UTILS_H

/*Base struct for item classification*/
typedef struct
{
    char name[20];
    float cost;
    
} Item;


/*Clears the screen*/
void clearScreen();

/* funciton that adds to the food item list available*/
void addItem(Item list[]);

/* removes the last item from the list of items*/
void removeItem(Item list[]);

/* loop function that displays all the current items in inventory*/
void printItems(Item list[]);

#endif

