#include <stdio.h>


struct Student {
    int id;
    float marks;
    char name[20];
};

int main() {
    struct Student s1 = {101, 88.5, "Alice"};
    struct Student *ptr;

    
    ptr = &s1;

    
    ptr->id = 202;
    ptr->marks = 92.7;
    
    
    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
