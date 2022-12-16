#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Node node;

struct Node
{
    int info;
    struct Node *next;
};

node *start = NULL, *ptr;

 node* getNode(node *root, int data)
 {
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

    if(root == NULL)
        return newNode;
    root->next = newNode;
    return newNode;
}

void deleteList(node *first, int indx)
{
    if(indx == 1) start = start->next;
    else if(indx < 1) printf("Invalid index!!!\n");
    else
    {
        node *current = first, *parrent;
        int coun = 0;
        while(current != NULL)
        {
            parrent = current;
            coun++;
            if(coun == indx-1)
            {
                //cout << coun << endl;
                //cout << parrent->info << "    " << current->info << endl;
                current = current->next;
                parrent->next = current->next;
                break;
            }
            else current = current->next;
        }
        if(coun != indx-1) printf("Invalid Index!!!\n");
    }
}

int main()
{
    int n, i, x;
    printf("Enter the elements to insert : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x > 0)
        {
            if(i == 0) { start = getNode(start, x); ptr = start; }
            else ptr = getNode(ptr, x);
        }
        else { printf("Terminated\n"); break; }
    }
    printf("Now the elements are printing : \n");
    ptr = start;
    while(ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }cout << endl;
    printf("Enter the index to delete :\n");
    int p;
    scanf("%d", &p);
    deleteList(start, p);
    printf("Now\n");
    ptr = start;
    while(ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }cout << endl;
    return 0;
}


