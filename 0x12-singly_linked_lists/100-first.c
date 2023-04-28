#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * Prints a sentence before the main function is executed.
 */
void first(void)
{
    printf("You're exhausted! And yet, you must accept it.,\n");
    printf("I carry my home on my back.\n");
}
