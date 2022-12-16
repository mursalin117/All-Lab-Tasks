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
    int Max, Min, avg, total = 0, coun = 0;
    printf("Now the elements are printing : \n");
    ptr = start;
    Max = ptr->info;
    Min = Max;
    while(ptr != NULL)
    {
        cout << ptr->info << " ";
        if(Max < ptr->info) Max = ptr->info;
        if(Min > ptr->info) Min = ptr->info;
        total += ptr->info;
        ptr = ptr->next;
        coun++;
    }cout << endl;
    avg = total / coun;
    printf("The maximum value is = %d\n", Max);
    printf("The minimum value is = %d\n", Min);
    printf("The total value is = %d\n", total);
    printf("The average value is = %d\n", avg);
    return 0;
}

