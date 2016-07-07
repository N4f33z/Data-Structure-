#include <cstdio>
using namespace std;
int arr[10]={5,98,5,6,7,8,7,18,8,50};
int i=10;

void pop()
{
    i--;

    printf("\n\nPoped %d\n",arr[i]);

    printf("\nNow the array is: ");

     for(int j=0;j<i;j++)
    {
     printf("%d ",arr[j]);
    }
    printf("\n");
}

int main()
{

    printf("\n\nThe array: ");
    for(int j=0;j<10;j++)
    {
     printf("%d ",arr[j]);
    }
    printf("\n");
   for(int j=0;j<10;j++)
   {
     pop();
   }

   return 0;
}
