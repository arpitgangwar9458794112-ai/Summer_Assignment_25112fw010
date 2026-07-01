#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], merge[100];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    i = j = k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            merge[k++] = arr1[i++];
        else
            merge[k++] = arr2[j++];
    }

    while (i < n1)
        merge[k++] = arr1[i++];

    while (j < n2)
        merge[k++] = arr2[j++];

    printf("Merged Sorted Array: ");

    for (i = 0; i < k; i++)
        printf("%d ", merge[i]);

    printf("\n");

    return 0;
}