// Main file to run inventory system
#include <stdio.h>


char *message = "Inventory open!";
char *foodItem[] = {"banana", "apple", "bread", "meat"};

int main()
{
    int len = sizeof(foodItem) / sizeof(foodItem[0]);
    
    for(int i = 0; i < len; i++) {
        printf("%s\n",foodItem[i]);
    }

}