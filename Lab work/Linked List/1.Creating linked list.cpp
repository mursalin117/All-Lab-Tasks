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

    if(root != NULL)
        root->next = newNode;
    return newNode;
}

int main()
{
    int i, x;
    printf("Enter the elements to insert : \n");
    node *start = NULL, *ptr;
    for(i = 0; ; i++)
    {
        scanf("%d", &x);
        if(x > -1)
        {
            if(i == 0) { start = getNode(start, x); ptr = start; }
            else ptr = getNode(ptr, x);
        }
        else
        {
            printf("Terminated\n");
            break;
        }
    }
    printf("Now the elements are printing : \n");
    ptr = start;
    while(ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
    cout << endl;
    return 0;
}

