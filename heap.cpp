#include <bits/stdc++.h>
using namespace std;
int temp1,temp;

void heapify(int arr[], int n, int i)
{
    int largest=i;
    int left = 2*i+1;
    int right = 2*i+2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i=n/2-1; i>=0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i=n-1; i>=0; i--)
    {
        temp1=arr[0];
        arr[0]=arr[i];
        arr[i]=temp1;
        heapify(arr, i, 0);
    }
}

void print(int arr[], int n)
{
    for (int i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main()
{

    int n;

    printf("Size of the array: ");

    scanf("%d",&n);

    int arr[n+10];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    heapSort(arr, n);

    printf("Sorted Array: ");

    print(arr, n);

    return 0;
}
