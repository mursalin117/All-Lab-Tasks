// bubble sort

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

void sortList(node *first){
    if(start == NULL)
        printf("Sorry, the list is in underflow\n");
    else{
        node *loc, *save;
        loc = start;
        while(loc != NULL){
            save = loc->next;
            while(save != NULL){
                if(loc->info > save->info){
                    int a = loc->info;
                    loc->info = save->info;
                    save->info = a;
                }
                save = save->next;
            }
            loc = loc->next;
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
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    sortList(start);
    printf("Now\n");
    p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    return 0;
}


