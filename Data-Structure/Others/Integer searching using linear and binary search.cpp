#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    printf("Enter the size of the integer array : \n");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Using linear search \n");
    int x, coun = 0;
    printf("Enter the number to find : \n");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    {
        if(x == arr[i])
        {
            printf("successful & the index is %d\n", i+1);
            break;
        }
        else coun++;
    }
    if(coun == n) printf("unsuccessful \n");

    printf("Using binary search \n");
    int j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
    printf("Enter the number to find : \n");
    scanf("%d", &x);
    int Beg, End, Mid;
    Beg = 0;
    End = n-1;
    while(Beg <= End)
    {
        Mid = (Beg + End) / 2;
        if(x > arr[Mid]) Beg = Mid+1;
        else if(x < arr[Mid]) End = Mid-1;
        else break;
    }
    if(x == arr[Mid]) printf("Successful & index is %d\n", Mid+1);
    else printf("Unsuccessful\n");

    return 0;
}
