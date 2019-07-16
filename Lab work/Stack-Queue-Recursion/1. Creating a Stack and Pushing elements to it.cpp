#include <bits/stdc++.h>

using namespace std;
// the top index and the size of the stack
int top = 0, n = 10;
// creating the stack
int Stack[10];
// pushing the elements to stack
int push(int item){
    if(top == n){
        printf("Overflow\n");
        return 0;
    }
    else{
        Stack[top] = item;
        top++;
        return 1;
    }
}
// showing the elements of stack
void show(){
    int i = top-1;
    if(i == -1) printf("Underflow.\n");
    else{
        printf("The elements of the stack are : \n");
        while(i >= 0){
            printf("%d ", Stack[i]);
            i--;
        }printf("\n");
    }
}

int main(){
    // input of the elements
    int x, i;
    printf("Enter the number of elements to insert : \n");
    scanf("%d", &i);
    printf("Enter the elements : \n");
    for(int k = i; i > 0; i--){
        scanf("%d", &x);
        // pushing the elements into stack
        int com = push(x);
        if(com == 0) break;
        else continue;
    }
    // showing the elements
    show();
    return 0;
}
