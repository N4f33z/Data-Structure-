#include <cstdio>
using namespace std;

int Ackerman(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }

    else if(m!=0 && n==0)
    {
        Ackerman(m-1,1);
    }

    else if(m!=0 && n!=0)
    {
        Ackerman(m-1,Ackerman(m,n-1));
    }
}

int main()
{
    int m,n;
    while(1)
    {
        printf("The value of m:");
      scanf("%d",&m);
      printf("The value of n:");
      scanf("%d",&n);
      printf("The value of Ackerman function: %d\n\n",Ackerman(m,n));
    }

    return 0;

}
