#include <bits/stdc++.h>

using namespace std;

int main()
{
    // input for row and column
    int n, m, i, j, coun = 0, x, k;
    printf("Enter the row and column no of the matrix :\n");
    scanf("%d%d", &n, &m);
    // creating a 2D matrix
    int arr2D[n][m];
    // input for type of the matrix
    printf("Enter the type of the matrix :\n");
    printf("1.Triangular 2.Tridiagonal :\n");
    scanf("%d", &x);
    // checking for the matrix
    if(x == 1) { // for triangular matrix
        printf("Enter 1.upper or 2.lower :\n");
        scanf("%d", &k); // input for upper or lower triangular matrix
        // for input of the elements of the matrix
        printf("Enter the element of the matrix :\n");
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%d", &arr2D[i][j]);
                // checking for the > 0 elements
                if(arr2D[i][j] > 0) coun++;
            }
        }
        // creating the 1D array and inserting the elements
        int arr1D[coun], p = 0, l, r;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(arr2D[i][j] > 0) {
                    arr1D[p] = arr2D[i][j];
                    p++;
                }
            }
        }
        if(k == 2){ // checking for the lower triangular matrix
                // input to check
            printf("Enter the row and column of the elements to identify :\n");
            scanf("%d%d", &l, &r);
            // condition for the index of 1D array
            int d = ((l * (l -1)) / 2) + r;
            // printing the result
            printf("The number is = %d\n", arr1D[d-1]);
        }
        else{// for upper triangular matrix
            // input to check
            printf("Enter the row and column of the elements to identify :\n");
            scanf("%d%d", &l, &r);
            // condition for the index of 1D array
            int d = p - ((m - l + 1) * (m - l + 2) / 2) + r - l + 1;
            // printing the result
            printf("The number is = %d\n", arr1D[d-1]);
        }
    }
    else{ // for tridiagonal
        // for input of the elements of the matrix
        printf("Enter the element of the matrix :\n");
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%d", &arr2D[i][j]);
                // checking for the > 0 elements
                if(arr2D[i][j] > 0) coun++;
            }
        }
        // creating the 1D array and inserting the elements
        int arr1D[coun], p = 0, l, r;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(arr2D[i][j] > 0) {
                    arr1D[p] = arr2D[i][j];
                    p++;
                }
            }
        }
        // input to check
        printf("Enter the row and column of the elements to identify :\n");
        scanf("%d%d", &l, &r);
        // condition for the index of 1D array
        int d = 2 * l + r - 2;
        // printing the result
        printf("The result is = %d\n", arr1D[d-1]);
    }
    return 0;
}

