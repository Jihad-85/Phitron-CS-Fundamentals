#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Struct and BST Node for the Main Employee Database
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Employee* left;
    struct Employee* right;
};

// Global root for the Employee BST
struct Employee* root = NULL;

// 2. Struct for the Linked List (Used as a Stack for history)
struct HistoryNode {
    int id;
    struct HistoryNode* next;
};

// Head pointer for our Linked List
struct HistoryNode* historyHead = NULL;

// Add a new ID to the front of the Linked List (Push)
void pushHistory(int id) {
    struct HistoryNode* newNode = (struct HistoryNode*)malloc(sizeof(struct HistoryNode));
    newNode->id = id;
    newNode->next = historyHead;
    historyHead = newNode;
}

// Traverse and print the Linked List
void showHistory() {
    if (historyHead == NULL) {
        printf("No recent history.\n");
        return;
    }
    printf("Recently added IDs (Linked List Stack): ");
    struct HistoryNode* temp = historyHead;
    while (temp != NULL) {
        printf("%d ", temp->id);
        temp = temp->next;
    }
    printf("\n");
}

// 3. BST Insert Function with Duplicate Check
struct Employee* insert(struct Employee* node, int id, char name[], float salary) {
    if (node == NULL) {
        struct Employee* temp = (struct Employee*)malloc(sizeof(struct Employee));
        temp->id = id;
        strcpy(temp->name, name);
        temp->salary = salary;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (id < node->id) {
        node->left = insert(node->left, id, name, salary);
    } else if (id > node->id) {
        node->right = insert(node->right, id, name, salary);
    } else {
        printf("Employee with ID %d already exists!\n", id);
    }
    return node;
}

// Function to take input and add to the system
void addEmployee() {
    int id;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name (No spaces): ");
    scanf("%s", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    root = insert(root, id, name, salary);
    pushHistory(id);
    printf("Employee Added Successfully!\n");
}

// 4. Inorder traversal to display sorted by ID
void displayInOrder(struct Employee* node) {
    if (node != NULL) {
        displayInOrder(node->left);
        printf("ID: %d | Name: %s | Salary: %.2f\n", node->id, node->name, node->salary);
        displayInOrder(node->right);
    }
}

// 5. Search the BST for a specific ID
void searchEmployee(struct Employee* node, int id) {
    if (node == NULL) {
        printf("Employee not found.\n");
        return;
    }
    if (node->id == id) {
        printf("Found - ID: %d | Name: %s | Salary: %.2f\n", node->id, node->name, node->salary);
        return;
    }
    if (id < node->id) {
        searchEmployee(node->left, id);
    } else {
        searchEmployee(node->right, id);
    }
}

// 6. Update Employee
void updateEmployee(struct Employee* node, int id) {
    if (node == NULL) {
        printf("Employee not found.\n");
        return;
    }
    if (node->id == id) {
        printf("Enter new name: ");
        scanf("%s", node->name);
        printf("Enter new salary: ");
        scanf("%f", &node->salary);
        printf("Employee updated successfully!\n");
        return;
    }
    if (id < node->id) {
        updateEmployee(node->left, id);
    } else {
        updateEmployee(node->right, id);
    }
}

// Helper function to find the smallest node in a right subtree
struct Employee* minValueNode(struct Employee* node) {
    struct Employee* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// 7. Delete Employee
struct Employee* deleteEmployee(struct Employee* root, int id) {
    if (root == NULL) return root;
    if (id < root->id) {
        root->left = deleteEmployee(root->left, id);
    } else if (id > root->id) {
        root->right = deleteEmployee(root->right, id);
    } else {
        if (root->left == NULL) {
            struct Employee* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Employee* temp = root->left;
            free(root);
            return temp;
        }
        struct Employee* temp = minValueNode(root->right);
        root->id = temp->id;
        strcpy(root->name, temp->name);
        root->salary = temp->salary;
        root->right = deleteEmployee(root->right, temp->id);
    }
    return root;
}

// 8. Free Memory
void freeBST(struct Employee* node) {
    if (node == NULL) return;
    freeBST(node->left);
    freeBST(node->right);
    free(node);
}

void freeHistory() {
    struct HistoryNode* temp;
    while (historyHead != NULL) {
        temp = historyHead;
        historyHead = historyHead->next;
        free(temp);
    }
}

// 9. File Save & Load
void saveToFile(struct Employee* node, FILE* fp) {
    if (node == NULL) return;
    fprintf(fp, "%d %s %.2f\n", node->id, node->name, node->salary);
    saveToFile(node->left, fp);
    saveToFile(node->right, fp);
}

void loadFromFile() {
    FILE* fp = fopen("employees.txt", "r");
    if (!fp) return;
    int id; char name[50]; float salary;
    while (fscanf(fp, "%d %s %f", &id, name, &salary) != EOF) {
        root = insert(root, id, name, salary);
    }
    fclose(fp);
}

// 10. Main Function
int main() {
    int choice, searchId, deleteId, updateId;
    loadFromFile(); // Load data at start

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees (Sorted by ID)\n");
        printf("3. Search Employee by ID\n");
        printf("4. Show Recently Added IDs (Linked List)\n");
        printf("5. Delete Employee\n");
        printf("6. Update Employee\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addEmployee();
        } else if (choice == 2) {
            if (root == NULL) {
                printf("Database is empty.\n");
            } else {
                printf("--- Employee List ---\n");
                displayInOrder(root);
            }
        } else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);
            searchEmployee(root, searchId);
        } else if (choice == 4) {
            showHistory();
        } else if (choice == 5) {
            printf("Enter ID to delete: ");
            scanf("%d", &deleteId);
            root = deleteEmployee(root, deleteId);
            printf("If the ID existed, it has been removed.\n");
        } else if (choice == 6) {
            printf("Enter ID to update: ");
            scanf("%d", &updateId);
            updateEmployee(root, updateId);
        } else if (choice == 7) {
            FILE* fp = fopen("employees.txt", "w");
            saveToFile(root, fp);
            fclose(fp);
            freeBST(root);
            freeHistory();
            printf("Data saved and memory freed. Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
