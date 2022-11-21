// Heap sort

#include<stdio.h>

int main()
{
    int array_size, largest, left, right, i, last_index;
    // array size
    printf("How many number do you want to sort? : ");
    scanf("%d", &array_size);
    float arr[array_size], temp;

    // input array
    printf("\n");
    for ( i = 0; i < array_size; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%f", &arr[i]);
    }
    
    // print the unsorted array
    printf("\nUnsorted array :\n");
    for(i = 0; i < array_size; i++)
        printf("%.2f\t", arr[i]);
    printf("\n");

    // sort in ascending order
    for(last_index = array_size - 1; last_index > 0; last_index--)
    {
        // Heapify
        for ( i = 0; i <= last_index; i++)
        {
            largest = i;
            left = 2*i + 1;
            right = 2*i + 2;
            if ( left <= last_index && arr[largest] < arr[left] )
                largest = left;
            if ( right <= last_index && arr[largest] < arr[right] )
                largest = right;
            if ( largest != i )
            {
                temp = arr[i];
                arr[i] = arr[largest];
                arr[largest] = temp;
            }
        }

        // swap
        temp = arr[0];
        arr[0] = arr[last_index];
        arr[last_index] = temp;
    }

    // print the heap sorted array
    printf("\nAscending :\n");
    for(i = 0; i < array_size; i++)
        printf("%.2f\t", arr[i]);

    printf("\n\n");
    return 0;
}