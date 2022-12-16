#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct List node;

struct List{
    int info;
    struct List *next;
};

 node* getNode(node *root, int data){
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

    if(root == NULL)
        return newNode;
    root->next = newNode;
    return newNode;
}

int main()
{
    int n, i, x;
    printf("Enter the number of element to insert : \n");
    scanf("%d", &n);

    printf("Enter the element of the list : \n");
    node *start = NULL, *ptr;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(i == 0) { start = getNode(start, x); ptr = start; }
        else ptr = getNode(ptr, x);
    }
    printf("Now enter the element to search : \n");
    scanf("%d", &x);
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->info == x) { printf("Found!!!\n"); break; };
        ptr = ptr->next;
    }
    if(ptr == NULL) printf("Not found!!!\n");
    return 0;
}


