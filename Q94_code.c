//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int main() {
    char sentence[MAX_LEN];
    char longestWord[MAX_LEN];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);  

    int i = 0, wordStart = 0, wordLength = 0;

    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\n' && ch != '\0') {
            
            wordLength++;
        } else {
            
            if (wordLength > maxLength) {
                maxLength = wordLength;
                strncpy(longestWord, &sentence[wordStart], wordLength);
                longestWord[wordLength] = '\0';  
            }

            
            wordStart = i + 1;
            wordLength = 0;

            
            if (ch == '\0' || ch == '\n') {
                break;
            }
        }

        i++;
    }

    printf("The longest word is: \"%s\"\n", longestWord);
    printf("Length: %d\n", maxLength);

    return 0;
}
