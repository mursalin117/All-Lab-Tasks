// This program insert a node in the first position/last position

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// type defining for "struct Node" as "node"
typedef struct Node node;

// structure of node
struct Node{
    int info;
    struct Node *next; // pointers for next node
};

// these two pointers points the 1st and the present node
node *start = NULL, *ptr;

// creating node in memory and inserting for the first time
 node* getNode(node *root, int data){
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

    if(root != NULL) // only the startig node does not enter here
        root->next = newNode; // points the next node which is created as newNode
    return newNode;
}

// the inserting function
void insertNode(int item){
    // for the first node
    if(start == NULL){
        start = getNode(start, item);
        ptr = start;
    }
    // for the other node
    else ptr = getNode(ptr, item);
}

int main(){
    int i, x;
    // taking input for the list
    printf("Enter the elements to insert : \n");
    for(i = 0 ;; i++){
        scanf("%d", &x);
        // checking for greater than -1
        if(x > -1){
            if(i == 0){
                // first node
                start = getNode(start, x);
                ptr = start;
            }
            // the other node
            else ptr = getNode(ptr, x);
        }
        else{
            // for entering the number less than -1
            printf("Terminated\n");
            break;
        }
    }
    // printing the elements of the list
    printf("Now the elements are printing : \n");
    node *p = start; // the printig pointers
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    // inserting the elements again in the list
    printf("Enter the number to insert for 2nd time : \n");
    for( ;; ){
        scanf("%d", &x);
        if(x > -1)
            insertNode(x);
        else{
            printf("Terminated\n");
            break;
        }
    }
    printf("Now the elements are printing : \n");
    p = start;
    while(p != NULL){
        cout << p->info << " ";
        p = p->next;
    }cout << endl;
    return 0;
}

