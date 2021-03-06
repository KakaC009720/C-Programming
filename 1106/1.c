#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    bool properly_nested = true;
    char ch, i;
    while (properly_nested && (ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '(':
        case '{':
            push(ch);
            break;
        case ')':
        case '}':
            if (!is_empty() )
            {
                i = pop();
                if( (i!='(' &&  ch==')') ||  (i!='{' &&  ch=='}')   )
                    properly_nested = false;
            }
            else
                properly_nested = false;
            break;
        default:
            break;
        }
    }

    if (properly_nested && is_empty() )
        printf("Yes\n");
    else
        printf("No\n");


  return 0;
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char ch)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = ch;
}

char pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];

  return '\0'; /* prevents compiler warning due to stack_underflow() call */
}

void stack_overflow(void)
{
  printf("Stack overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Stack underflow\n");
  exit(EXIT_FAILURE);
}
