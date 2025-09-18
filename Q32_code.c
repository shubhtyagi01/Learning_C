//Ques32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int num, rem, rev=0, temp;
    printf("Enter the no. to be checked: ");
    scanf("%d", &num);
    temp=num;
    for (int i=1; temp>0; i++) {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    } if (rev==num) {
        printf("%d is a Palindrome no.\n", num);
    } else {printf("%d is not a Palindrome no.\n", num);}
    return 0;
}