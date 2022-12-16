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

void deleteNode(int item){
    if(start == NULL)
        printf("The list is underflow\n");
    else{
        node *loc, *locp = NULL;
        loc = start;
        while(1){
            if(loc->next == NULL) break;
            if(loc->info != item){
                locp = loc;
                loc = loc->next;
            }
            else break;
        }
        // it is for any data within the list
        if(loc->info == item && locp != NULL)
            locp->next = loc->next;
        // it is for the starting data
        else if(loc->info == item && locp == NULL)
            start = loc->next;
        // it is for any data that is not in the list
        else
            printf("Your number did not match\n");
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
    printf("Enter a number to delete : \n");
    scanf("%d", &x);
    deleteNode(x);
    printf("Now the elements are printing : \n");
    p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    return 0;
}


