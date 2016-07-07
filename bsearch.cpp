#include <cstdio>
using namespace std;

int *bubble(int p[],int sz)
{
   int temp;
   for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
        {
           if(p[j]>p[j+1])
           {
              temp=p[j];
              p[j]=p[j+1];
              p[j+1]=temp;

           }

        }
    }
    printf("\nAfter sorting the array is: ");
    for(int i=0;i<sz;i++)
    {
        printf("%d ",p[i]);
    }
   printf("\n");
   return p;

}

int main()
{
    int *p,sz,*x;
    printf("Size of the array: ");
    scanf("%d",&sz);
    p=new int[sz+1];
    printf("Input values: ");

    for(int i=0;i<sz;i++)
    {
        scanf("%d",&p[i]);
    }


    x=bubble(p,sz);
}
