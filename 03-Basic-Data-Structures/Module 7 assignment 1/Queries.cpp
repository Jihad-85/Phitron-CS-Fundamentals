#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int size_of_sll(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print_sll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


void delete_at_any_position(Node*& head, Node*& tail, int idx)
{
    if (head == NULL) 
    {
        return;
    }


    else if (idx == 0)
    {
        Node* temp = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete temp;
        return;
    }


    Node* temp = head;
    for (int i = 0; i <idx-1; i++)
    {
        temp = temp->next;
    }


    Node* del = temp->next;
    temp->next = del->next;


    if (del == tail)
    {
        tail = temp;
        delete del; 
    }
        
}




int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int query;
    cin >> query;
    while (query--)
    {
        int x, v;
        cin >> x >> v;

        int sz = size_of_sll(head1); 

       if (x == 2 && (v < 0 || v >= sz))
       {
        print_sll(head1);
        continue;
       }
        else
        {
            
            if (x == 0)
            {
               
                insert_at_head(head1, tail1, v);

                print_sll(head1);
            }
            else if (x == 1)
            {
               
                insert_at_tail(head1, tail1, v);

                print_sll(head1);
            }
            else if (x == 2)
            {   
        
                delete_at_any_position(head1,tail1, v);
                
                print_sll(head1);
            }




        }



    }




    return 0;
}