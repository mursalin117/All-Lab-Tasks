#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();

    string str[len];
    int i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);

    printf("Using linear search \n");
    string s;
    int coun = 0;
    printf("Enter the string to find : \n");
    getline(cin, s);
    for(i = 0; i < len; i++)
    {
        if(s == str[i])
        {
            printf("successful & the index is %d\n", i+1);
            break;
        }
        else coun++;
    }
    if(coun == len) printf("unsuccessful \n");

    printf("Using binary search \n");
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
    printf("Enter the string to find : \n");
    getline(cin, s);
    int Beg, End, Mid;
    Beg = 0;
    End = len-1;
    while(Beg <= End)
    {
        Mid = (Beg + End) / 2;
        if(s > str[Mid]) Beg = Mid+1;
        else if(s < str[Mid]) End = Mid-1;
        else break;
    }
    if(s == str[Mid]) printf("Successful & index is %d\n", Mid+1);
    else printf("Unsuccessful\n");

    return 0;
}

