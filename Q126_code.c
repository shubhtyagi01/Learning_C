//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.


#include <stdio.h>

int main() {
    char filename[256];
    FILE *fp;
    int ch;

    printf("Enter the filename: ");
    scanf("%255s", filename);  

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file \"%s\".\n", filename);
        return 1;
    }

    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
