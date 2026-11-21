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



 class myStack {
 public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;

        Node* newNode = new Node(val);

        if (head == NULL)
         {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

    }

    void pop() {

        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;


        if (tail == NULL) head = NULL;
        else tail->next = NULL;
        delete deleteNode;


    }

    int top() { return tail->val; }
    int size() { return sz; }
};

class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {

        sz--;
        Node* deleteNode = head;
        head = head->next;

        if (head == NULL) tail = NULL;
        else head->prev = NULL;

        delete deleteNode;

      }

    int front() { return head->val; }

    int size() { return sz; }
};

int main() {

    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;

    for (int i = 0; i < n; i++) 
    {
        int val; cin >> val;
        s.push(val);

       }

 for (int i = 0; i < m; i++) {
        int val; cin >> val;
        q.push(val);
    }

    if (n != m) 
    {
        cout << "NO" << endl;
        return 0;
    }


bool flag = true;

    while (s.size() > 0) {
        if (s.top() != q.front()) {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }


    if (flag) cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}