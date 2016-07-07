#include <cstdio>
using namespace std;

int main()
{
    int n,i,fac=1;

    while(1)
    {
       scanf("%d",&n);

        i=1;
        fac=1;

     for(i=1;i<=n ;i++)
      {
        fac=fac*i;
      }

       printf("%d\n",fac);
    }

    return 0;

}
