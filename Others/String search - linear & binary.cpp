#include <bits/stdc++.h>

using namespace std;

void bubbleSort(string a[], int length);
int linearSearch(string a[], int length, string str);
int binarySearch(string a[], int length, string str);

int main()
{
    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();
    // for input
    string str[len];
    int i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);
    // for linear search
    printf("Using linear search \n");
    string s;
    printf("Enter the string to find : \n");
    getline(cin, s);
    // linear search
    int index = linearSearch(str, len, s);
    if(index >= 0) cout << "Successful & " << s << "'s index is " << index << endl;
    else cout << "Unsuccessful" << endl;
    // for binary search
    printf("Using binary search \n");
    // at first sorting the string
    bubbleSort(str, len);
    // printing the array
    printf("Now the array :\n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;
    // input of the searching string
    printf("Enter the string to find : \n");
    getline(cin, s);
    // binary search
    index = binarySearch(str, len, s);
    if(index >= 0) cout << "Successful & " << s << "'s index is " << index << endl;
    else cout << "Unsuccessful" << endl;

    return 0;
}
// bubble sort
void bubbleSort(string a[], int length){
    string temp;
    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// linear search
int linearSearch(string a[], int length, string str){
    int coun = 0;
    for(int i = 0; i < length; i++)
    {
        if(str == a[i]) break;
        else coun++;
    }
    if(coun == length) return -1;
    else return coun+1;
}
// binary search
int binarySearch(string a[], int length, string str){
    int Beg, End, Mid;
    Beg = 0;
    End = length-1;
    while(Beg <= End)
    {
        Mid = (Beg + End) / 2;
        if(str > a[Mid]) Beg = Mid+1;
        else if(str < a[Mid]) End = Mid-1;
        else break;
    }
    if(str == a[Mid]) return Mid+1;
    else return -1;
}
