//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000


void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[MAX_LEN];

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);

    int len = strlen(sentence);

    
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    int i = 0;
    while (i < len) {
        
        while (i < len && sentence[i] == ' ') {
            i++;
        }

        
        int start = i;

        
        while (i < len && sentence[i] != ' ') {
            i++;
        }

        int end = i - 1;

        
        reverse(sentence, start, end);
    }

    printf("Reversed words sentence: %s\n", sentence);

    return 0;
}


