#include <bits/stdc++.h>

using namespace std;

int main()
{
    // matrix addition
    printf("For addition\n");
    // input of the row and column of the first matrix
    int r1, c1, i, j, k, sum;
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    // input of the row and column of the 2nd matrix
    int r2, c2;
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    // checking the condition for addition
    if(r1 == r2 && c1 == c2){
        // taking input of the 1st matrix
        int arr1[r1][c1];
        printf("Enter the elements of the 1st matrix :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++)
                scanf("%d", &arr1[i][j]);
        }
        // taking input of the 2nd matrix
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        // printing the result
        printf("After the addition :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("%d ", arr1[i][j] + arr2[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be added.\n");
    // matrix subtraction
    printf("For subtraction\n");
    // taking input of the 1st matrix row and column
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    // taking input of the 2nd matrix row and column
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    // checking the condition for subtraction
    if(r1 == r2 && c1 == c2){
        // input for the 1st matrix
        int arr1[r1][c1];
        printf("Enter the elements of the 1st matrix :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++)
                scanf("%d", &arr1[i][j]);
        }
        // input for the 2nd matrix
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        // printing the result
        printf("After the subtraction :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                printf("%d ", arr1[i][j] - arr2[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be subtracted.\n");
    // matrix multiplication
    printf("For Multiplication\n");
    // input of the row and column of 1st matrix
    printf("Enter the row and column no of 1st matrix :\n");
    scanf("%d%d", &r1, &c1);
    // input of the row and column of the 2nd matrix
    printf("Enter the row and column no of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    // checking the condition for matrix multiplication
    if(c1 == r2){
        // input of the elements of the 1st matrix
        int arr1[r1][c1];
        printf("Enter the elements of the 1st matrix :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++)
                scanf("%d", &arr1[i][j]);
        }
        // input of the elements of the 2nd matrix
        int arr2[r2][c2];
        printf("Enter the elements of the 2nd matrix :\n");
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);
        }
        // printing the result
        printf("After the multiplication :\n");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                sum = 0;
                for(k = 0; k < c1; k++){
                    sum += arr1[i][k] * arr2[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
    else printf("Sorry the matrices cannot be multiplicated.\n");
    return 0;
}
