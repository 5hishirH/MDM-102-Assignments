// Illustrate max heap

#include<stdio.h>

int main()
{
    int array_size, largest, left, right, i, count, temp;

    printf("How many number do you want to convert into max heap structure? : ");
    scanf("%d", &array_size);
    float arr[array_size], ts;

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
    for(count = array_size - 1; count > 0; count--)
    {
        // Build max heap
        for ( i = 0; i <= count; i++)
        {
            largest = i;
            temp = largest;
            left = 2*temp + 1;
            right = 2*temp + 2;
            if ( left <= count && arr[largest] < arr[left] )
                largest = left;
            if ( right <= count && arr[largest] < arr[right] )
                largest = right;
            if ( largest != temp )
            {
                ts = arr[temp];
                arr[temp] = arr[largest];
                arr[largest] = ts;
            }
        }

        // swap
        ts = arr[0];
        arr[0] = arr[count];
        arr[count] = ts;
    }

    // print the heap sorted array
    printf("\nMax heap sorted array :\n");
    for(i = 0; i < array_size; i++)
        printf("%.2f\t", arr[i]);

    printf("\n\n");
    return 0;
}