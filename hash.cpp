#include <bits/stdc++.h>
using namespace std;

unsigned long long int hash_string(char s[0])
{
     unsigned long long int hash =0;
     int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        hash = hash * 1000097  +  (int)s[i];
        hash=hash%900071771717;
    }
    return hash;
}


int main()
{
    char s[1000];
    char s1[1000];

    printf("Enter a string: ");

    scanf("%s",s);

    unsigned long long int x= hash_string(s);
    system("cls");
    printf("Hash function returned as %llu",x);
    printf("\n\n");
    printf("Enter the string again: ");

    scanf("%s",s1);

    unsigned long long int y=hash_string(s1);

            system("cls");

        printf("Hash function returned as %llu",y);
    printf("\n\n");


    if(x==y) printf("Strings matched\n");

    else
        printf("Strings not matched\n");

return 0;
}
