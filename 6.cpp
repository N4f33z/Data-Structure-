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

   int srch;
    printf("\nSearch a number: ");
    scanf("%d",&srch);
    int a=0,b=sz-1;
    int middle=(a+b)/2;

    while(1)
    {
       if(a<=b)
        {
             printf("\n%d Not found.\n\n",srch);
             break;
        }

      else  if(x[middle]<srch)
       {
           a=middle+1;
       }

       else if(x[middle]==srch)
        {
            printf("\nFound %d.\n\n",srch);
            break;
        }

        else if(x[middle]>srch)
        {
            b=middle-1;
            middle=(a+b)/2;
        }



    }

  return 0;

}
