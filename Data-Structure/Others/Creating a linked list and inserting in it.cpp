#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Node node;

struct Node{
    int info;
    struct Node *next;
};

 node* getNode(node *root, int data){
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

    if(root == NULL)
        return newNode;
    node *ptr = root;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    return root;
}

int main()
{
    node *root = NULL;
    root = getNode(root, 10);
    getNode(root, 5);
    getNode(root, 12);
    getNode(root, 15);

    node *p = root;
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}
