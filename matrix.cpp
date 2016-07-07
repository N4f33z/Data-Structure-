#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a[10][10], b[10][10], c[10][10], row1, column1, row2, column2, i, j, k;

    printf("Numbers of rows and columns for 1st matrix: ");

    scanf("%d %d",&row1,&column1);

    printf("Numbers of rows and columns for 2nd matrix: ");

    scanf("%d %d",&row2,&column2);


    if (column1!=row2)
    {

    }

    for(i=0; i<row1; i++)
    for(j=0; j<column2; j++)
    {
       c[i][j]=0;
    }

   printf("\n\nEnter Elements of 1st Matrix: %d X %d\n",row1,column1);
    for(i=0; i<row1; i++)
    {
       for(j=0; j<column1; j++)
         {
            scanf("%d",&a[i][j]);
         }
    }




    printf("\n\nEnter Elements of 2nd Matrix: %d X %d\n",row2,column2);
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
         {
             scanf("%d",&b[i][j]);
         }
    }


     printf("\n1st Matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
         {
             printf("%d ",a[i][j]);

             if(j==column1-1)
            {
               printf("\n");
             }
         }
    }

    printf("\n2nd Matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
         {
             printf("%d ",b[i][j]);

             if(j==column2-1)
            {
               printf("\n");
             }
         }
    }



for(i=0; i<row1; i++)
    {
      for(j=0; j<column2; j++)
      {
         for(k=0; k<column1; k++)
           {
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
           }
      }

    }



   printf("\n\nMatrix Multiplication:\n");
    for(i=0; i<row1; i++)
    {
      for(j=0; j<column2; j++)
    {
        printf("%d ",c[i][j]);
        if(j==column2-1)
        {
          printf("\n");
        }

    }
    }

    return 0;
}
