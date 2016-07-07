#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int top=0;
char s[100]={0};
int arr[100];
int total;

void banner()
{
    printf("            ===============================================\n");
    printf("            |              Postfix Evaluation             |\n");
    printf("            ===============================================");
}
void push(int n)
{

    arr[top]=n;
    //printf("%d\n",n);

    top++;
}

void pop(int n)
{
    top--;


   if(n==1)
   {
      arr[top-1]=arr[top]*arr[top-1];

   }

   else if(n==2)
   {
      arr[top-1]=arr[top]+arr[top-1];
   }

   else if(n==3)
   {
      arr[top-1]=-1*(arr[top]-arr[top-1]);
   }

   else if(n==4)
   {
      arr[top-1]=(arr[top-1]/arr[top]);
   }

   else if(n==5)
   {
      arr[top-1]=pow(arr[top-1],arr[top]);
   }

     //printf("%d\n",arr[top-1]);

}

int main()
{
    char s1[100];
    int n;
    banner();
    printf("\n\n\nEnter Your Postfix Expression: ");
    scanf("%[^\n]s",s);


    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        int count=0,n;
        if(s[i]==' ')
        {
            for(int j=i+1,k=0; ;j++)
            {
                if(s[j]==' ')
                {
                    count++;
                    break;
                }

                else
                {
                    s1[k]=s[j];
                    k++;
                    count++;
                }
            }

             n=atoi(s1);
             push(n);
             i=i+count;
             //printf("%d\n",i);

        }
       else if(s[i]==42)
       {
          pop(1);
       }

       else if(s[i]==43)
       {
          pop(2);
       }

       else if(s[i]==45)
       {
          pop(3);
       }

       else if(s[i]==47)
       {
          pop(4);
       }

       else if(s[i]==94)
       {
          pop(5);
       }

       else
       {
           n=(int)s[i]-48;

           push(n);
       }



    }
   //printf("%d\n",arr[top-1]);
    //printf("%d",arr[0]);

    printf("\n\n\n\t\tValue of Expression: %d\n\n",arr[0]);


   return 0;
}
