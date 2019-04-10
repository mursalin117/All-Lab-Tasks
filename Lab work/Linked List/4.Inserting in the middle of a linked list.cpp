// This code insert any elements in the middle/last

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Node node;

struct Node{
    int info;
    struct Node *next;
};

node *start = NULL, *ptr;

 node* getNode(node *root, int data){
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

    if(root != NULL)
        root->next = newNode;
    return newNode;
}

void insertNode(int item, int data){
    if(start == NULL){
        printf("Sorry, no list has been created\n");
        return;
    }
    else{
        node *loc;
        loc = start;
        while(loc != NULL){
            if(loc->info != data)
                loc = loc->next;
            else break;
        }
        if(loc->info == data){
            ptr = getNode(NULL, item);
            ptr->next = loc->next;
            loc->next = ptr;
        }
    }
}

int main()
{
    int i, x;
    printf("Enter the elements to insert : \n");
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
    node *p = start;
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    printf("Enter the number to insert and after which to insert : \n");
    scanf("%d%d", &x, &i);
    if(x > -1)
        insertNode(x, i);
    else printf("Terminated\n");
    printf("Now the elements are printing :\n");
    p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    return 0;
}


