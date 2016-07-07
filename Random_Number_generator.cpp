#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int ara[10000];
void primeGenerator(int n)
{
   int i,j,ara[10000];
    for(i=0;i<n;i++)
    {
        ara[i]=1;
    }
    ara[0]=0;
    ara[1]=0;
    ara[2]=1;

    int c=0;
    int x=sqrt(n);
    for(i=2;i<x;i++)
    {
        for(j=i*i;j<n;j=j+i)
        {
            ara[j]=0;
        }
    }

    for(i=0,c=0,j=0;i<n;i++)
    {
         if(ara[i]==1)
         {
            arr[j]=i;
            j++;
         }
    }

    /*
    for(i=0;i<j;i++)
    {
        printf("%d\n",arr[i]);
    }
    //*/
}

int main()
{

  printf("Select a range for Random Numbers: ");
  int n,force=0;
  scanf("%d",&n);
  primeGenerator(10000);

  time_t currentTime;
  struct tm *localTime;
  time( &currentTime );
  localTime = localtime( &currentTime );



  for(int j=1,i=1;j<10;j++)
   {
       int Sec    = localTime->tm_sec;
       int Month  = localTime->tm_mon + 1;
       int Min    = localTime->tm_min;

       _sleep(5047);

       Sec=Sec+localTime->tm_sec;

       long long int random=Sec*arr[i];


       i++;
       random=(random*Month)+arr[i];

       i++;
       if(i>=9997)
       {
           i=97;
       }
       random=random%n;
       if(random%2!=0)
       {
           force++;
       }

        if(force>=2)
        {
            random++;
            force=0;
        }

       printf("\n");
       printf("%lld",random);
       _sleep(2557);


   }

  return 0;
}

