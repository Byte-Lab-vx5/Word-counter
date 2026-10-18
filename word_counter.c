#include<stdio.h>
#include<string.h>

int count_word(char *words);

int main(){
    char word[200];
    printf("Enter word: ");
    scanf(" %[^\n]", word);
    int counter = count_word(word);
    printf("\nThere are %d words in: %s\n", counter, word);
}


int count_word(char *words){
    int lent = strlen(words);
    int i, count = 0;
    char period[] = " .,:;\n\t";

    for(int i=0; i<lent; i++){
        while(i<lent){
            if(strchr(period, words[i])!=NULL)
                break;
            i++;
        }
        //update count if any of the characters in period is found in word.
        count++;


        while(i<lent){
            if(strchr(period, words[i])==NULL)
                break;
            i++;
        }
    }
    return count;
}