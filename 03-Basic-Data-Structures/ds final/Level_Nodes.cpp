#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    
    if(val == -1)  root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    { 
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
 

void print_lvl_nods(Node* root, int target_level)
   {
    if (root == NULL)
    
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    vector<int> results;



    while (!q.empty()) 
    {
        pair<Node*, int> parent = q.front();

        Node* node = parent.first;
        int level = parent.second;
        q.pop();

        if (level = target_level) 
        {
        results.push_back(node->val);
        }

        if (node->left){
         q.push({node->left, level + 1});
        }
        
        if (node->right) 
        {
            q.push({node->right, level + 1});
        }
    }

    if (results.empty()) {
        cout << "Invalid" << endl;
    } 
    else {
        for (int i = 0; i < results.size(); i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }
}

int main() {

    Node* root = input_tree();
    int l;

    cin >> l;

    print_lvl_nods(root, l);



    return 0;
}