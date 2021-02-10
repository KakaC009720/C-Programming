#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 80

int read_line(char str[], int n);
bool is_palindrome(const char *messages);

int main(void)
{
  char msg[MSG_LEN];

  read_line(msg, MSG_LEN);

  if (is_palindrome(msg))
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

bool is_palindrome(const char *messages)
{
  const char *after = messages + strlen(messages), *before = messages;
  bool matched;

  for (; before < after; before++) {
    if (isalpha(*before)) {
      matched = false;
      for (; after >= before; after--) {
        if (isalpha(*after)) {
          if (toupper(*before) == toupper(*after))
            matched = true;
          after--;
          break;
        }
      }

      if (!matched) {
        return false;
      }
    }
  }

  return true;
}
