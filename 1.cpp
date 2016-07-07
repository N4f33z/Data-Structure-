#include <cstdio>
using namespace std;
int i=0;
int arr[10];

void push(int x)
{
    arr[i]=x;
    i++;
}

int main()
{
    int x;

    printf("push 10 values in array: ");

    for(int j=0;j<10;j++)
    {
        scanf("%d",&x);
        push(x);
    }

    printf("\n\nThe array: ");
    for(int j=0;j<10;j++)
    {
     printf("%d ",arr[j]);
    }



    return 0;
}
