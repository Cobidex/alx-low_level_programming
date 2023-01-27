#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 15, 20, 23, 24, 80, 100, 101, 113, 130, 180, 200
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 23, binary_search(array, size, 23));
    printf("Found %d at index: %d\n\n", 180, binary_search(array, size, 180));
    printf("Found %d at index: %d\n\n", 80, binary_search(array, size, 80));
    printf("Found %d at index: %d\n\n", 10, binary_search(array, 5, 10));
    printf("Found %d at index: %d\n\n", 81, binary_search(array, 8, 81));
    printf("Found %d at index: %d\n", 22, binary_search(array, size, 22));
    return (EXIT_SUCCESS);
}
