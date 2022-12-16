#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, arr[100], x;
    for(int i = 0; i < 100; i++)
        arr[i] = -500;
    printf("Enter the number of elements to insert :\n");
    scanf("%d", &n);
    printf("Enter the elements to insert :\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(i == 0) arr[i] = x;
        else{
            int present = i, root;
            if(present % 2 != 0){
                root = present / 2;
                while(root >= 0){
                    if(arr[root] > x){
                        int y = arr[root];
                        arr[root] = x;
                        arr[present] = y;
                        present = root;
                    }
                    else break;
                    if(present % 2 != 0) root = present / 2;
                    else root = (present / 2) - 1;
                }
            }
            else{
                root = (present / 2) - 1;
                while(root >= 0){
                    if(arr[root] > x){
                        int y = arr[root];
                        arr[root] = x;
                        arr[present] = y;
                        present = root;
                    }
                    else break;
                    if(present % 2 != 0) root = present / 2;
                    else root = (present / 2) - 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
