// Main file to run inventory system
#include <stdio.h>


char *message = "Inventory open!";
char *foodItem[5] = {"banana", "apple", "bread", "meat"};

int main()
{
    int count = 0;
    
    while(foodItem[count] != NULL) {
        printf("%s\n",foodItem[count]);
        count++;
    }
}