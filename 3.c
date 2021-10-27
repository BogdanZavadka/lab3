#include <stdio.h>
#include <stdbool.h>
void check_order(int *b[], int x)
{
    int i;
    bool t = true;
    for (i = 0; i < x - 1; x++)
    {
        if (b[i] > b[i + 1])
        {
            t = false;
            break;
        }
    }
    if (t)
        printf("Array is ordered\n");
    else
        printf("Array is unordered\n");
}
void main(void)
{
    int i, n;
    printf("Enter the length of the array\n");
    scanf("%i", &n);
    int *a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of a[%i]\n", i);
        scanf("%i", &a[i]);
    }
    check_order(a, n);
}
