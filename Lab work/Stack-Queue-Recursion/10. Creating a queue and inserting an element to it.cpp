#include <bits/stdc++.h>

using namespace std;
// creating a queue
int Queue[10];
// the staring index and the ending index initialization
int Front = -1, Rear = 0;
// function for pushing the elements to queue
int push(int item){
    if(Rear == 10){
        printf("Overflow.\n");
        return 0;
    }
    else{
        if(Front == -1) Front = 0;
        Queue[Rear] = item;
        Rear++;
    }
}
// function for showing the queue
void show(){
    int i = Front;
    if(i == -1)
        printf("Underflow.\n");
    else{
        while(i < Rear){
            printf("%d ", Queue[i]);
            i++;
        }printf("\n");
    }
}
int main(){
    // inserting the elements to queue
    int x, len;
    printf("Enter the number of elements to insert : \n");
    scanf("%d", &len);
    printf("Enter the elements to insert : \n");
    for(int i = 0; i < len; i++){
        scanf("%d", &x);
        int com = push(x);
        if(com == 0) break;
        else continue;
    }
    // printing the queue
    printf("Now the queue is : \n");
    show();
    // inserting an extra element
    printf("Enter the elements to insert : \n");
    scanf("%d", &x);
    push(x);
    // again printing the queue
    printf("Now the queue is : \n");
    show();
    return 0;
}
