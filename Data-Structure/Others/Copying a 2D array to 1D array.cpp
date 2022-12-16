#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, coun = 0;
    printf("Enter the row and column no of the 2D array :\n");
    scanf("%d%d", &n, &m);
    int array2D[n][m];

    printf("Enter the elements of the array( > 0) :\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &array2D[i][j]);
            if(array2D[i][j] > 0) coun++;
        }
    }

    int array1D[coun], group[m], x = 0, y = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(array2D[i][j] > 0){
                array1D[x] = array2D[i][j];
                x++;
            }
        }
        if(i == 0) { group[y] = 0; y++; }
        else { group[y] = x; y++; }
    }
    for(i = 0; i < n * m; i++){
        printf("Enter the index to show : \n");
        scanf("%d%d", &x, &y);
        printf("The element is = %d\n", array1D[group[x-1]+y-1]);
    }
    printf("Enter the group to show : \n");
    scanf("%d", &x);
    cout << "gr " << group[x-1] << "   " << group[x] << endl;
    printf("The elements are : \n");
    for(i = group[x-1]; i < group[x]; i++){}
        printf("%d ", array1D[i]);
    printf("\n");
    return  0;
}
