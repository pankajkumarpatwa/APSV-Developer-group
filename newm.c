#include <stdio.h>
#include <conio.h>

void main() 
{
    int arr[5], i; // Declare an array of size 5

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);  // Input elements
    }

    printf("You entered: ");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]); // Output elements
    }

    getch();
}
