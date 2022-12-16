#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    printf("Enter the size of the integer array : \n");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter the elements of the integer array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int ptr;
    for(i = 0; i < n-1; i++)
    {
        ptr = 0;
        while(ptr <= n-i-1)
        {
            if(arr[ptr] > arr[ptr+1])
                swap(arr[ptr], arr[ptr+1]);
            ptr = ptr + 1;
        }
    }
    printf("Now the array :\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();

    string str[len];
    printf("Enter the element of the string array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);

    //for(i = 0; i < len; i++) cout << str[i] << endl;
    /*for(i = 0; i < len-1; i++)
    {
        ptr = 0;
        while(ptr <= len-i-1)
        {
            if(str[ptr] > str[ptr+1])
                swap(str[ptr], str[ptr+1]);
            ptr = ptr + 1;
        }
    }*/
    int j;
    string temp;
    for(i = 0; i < len-1; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Now the array : \n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    return 0;
}
