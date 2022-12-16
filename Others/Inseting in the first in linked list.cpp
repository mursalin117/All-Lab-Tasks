#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct Node node;

struct Node{
    int info;
    struct Node *next;
};

node *start = NULL, *ptr;
int countNum = 0;

node* getNode(node *root, int data){
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;

   if(root == NULL)
        return newNode;
    root->next = newNode;
    return newNode;
}

void insertList(node *first, int data, int indx){
    if(indx == 1){
        node *firstNode = new node();
        firstNode->info = data;
        firstNode->next = first;
        start = firstNode;
        countNum++;
    }
    else if(indx > 1){
        node *current = first;
        int coun = 0;
        while(current != NULL)
        {
            coun++;
            if(coun == indx-1){
                node *firstNode = new node();
                firstNode->info = data;
                firstNode->next = current->next;
                current->next = firstNode;
                countNum++;
                break;
            }
            else current = current->next;
        }
        if(coun != indx-1) printf("Invalid index!!\n");
    }
    else printf("Invalid Index!!!\n");
}

int main(){
    int n, i, x;
    printf("Enter the elements to insert : \n");
    for(i = 0; ; i++){
        scanf("%d", &x);
        if(x > -1){
            if(i == 0) { start = getNode(start, x); ptr = start; }
            else ptr = getNode(ptr, x);
            countNum++;
        }
        else break;
    }
    if(countNum != 0){
        printf("Now the elements are printing : \n");
        ptr = start;
        while(ptr != NULL){
            cout << ptr->info << " ";
            ptr = ptr->next;
        }cout << endl;
    }else printf("Underflow\n");
    int p, q;
    printf("Enter the index number where to insert and the data: \n");
    scanf("%d%d", &p, &q);
    insertList(start, q, p);
    if(countNum != 0){
        printf("Now the elements are printing : \n");
        ptr = start;
        while(ptr != NULL){
            cout << ptr->info << " ";
            ptr = ptr->next;
        }cout << endl;
    } else printf("Now in uderflow\n");
    return 0;
}



