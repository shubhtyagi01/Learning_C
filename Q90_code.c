//Toggle case of each character in a string.


#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[1000];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Toggled string: %s", str);

    return 0;
}
