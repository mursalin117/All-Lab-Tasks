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

void insertNode(int item){
    if(start == NULL){
        start = getNode(start, item);
        ptr = start;
    }
    else{
        node *loc, *locp = NULL;
        loc = start;
        while(1){
            if(loc->next == NULL) break;
            if(loc->info < item){
                locp = loc;
                loc = loc->next;
            }
            else break;
        }
        // it is possible when the number is between the list
        if(loc->info >= item && locp != NULL){
            ptr = getNode(NULL, item);
            locp->next = ptr;
            ptr->next = loc;
        }
        // it is only possible when starting element is greater than the item
        else if(loc->info >= item && locp == NULL){
            ptr = getNode(NULL, item);
            ptr->next = start;
            start = ptr;
        }
        else{
            ptr = getNode(ptr, item);
        }
    }
}

int main(){
    int i, x;
    printf("Enter the elements to insert : \n");
    for(i = 0; ; i++){
        scanf("%d", &x);
        if(x > -1){
            if(i == 0) { start = getNode(start, x); ptr = start; }
            else ptr = getNode(ptr, x);
        }
        else{
            printf("Terminated\n");
            break;
        }
    }
    printf("Now the elements are printing : \n");
    node *p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    printf("Enter the number to insert : \n");
    scanf("%d", &x);
    if(x > -1)
        insertNode(x);
    else
        printf("Terminated\n");
    printf("Now the elements are printing : \n");
    p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    return 0;
}

