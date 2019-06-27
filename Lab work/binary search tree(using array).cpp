#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);
    int arr[n], x, com;
    for(int i = 0; i < n; i++){
        arr[i] = -500;
        //cout << arr[i] << " ";
    }
    printf("Enter the elements :\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(i == 0){
            arr[i] = x;
            com = x;
        }
        else{
            if(com > x){
                int d = 1;
                while(arr[d] != -500){
                    if(d == 1)
                        d = 3;
                    else
                        d = d * 2 -1;
                }
                arr[d] = x;
            }
            else{
                int d = 2;
                while(arr[d] != -500){
                    d = d * 2;
                }
                arr[d] = x;
            }
        }
    }
    printf("printing array :\n");
    for(int i = 0; i < n; i++){
        if(arr[i] >= -500)
            printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
