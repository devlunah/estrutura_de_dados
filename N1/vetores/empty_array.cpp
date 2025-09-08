#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
// Function to create a dynamic array of a given size 
int* createArray(int size) { 
    // Allocate memory for the array 
    int* array = (int*)malloc(size * sizeof(int)); 
    if (array == NULL) { 
        // Handle memory allocation failure 
        printf("Memory allocation failed\n"); 
        exit(1); 
    } 
    // Optionally initialize the array to zero 
    memset(array, 0, size * sizeof(int)); 
    return array; 
} 
 
int main() { 
    int size = 10; 
 
    // Create an array of the specified size 
    int* myArray = createArray(size); 
 
    // Use the array (for demonstration, we will print its contents) 
    printf("Array contents:\n"); 
    for (int i = 0; i < size; i++) { 
        printf("%d ", myArray[i]); 
    } 
    printf("\n"); 
 
    // Free the allocated memory 
    free(myArray); 
 
    return 0; 
} 