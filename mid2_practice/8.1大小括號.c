#include <stdio.h>
#include <stdbool.h>

void push(char ch);
char pop(void);
char ch, contents[100];
int top=0, i;

int main(void)
{


    bool nested=true;
    while((ch=getchar())!='\n')
    {
        switch(ch)
        {
        case'(': case'{':
            push(ch);
            break;
        case')': case'}':
            if(top!=0)
            {
                i=pop();
                if( (i!='('&&ch==')') || (i!='{'&&ch=='}') )
                    nested=false;
                else
                {
                    nested=true;
                }
            }
            else
               nested=false;
            break;
        default:
            break;
        }
    }
    if(nested&&top==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

void push(char ch)
{
    contents[top++]=ch;
}

char pop(void)
{
    return contents[--top];
}
