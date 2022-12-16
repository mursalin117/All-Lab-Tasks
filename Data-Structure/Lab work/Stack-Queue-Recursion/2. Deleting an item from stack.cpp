#include <bits/stdc++.h>

using namespace std;
// the top index and the size of the stack
int top = -1, n = 10;
// creating the stack
int Stack[10];
// function for pushing item on stack
int push(int item){
    if(top == n){
        printf("Overflow\n");
        return 0;
    }
    else{
        if(top == -1) top = 0;
        Stack[top] = item;
        top++;
        return 1;
    }
}
// function for deleting or popping from stack
int pop(){
    if(top < 0){
        printf("Underflow\n");
        return -999999;
    }
    else{
        int data = Stack[top-1];
        //cout << data << endl;
        top -= 1;
        return data;
    }
}
// function for showing item of stack
void show(){
    int i = top-1;
    if(i == -1)
        printf("Underflow.\n");
    else{
            while(i >= 0){
            printf("%d ", Stack[i]);
            i--;
        }printf("\n");
    }
}

int main(){
    // inserting elements to stack
    int x, i;
    printf("Enter the number of elements to insert : \n");
    scanf("%d", &i);
    printf("Enter the elements : \n");
    for(int k = i; i > 0; i--){
        scanf("%d", &x);
        int com = push(x);
        if(com == 0) break;
        else continue;
    }
    // showing the elements of stack
    printf("Now the stack is : \n");
    show();
    // deleting elements from stack
    int info = pop();
    if(info != -999999) printf("The deleted item is = %d\n", info);
    else printf("Nothing to delete.\n");
    // again showing elements of stack
    printf("After poping the stack is : \n");
    show();
    return 0;
}

