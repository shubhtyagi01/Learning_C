// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int num, rem, count=1;
    int binary[64];
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i=1; num!=0; i++) {
        rem=num/2;
        if (num%2==0) {
            binary[i]=0;
        } else {
            binary[i]=1;
        } count++;
        num/=2;
    }
    printf("Binary form: ");
    for (int j=count-1; j>0; j--) {
        printf("%d", binary[j]);
    } printf("\n");
    return 0;
}