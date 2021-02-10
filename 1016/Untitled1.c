#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i, x;
    char ch, n1[26]={0}, n2[26]={0};

    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch = tolower(ch);
            n1[ch-97] = n1[ch-97]+1;
        }
    }

    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch = tolower(ch);
            n2[ch-97] = n2[ch-97]+1;
        }
    }

    for(i=0;i<26;i++){
        if(n1[i] != n2[i]){
            x = 1;
        }
    }

    if(x == 1)
        printf("The words are not anagrams.");
    else
        printf("The words are anagrams.");

    return 0;

}
