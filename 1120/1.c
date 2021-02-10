#include <stdio.h>
#include <string.h>

#define LEN 20

void get_current_word(void);
void initialize_words(void);
void compare_words(void);

char smallest_word[LEN+1];
char largest_word[LEN+1];
char current_word[LEN+1];

int main(void)
{
    initialize_words();
    while(strlen(current_word)!=4)
    {
        compare_words();
    }

    printf("Smallest word:%s\n", smallest_word);
    printf("Largest_word:%s\n", largest_word);

    return 0;
}

void get_current_word(void)
{
    scanf("%s", current_word);
}

void initialize_words(void)
{
    get_current_word();
    strcpy(smallest_word, current_word);
    strcpy(largest_word, current_word);
}

void compare_words(void)
{
    get_current_word();
    if(strcmp(current_word, smallest_word)<0)
        strcpy(smallest_word, current_word);
    else if(strcmp(current_word, largest_word)>0)
        strcpy(largest_word, current_word);
}



