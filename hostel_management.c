#include <stdio.h>
#include <string.h>

// Define structure for student
struct Student {
    char name[50];
    char phone_number[15];
    char address[100];
    char father_phone_number[15];
    int room_number;
};

// Function prototypes
void insertStudent(struct Student students[], int n);
void createPaymentList(struct Student students[], int n);

int main() {
    int n;
    printf("Enter the total numbers of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Insert student details
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        insertStudent(students, i);
    }

    // Create payment list
    createPaymentList(students, n);

    return 0;
}

// Function to insert student details
void insertStudent(struct Student students[], int index) {
    printf("Enter student name: ");
    getchar(); // Clear input buffer
    fgets(students[index].name, 50, stdin);
    students[index].name[strcspn(students[index].name, "\n")] = 0; // Remove newline character

    printf("Enter student phone number: ");
    scanf("%s", students[index].phone_number);

    printf("Enter student address: ");
    getchar(); // Clear input buffer
    fgets(students[index].address, 100, stdin);
    students[index].address[strcspn(students[index].address, "\n")] = 0; // Remove newline character

    printf("Enter father's phone number: ");
    scanf("%s", students[index].father_phone_number);

    // Check and insert unique hostel room number
    int room_number;
    printf("Enter hostel room number: ");
    scanf("%d", &room_number);

    int isUnique = 1;
    for (int i = 0; i < index; i++) {
        if (students[i].room_number == room_number) {
            isUnique = 0;
            printf("Room number already assigned. Please enter a unique room number.\n");
            break;
        }
    }

    if (isUnique)
        students[index].room_number = room_number;
    else
        insertStudent(students, index);
}

// Function to create payment list
void createPaymentList(struct Student students[], int n) {
    printf("\nList of payments:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i].name);
        // Add payment details or other processing here
    }
}
