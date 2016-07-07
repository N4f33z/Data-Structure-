#include <cstdio>
using namespace std;


int main()
{
   int x,a=0;
   int arr[10]={4,9,8,52,47,50,43,92,19,30};

   printf("A number you want to search: ");
   scanf("%d",&x);

   for(int i=0;i<10;i++)
   {
      if(arr[i]==x)
      {
          printf("\nFound %d.\n",arr[i]);
          a=1;
          break;
      }

      else a=0;
   }

   if(a==0) printf("\n%d not found.\n",x);


}
