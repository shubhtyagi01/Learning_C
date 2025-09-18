// Ques32: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int num, sum=0, rem, temp;
    printf("Enter the no. to be checked: ");
    scanf("%d", &num);
    temp=num;
    while (temp!=0) {
        rem=temp%10;
        sum+=pow(rem,3);
        temp/=10;
    }
    if (sum==num) {
        printf("%d is an Armstrong no.\n", num);
    } else {printf("%d is not an Armstrong no.\n", num);}
    return 0;
}