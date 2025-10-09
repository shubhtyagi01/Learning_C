//Reverse a string.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';  // Replace newline with null terminator
            break;
        }
        length++;
    }

    
    int start = 0;
    int end = length - 1;
    while (start < end) {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
