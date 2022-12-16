#include <bits/stdc++.h>

using namespace std;
// making the tree using array
int tree[1000];
// function for inserting elements to array
void insertArray(int root, int data){
    if(tree[root] == -99999){ // checking for the first element and the empty space to insert the
        tree[root] = data; // data
    }
    else if(tree[root] == data)
        printf("The index of the item is = %d\n", root+1);
    else{
        int left = root * 2 + 1; // making the left node of the present root
        int right = root * 2 + 2; // making the right node of the present root
        if(tree[root] > data) // checking if the data is less than the present root data
            insertArray(left, data); // then calling the insert function again with root left
        else insertArray(right, data); // else calling the insert function again with root right
    }
}
int main(){
    // initializing the array
    for(int j = 0; j < 1000; j++){
        tree[j] = -99999;
    }
    // input of number of element
    int n;
    printf("Enter the number of elements to insert :\n");
    scanf("%d", &n);
    // input of the element to insert
    printf("Enter the elements to insert :\n");
    int x, i;
    for(i = 0; i < n; i++){
        scanf("%d", &x); // input the elements
        insertArray(0, x); // inserting them to array
    }
    // printing the tree as array
    printf("Now the tree is : \n");
    for(i = 0; i < 1000; i++){
        if(tree[i] != -99999)
            printf("%d ", tree[i]);
    }
    printf("\n");
    return 0;
}
