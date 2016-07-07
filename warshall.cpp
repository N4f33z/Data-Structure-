#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
   int arr[4][4],i,j,k;
   for(i=0;i<4;i++){
       for(j=0;j<4;j++){
        scanf("%d",&arr[i][j]);
        }
   }
      system("cls");
   for(i=0;i<4;i++){
       for(j=0;j<4;j++){
        printf("%d ",arr[i][j]);
        if(arr[i][j]==0)
        {
            arr[i][j]=100000000;
        }

    }
        printf("\n");
   }

   for(k=0;k<4;k++)
   {
      for(i=0;i<4;i++)
      {
         for(j=0;j<4;j++)
         {
         if(arr[i][j] > arr[i][k] + arr[k][j])
            {
               arr[i][j]=arr[i][k] + arr[k][j];
            }

         }
      }
   }
   printf("Shortest path\n");
   for(i=0;i<4;i++){
       for(j=0;j<4;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
   }
   return 0;
}
