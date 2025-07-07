#include <stdio.h>
void print_arr(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

int temp;
void reverse(int arr[], int n)
{
    for (int i = 0; i < n/2; i++){

        temp=arr[i];
        arr[i] = arr[n-1-i];
        arr[n-i-1]=temp;
    }
}




int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    printf("Before reverse\n");

    print_arr(arr, 6);
    printf(" \n");

    reverse(arr,6);

    printf("After reverse\n");
    print_arr(arr, 6);
    return 0;
}