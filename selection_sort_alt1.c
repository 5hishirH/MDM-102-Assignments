// Selection sort in C

#include <stdio.h>

int main()
{
    // Define array size
    int array_size, i, j, min_index;
    printf("How many numbers do you want to sort? : ");
    scanf("%d", &array_size);
    float a[array_size], temp;

    // Input array elements
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }

    // Sort
    for(i = 0; i < array_size - 1; i++)
    {
        // comparasion of i indexed element with the rest of elements
        min_index = i;
        j = i + 1;

        for(j; j < array_size; j++)
        {
            if ( a[j] < a[min_index] )
            {
                min_index = j;
            }
        }

        // swap
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }

    // print the sorted array
    printf("\nIn ascending order :\n");
    for ( i = 0; i < array_size; i++)
    {
        printf("%.2f\t", a[i]);
    }

    printf("\n\n");
    return 0;
}