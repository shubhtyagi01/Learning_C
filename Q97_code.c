//Print the initials of a name.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char name[MAX_LEN];

    printf("Enter a name: ");
    fgets(name, MAX_LEN, stdin);

    
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Initials: ");

    
    if (name[0] != ' ') {
        printf("%c ", toupper(name[0]));
    }

    
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c ", toupper(name[i]));
        }
    }

    printf("\n");

    return 0;
}
