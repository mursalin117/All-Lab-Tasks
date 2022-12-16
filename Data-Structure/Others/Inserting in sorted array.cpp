#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    printf("Enter the size of the integer array :\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the element of the array :\n");
    for(i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    int temp;
    for(i = 0; i < n-2; i++)
    {
        for(j = i+1; j < n-1; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int x;
    printf("Enter a number to insert :\n");
    scanf("%d", &x);
    for(i = 0; i < n-1; i++)
    {
        if(x <= arr[i])
        {
            for(j = n-1; j > i; j--)
                arr[j] = arr[j-1];
            arr[i] = x;
            break;
        }
    }
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int k;
    printf("Enter the number to insert and the index : \n");
    scanf("%d%d", &x, &k);
    for(i = n-1; i > k; i--)
        arr[i] = arr[i-1];
    arr[k] = x;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();

    string str[len], s;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len-1; i++)
        getline(cin, str[i]);

    for(i = 0; i < len-2; i++)
    {
        for(j = i+1; j < len-1; j++)
        {
            if(str[i] > str[j])
            {
                s = str[i];
                str[i] = str[j];
                str[j] = s;
            }
        }
    }
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    printf("Enter a string to insert in the array : \n");
    getline(cin, s);
    for(i = 0; i < len; i++)
    {
        if(s <= str[i])
        {
            for(j = len-1; j > i; j--)
                str[j] = str[j-1];
            str[i] = s;
            break;
        }
    }
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    printf("Enter the string and the index to insert : \n");
    getline(cin, s);
    scanf("%d", &k);
    for(i = len-1; i > k; i--)
        str[i] = str[i-1];
    str[k] = s;

    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    return 0;
}
