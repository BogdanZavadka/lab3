#include <stdio.h>
#include <stdbool.h>
void check_order(int *array_2[], int array_length_)
{
    bool array_is_ordered = true;
    for (int i = 0; i < array_length_ - 1; array_length_++)
    {
        if (array_2[i] > array_2[i + 1])
        {
            array_is_ordered = false;
            break;
        }
    }
    if (array_is_ordered)
        printf("Array is ordered\n");
    else
        printf("Array is unordered\n");
}
void main(void)
{
    int array_length;
    printf("Enter the length of the array\n");
    scanf("%i", &array_length);
    int *array_1[array_length];
    for (int i = 0; i < array_length; i++)
    {
        printf("Enter the value of a[%i]\n", i);
        scanf("%i", &array_1[i]);
    }
    check_order(array_1, array_length);
}
