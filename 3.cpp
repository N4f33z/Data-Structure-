#include <cstdio>
using namespace std;

int main()
{
    int arr[6]={18,97,71,53,61};
    int x,a;
    printf("The array is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\nWhich index  do you want to insert a number: ");

    scanf("%d",&x);

    printf("\nThe number: ");
    scanf("%d",&a);


    for(int i=5;i>=0;i--)
    {

        arr[i+1]=arr[i];

        if(i==x)
        {
            arr[i]=a;
            break;
        }

    }

    printf("\nThe array is: ");
    for(int i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\nWhich index  do you want to pop a number: ");

    scanf("%d",&x);

    for(int i=x;i<=5;i++)
    {

        arr[i]=arr[i+1];


    }

    printf("\nNow the array is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

}
