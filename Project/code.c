/*
Contact Management System
• Description: Develop a simple contact book that stores names, phone numbers, and email addresses.
• Features: o Add new contacts, display all contacts, and search for a contact by name.
• Save contacts to a file and retrieve them when the program restarts.
• Concepts Used: Structures for contact details, file handling to save contact data persistently.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum number of contacts
#define MAX 100

// Define the Contact structure
struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

// Function to add a new contact
void add_contact(struct Contact contacts[], int *num_contacts) {
    if (*num_contacts >= MAX) {
        printf("Contact book is full!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", contacts[*num_contacts].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*num_contacts].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*num_contacts].email);
    (*num_contacts)++;
    printf("Contact added successfully!\n");
}

// Function to display all contacts
void display_contacts(struct Contact contacts[], int num_contacts) {
    if (num_contacts == 0) {
        printf("No contacts to display.\n");
        return;
    }
    for (int i = 0; i < num_contacts; i++) {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
        printf("---------------------------\n");
    }
}

// Function to search for a contact by name
void search_contact(struct Contact contacts[], int num_contacts, char name[]) {
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Contact not found.\n");
}

// Function to save contacts to a file
void save_contacts(struct Contact contacts[], int num_contacts) {
    FILE *file = fopen("contacts.dat", "wb");
    if (file == NULL) {
        printf("Unable to save contacts.\n");
        return;
    }
    fwrite(contacts, sizeof(struct Contact), num_contacts, file);
    fclose(file);
    printf("Contacts saved successfully!\n");
}

// Function to load contacts from a file
void load_contacts(struct Contact contacts[], int *num_contacts) {
    FILE *file = fopen("contacts.dat", "rb");
    if (file != NULL) {
        *num_contacts = fread(contacts, sizeof(struct Contact), MAX, file);
        fclose(file);
        printf("Contacts loaded successfully!\n");
    }
}

int main() {
    struct Contact contacts[MAX];
    int num_contacts = 0;
    int choice;
    char name[50];

    // Load contacts from file when the program starts
    load_contacts(contacts, &num_contacts);

    while (1) {
        // Display menu
        printf("=============================\n");
        printf("    Contact Management System    \n");
        printf("=============================\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Save and Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_contact(contacts, &num_contacts);
                break;
            case 2:
                display_contacts(contacts, num_contacts);
                break;
            case 3:
                printf("Enter the name to search: ");
                scanf("%s", name);
                search_contact(contacts, num_contacts, name);
                break;
            case 4:
                save_contacts(contacts, num_contacts);
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

/*
OUTPUT
=============================
    Contact Management System    
=============================
1. Add Contact
2. Display Contacts
3. Search Contact
4. Save and Exit

Enter your choice: 1
Enter name: Faiyaz
Enter phone number: 9004171744
Enter email: faiyaz@gmail.com
Contact added successfully!
=============================
    Contact Management System    
=============================
1. Add Contact
2. Display Contacts
3. Search Contact
4. Save and Exit

Enter your choice: 2
Name: Faiyaz
Phone: 9004171744
Email: faiyaz@gmail.com
---------------------------
=============================
    Contact Management System    
=============================
1. Add Contact
2. Display Contacts
3. Search Contact
4. Save and Exit

Enter your choice: 4
Contacts saved successfully!
Goodbye!
*/
