#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

struct Student students[100];
int count = 0;

void addStudent() {
    printf("Enter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Student Name: ");
    scanf("%s", students[count].name);

    count++;
    printf("Student Added Successfully!\n");
}

void viewStudents() {
    if (count == 0) {
        printf("No students found.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s\n",
               students[i].id,
               students[i].name);
    }
}

void searchStudent() {
    int id;
    printf("Enter Student ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Found: %s\n", students[i].name);
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}