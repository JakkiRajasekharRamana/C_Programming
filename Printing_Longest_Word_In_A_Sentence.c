#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a sentence: ");
    
    char sentence[100];
    int c, i = 0;
    
    while ((c = getchar()) != '\n' ) {
        sentence[i] = c;
        i++;
    }
    sentence[i] = '\0';

    char longestWord[20];
    char currentWord[20];
    int j = 0;
    int words = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            currentWord[j] = sentence[i];
            j++;
            currentWord[j] = '\0';
            if (j > words) {
                words = j;
                strcpy(longestWord, currentWord);
            }
        }
        else
         j = 0;
        
    }

    printf("The longest word is: %s\n", longestWord);

    return 0;
}

