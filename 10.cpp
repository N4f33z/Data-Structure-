#include <cstdio>
using namespace std;

int main()
{
    int arr[5]={8,6,9,20,4};
    int temp;

     printf("Before sorting The array is: ");

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(arr[j]>arr[j+1])
           {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;

           }

        }
    }

    printf("\n\nAfter sorting The array is: ");

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\n");
    return 0;
}
