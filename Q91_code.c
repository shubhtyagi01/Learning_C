//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    int i, j = 0;
    int len = strlen(str);
    char result[len + 1]; 

    for (i = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    strcpy(str, result); 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
