#include <bits/stdc++.h>

using namespace std;

int main()
{
        // taking input of the size of the 2D matrix
        int n, m;
        printf("Enter the size of the row and column :\n");
        scanf("%d%d", &n, &m);
        // creating a 2D matrix and initialize it and counting the total number
        int array2D[n][m], coun = 0;
        printf("Enter the elements of the array (considering > 0):\n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &array2D[i][j]);
                if(array2D[i][j] > 0) coun++;
            }
        }
        // creating two 1D array
        int array1D[coun], group[n+1];
        // copying the elements of the 2D array to 1D array
        int x = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(array2D[i][j] > 0){
                    array1D[x] = array2D[i][j];
                    x++;
                }
                group[i+1] = x - 1;
            }
        }
        group[0] = 0;
        // printing the elements of the 1D array
        printf("Now 1D array :\n");
        for(int i = 0; i < coun; i++)
            printf("%d ", array1D[i]);
        printf("\n");
        // printing the group number
        printf("group :\n");
        for(int i = 0; i < n; i++)
            printf("%d ", group[i]);
        printf("\n");
        // input of checking the index
        printf("Enter the group number to check :\n");
        int X;
        scanf("%d", &X);
        printf("The elements are :\n");
        for(int i = group[X-1] + 1; i <= group[X]; i++)
            printf("%d ", array1D[i]);
        printf("\n");
        return 0;
}
