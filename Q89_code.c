//Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    printf("Enter a character to count: ");
    scanf(" %c", &ch);  

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
