// Selection sort in C

#include <stdio.h>

int main()
{
    // Define array size
    int array_size, i, j;
    printf("How many numbers do you want to sort? : ");
    scanf("%d", &array_size);
    float a[array_size], temp;

    // Input array elements
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }

    printf("\nIn ascending order :\n");
    // Sort
    for(i = 0; i < array_size; i++)
    {
        // comparasion between i indexed element and i + 1 indexed element
        for(j = i + 1; j < array_size; j++)
        {
            if ( a[j] < a[i] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        // print the sorted array
        printf("%.2f\t", a[i]);
    }

    printf("\n\n");
    return 0;

}