#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);
    int arr[100], x, com;
    for(int i = 0; i < n; i++){
        arr[i] = -500;
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
                if(x == arr[d]){
                	printf("The number is in 2nd index\n");
                	continue;
                }
                while(arr[d] != -500){
                    if(d == 1)
                        d = 3;
                    else
                        d = d * 2 -1;
                    if(arr[d] == x){
                    	printf("The number is in %dth index", d+1);
                    	continue;
                    }
                }
                arr[d] = x;
            }
            else if(com < x){
                int d = 2;
                if(x == arr[d]){
                	printf("The number is in 3rd index\n");
                	continue;
                }
                while(arr[d] != -500){
                    d = d * 2;
                    if(arr[d] == x){
                    	printf("The number is in %dth index", d+1);
                    	continue;
                    }
                }
                arr[d] = x;
            }
            else{
            	printf("The number is in 1st index\n");
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
