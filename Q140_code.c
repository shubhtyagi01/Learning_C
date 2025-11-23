//Define a struct with enum Gender and print person's gender.


#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Alex", MALE};
    struct Person p2 = {"Emma", FEMALE};
    struct Person p3 = {"Jordan", OTHER};

    printf("%s's gender: ", p1.name);
    if (p1.gender == MALE)      printf("Male\n");
    else if (p1.gender == FEMALE) printf("Female\n");
    else                         printf("Other\n");

    printf("%s's gender: ", p2.name);
    if (p2.gender == MALE)      printf("Male\n");
    else if (p2.gender == FEMALE) printf("Female\n");
    else                         printf("Other\n");

    printf("%s's gender: ", p3.name);
    if (p3.gender == MALE)      printf("Male\n");
    else if (p3.gender == FEMALE) printf("Female\n");
    else                         printf("Other\n");

    return 0;
}
