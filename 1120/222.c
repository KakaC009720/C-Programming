#include <stdio.h>
#include<stdbool.h>

bool is_palindrome()
{
    char a[100]={0},ch;
    int i=0,c=0,j;
    while((ch=toupper(getchar()))!='\n')
    {
        if(isalpha(ch))
        {
        a[i]=ch;
        i++;
        }
        c=i;
    }
    i=0;
    for(j=c-1;j>0;j--)
    {
     if(a[i]!=a[j])
     {
         break;
     }
     i++;
    }
    if(j==0)
    {
      return true;
    }else{return false;}

}

int main()
{
    if(is_palindrome())
    {
        printf("Palindrome\n");
    }else{printf("Not a palindrome\n");}




    return 0;
}
