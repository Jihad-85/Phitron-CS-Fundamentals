#include<bits/stdc++.h>
using namespace std;

class Node {
public:

    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int list_size(Node* head)
 {
    int count = 0;
      while (head != NULL) {
          count++;
        head = head->next;
    }

    return count;
  }

void print_forward(Node* head) 
{
    
    cout << "L -> ";

       while (head != NULL) {
          cout << head->val << " ";
        head = head->next;
     }

    cout << endl;
  }

 void print_backward(Node* tail) 
 {

    cout << "R -> ";
       while (tail != NULL) {
        cout << tail->val << " ";
        tail = tail->prev;
    }
     cout << endl;

}

void insert_at_head(Node*& head, Node*& tail, int val)
 {
    Node* newNode = new Node(val);


    if (head == NULL)
     {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);

    if (tail == NULL) 
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any(Node* head, int x, int v)
   {
       Node* newNode = new Node(v);
       Node* temp = head;

     for (int i = 1; i < x; i++)
     {
        temp = temp->next;
    }


    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;


}

int main() {


    int q;
    cin >> q;
    Node* head = NULL;
    Node* tail = NULL;

    while (q--) {
        int x, v;
        cin >> x >> v;

        int sz = list_size(head);

        if (x > sz)
         {
            cout << "Invalid" << endl;
        } 
        else 
           {
            if (x == 0) {
                insert_at_head(head, tail, v);
            } else if (x == sz) {
                insert_at_tail(head, tail, v);
            } else {
                insert_at_any(head, x, v);
            }
            print_forward(head);
            print_backward(tail);
        }
     }
    return 0;
}