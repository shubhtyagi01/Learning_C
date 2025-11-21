//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    int n;

    
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n",
                students[i].name,
                students[i].roll,
                students[i].marks);
    }

    fclose(file);

    
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");

    struct Student s;
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    return 0;
}
