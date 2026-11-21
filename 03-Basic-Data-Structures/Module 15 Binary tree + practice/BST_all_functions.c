  #include <stdio.h>
#include <stdlib.h>

// BST Node Structure
struct treeNode {
    int data;
    struct treeNode *left;
    struct treeNode *right;
};

typedef struct treeNode Node;

//Create Node Function
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// (Insert Operation)
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }

    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    else {
        printf("Value %d already exists.\n", value);
    }

    return root;      
}

//  (Search Operation)
Node* search(Node* t, int key) {
    if (t == NULL || t->data == key) {
        return t;
    }

    if (key < t->data) {
        return search(t->left, key);
    }
    else {
        return search(t->right, key);
    }
}

// (findMinNode Helper Function)
Node* findMinNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

//  (Delete Operation)
Node* deleteNode(Node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else { // key == root->data )

        // Case 1: No child node / only right child
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        // Case 2: only left child
        else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: two child
        // find In-order Successor from right subtree
        Node* temp = findMinNode(root->right);

        root->data = temp->data;

        // delete In-order Successor node
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
//  (Update Operation)
Node* update(Node* root, int oldValue, int newValue) {
    Node* temp = search(root, oldValue);

    if (temp == NULL) {
        printf("Value %d not found for update.\n", oldValue);
        return root;
    }

    root = deleteNode(root, oldValue);

    return insert(root, newValue);
}
// (Display/Traversal Operations)

// (Sorted Order)
void inorder(Node* t) {
    if (t != NULL) {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}

void preorder(Node* t) {
    if (t != NULL) {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void postorder(Node* t) {
    if (t != NULL) {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }
}


int main() {
    Node *root = NULL;

    // ---  Insert Operation ---
    printf("--- Inserting values (10, 5, 15, 2, 7, 12, 17) ---\n");
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 17);

    /* Expected BST structure:
            10
           /  \
          5    15
         / \  / \
        2  7 12 17
    */

    // ---  Display/Traversal Operations ---
    printf("\n--- Display Operations (Traversal) ---\n");
    printf(" In-order (Sorted): ");
    inorder(root);
    printf("\n Pre-order: ");
    preorder(root);
    printf("\n Post-order: ");
    postorder(root);

    // ---  Search Operation ---
    printf("\n\n--- Search Operation ---\n");
    int key1 = 7, key2 = 99;

    Node *search_result1 = search(root, key1);
    if (search_result1 != NULL) {
        printf(" Value %d found in the BST.\n", key1);
    } else {
        printf(" Value %d not found.\n", key1);
    }

    Node *search_result2 = search(root, key2);
    if (search_result2 != NULL) {
        printf(" Value %d found in the BST.\n", key2);
    } else {
        printf(" Value %d not found.\n", key2);
    }

    // ---  Delete Operation ---
    printf("\n--- Delete Operation ---\n");
    printf(" Deleting 2 (Leaf node):\n");
    root = deleteNode(root, 2);
    printf(" New In-order: ");
    inorder(root);

    printf("\n Deleting 15 (Node with 2 children):\n");
    root = deleteNode(root, 15);
    printf(" New In-order: ");
    inorder(root);

    // ---  Update Operation ---
    printf("\n\n--- Update Operation (5 -> 6) ---\n");
    root = update(root, 5, 6);
    printf(" New In-order: ");
    inorder(root);


    return 0;
}
