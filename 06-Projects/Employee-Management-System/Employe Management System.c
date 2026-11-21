#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee {
    int id;
    char name[50];
    float salary;
    struct Employee* left;
    struct Employee* right;
};


struct Employee* root = NULL;


struct HistoryNode {
    int id;
    struct HistoryNode* next;
};

struct HistoryNode* historyHead = NULL;

void pushHistory(int id) {
    struct HistoryNode* newNode = (struct HistoryNode*)malloc(sizeof(struct HistoryNode));
    newNode->id = id;
    newNode->next = historyHead;
    historyHead = newNode;
}

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


struct LeaveNode {
    int id;
    int daysRequested;
    struct LeaveNode* next;
};


struct LeaveNode* leaveFront = NULL;
struct LeaveNode* leaveRear = NULL;


void requestLeave(int id, int days) {
    struct LeaveNode* newNode = (struct LeaveNode*)malloc(sizeof(struct LeaveNode));
    newNode->id = id;
    newNode->daysRequested = days;
    newNode->next = NULL;

    if (leaveRear == NULL) {
        leaveFront = leaveRear = newNode;
        printf("Leave request for Employee %d (%d days) is first in line.\n", id, days);
        return;
    }

    leaveRear->next = newNode;
    leaveRear = newNode;
    printf("Leave request for Employee %d (%d days) added to the queue.\n", id, days);
}


void processLeave() {
    if (leaveFront == NULL) {
        printf("No pending leave requests. The queue is empty.\n");
        return;
    }

    struct LeaveNode* temp = leaveFront;
    printf("Processing Leave Request - Employee ID: %d wants %d days off.\n", temp->id, temp->daysRequested);
    printf("Status: APPROVED (Removed from queue).\n");

    leaveFront = leaveFront->next;

    if (leaveFront == NULL) {
        leaveRear = NULL;
    }

    free(temp);
}


void displayLeaveQueue() {
    if (leaveFront == NULL) {
        printf("Pending Leave Requests: [None]\n");
        return;
    }

    printf("Pending Leave Requests (Front to Back):\n");
    struct LeaveNode* temp = leaveFront;
    int position = 1;
    while (temp != NULL) {
        printf(" %d. Employee ID: %d | Days: %d\n", position, temp->id, temp->daysRequested);
        temp = temp->next;
        position++;
    }
}



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

void displayInOrder(struct Employee* node) {
    if (node != NULL) {
        displayInOrder(node->left);
        printf("ID: %d | Name: %s | Salary: %.2f\n", node->id, node->name, node->salary);
        displayInOrder(node->right);
    }
}

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

struct Employee* minValueNode(struct Employee* node) {
    struct Employee* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

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

void freeLeaveQueue() {
    struct LeaveNode* temp;
    while (leaveFront != NULL) {
        temp = leaveFront;
        leaveFront = leaveFront->next;
        free(temp);
    }
    leaveRear = NULL;
}

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



int main() {
    int choice, tempId, leaveDays;
    loadFromFile();

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees (Sorted by ID)\n");
        printf("3. Search Employee by ID\n");
        printf("4. Show Recently Added IDs (Stack)\n");
        printf("5. Delete Employee\n");
        printf("6. Update Employee\n");
        printf("7. Submit Leave Request (Queue)\n");
        printf("8. Process Next Leave Request (Dequeue)\n");
        printf("9. View Pending Leave Requests\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addEmployee();
        } else if (choice == 2) {
            if (root == NULL) printf("Database is empty.\n");
            else {
                printf("--- Employee List ---\n");
                displayInOrder(root);
            }
        } else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &tempId);
            searchEmployee(root, tempId);
        } else if (choice == 4) {
            showHistory();
        } else if (choice == 5) {
            printf("Enter ID to delete: ");
            scanf("%d", &tempId);
            root = deleteEmployee(root, tempId);
            printf("If the ID existed, it has been removed.\n");
        } else if (choice == 6) {
            printf("Enter ID to update: ");
            scanf("%d", &tempId);
            updateEmployee(root, tempId);
        } else if (choice == 7) {
            printf("Enter Employee ID requesting leave: ");
            scanf("%d", &tempId);
            printf("How many days of leave? ");
            scanf("%d", &leaveDays);
            requestLeave(tempId, leaveDays);
        } else if (choice == 8) {
            processLeave();
        } else if (choice == 9) {
            displayLeaveQueue();
        } else if (choice == 10) {
            FILE* fp = fopen("employees.txt", "w");
            saveToFile(root, fp);
            fclose(fp);


            freeBST(root);
            freeHistory();
            freeLeaveQueue();

            printf("Data saved and memory freed. Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
