#include <bits/stdc++.h>

using namespace std;
// creating a queue
int Queue[10];
// the staring index and the ending index initialization
int Front = -1, Rear;
// function for pushing the elements to queue
int push(int item){
    if((Rear == 10 && Front == 0 ) || (Front == Rear + 1)){
        printf("Overflow.\n");
        return 0;
    }
    else{
        if(Front == -1) Front = Rear = 0;
        else if(Rear == 10) Rear = 0;
        else Rear++;
        Queue[Rear] = item;
        return 1;
    }
}
// function for showing the queue
void show(){
    int i = Front;
   // cout << "Rear = " << Rear << endl;
    if(i == -1 || i == Rear)
        printf("Underflow.\n");
    else{
        while(i <= Rear){
            printf("%d ", Queue[i]);
            i++;
            if(i == 10) i = 0;
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
