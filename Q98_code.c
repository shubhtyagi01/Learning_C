//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {
    char name[MAX_LEN];
    char words[10][MAX_LEN]; 
    int wordCount = 0;

    printf("Enter a name: ");
    fgets(name, MAX_LEN, stdin);

    
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    
    char *token = strtok(name, " ");
    while (token != NULL) {
        strcpy(words[wordCount++], token);
        token = strtok(NULL, " ");
    }

    
    printf("Initials with surname: ");
    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }

    
    printf("%s\n", words[wordCount - 1]);

    return 0;
}
