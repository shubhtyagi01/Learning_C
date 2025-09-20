//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*


#include <stdio.h>

int main() {
    
    int group_counts[] = {1, 3, 5, 3, 1};
    int num_groups = sizeof(group_counts) / sizeof(group_counts[0]);

    for (int i = 0; i < num_groups; i++) {
        for (int j = 0; j < group_counts[i]; j++) {
            printf("*\n");
        }
        if (i != num_groups - 1) {
            printf("\n"); 
        }
    }

    return 0;
}
