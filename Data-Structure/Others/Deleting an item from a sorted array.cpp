#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    printf("Enter the size of the array : \n");
    scanf("%d", &len);
    getchar();

    string str[len];
    int i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);

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
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    string s;
    printf("Enter the string to delete : \n");
    getline(cin, s);
    for(i = 0; i < len; i++)
    {
        if(s == str[i])
        {
            for(j = i; j < len -1; j++)
                str[j] = str[j+1];
            len = len -1;
            break;
        }
    }
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    int k;
    printf("Enter the index to delete : \n");
    scanf("%d", &k);

    for(i = k; i < len-1; i++)
        str[i] = str[i+1];
    len = len -1;

    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    return 0;
}
