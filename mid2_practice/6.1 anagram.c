#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
bool are_anagrams(char word1[], char word2[]);
int main(void)
{
    char word1[100]={0}, word2[100]={0}, ch;
    while((ch=getchar())!='\n')
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            word1[ch-97]=word1[ch-97]+1;
        }
    }
    while((ch=getchar())!='\n')
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            word2[ch-97]=word2[ch-97]+1;
        }
    }
    if(are_anagrams(word1, word2))
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }
    return 0;
}
bool are_anagrams(char word1[], char word2[])
{
    int i=0, x;

    for(i=0;i<26;i++)
    {
        if(word1[i] != word2[i])
        {
            return false;
        }
    }
    return true;
}
