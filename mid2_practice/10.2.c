#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome();

int main(void)
{
    if(is_palindrome())
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not a palindrome.\n");
    }
    return 0;
}

bool is_palindrome()
{
    char a[100]={0}, ch;
    int i=0, j=0, c=0;

    while((ch=tolower(getchar()))!='\n')
    {
      if(isalpha(ch))
      {
          a[i]=ch;
          i++;
      }
    }
    c=i;
    i=0;
    for(j=c-1; j>0;j--)
    {
        if(a[j]!=a[i])
        {
            break;
        }
        i++;
    }

    if(j==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
