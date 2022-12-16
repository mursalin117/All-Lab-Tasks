#include <bits/stdc++.h>

using namespace std;

void mergeArray(int a[], int length1, int b[], int length2);

int main()
{
    int n, m;
    printf("Enter the size of the two array : \n");
    scanf("%d%d", &n, &m);
    int arr1[n+m], arr2[m], i;

    printf("Enter the %d elements of 1st array : \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the %d elements of 2nd array : \n", m);
    for(i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    mergeArray(arr1, n+m, arr2, m);

    printf("Now after merging the 2nd array to 1st array : \n");
    for(i = 0; i < n+m; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    return 0;
}

void mergeArray(int a[], int length1, int b[], int length2){
    int i, j;
    for( i = length1-length2,  j = 0; j < length2; i++, j++)
        a[i] = b[j];
}
