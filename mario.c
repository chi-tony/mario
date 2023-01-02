// Creates a mirrored staircase block based on user input, similar to those in Super Mario games.

#include <stdio.h>

int main(void)
{
    // Initialize height, as well as space value
    int height;
    int space = 2;

    do
    {
        // Prompt user for total block height
        printf("Total block height: ");
        scanf("%d", &height);
    }

    // Continue prompting until input is between 1 and 8 inclusive
    while (height < 1 || height > 8);

    // Define end index for first row
    int width = height + space + 1;

    // For each row of the pyramid
    for (int i = 0; i < height; i++)
    {
        // For each column of the pyramid
        for (int j = 0; j < width; j++)
        {
            // Print a space for region between pyramids
            if (j == height || j == height + 1)
            {
                printf(" ");
            }

            // Print space for outside regions where there is no desired block
            else if (j < height - i - 1 || j == height + space + i + 2)
            {
                printf(" ");
            }

            // If space not needed, print block
            else
            {
                printf("#");
            }
        }
        // Move on to the next row of the pyramid
        printf("\n");

        // Increment width after each row
        width++;
    }
}
