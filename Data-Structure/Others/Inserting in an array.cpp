#include <bits/stdc++.h>

using namespace std;

void insertInSortedIntegerArray(int a[], int length, int d);
void insertPositionInSortedIntegerArray(int a[], int length, int d, int pos);
void insertInSortedStringArray(string a[], int length, string str);
void insertPositionInSortedStringArray(string a[], int length, string str, int pos);

int main()
{
    // for integer array
    int n, i, j;
    printf("Enter the size of the integer array :\n");
    scanf("%d", &n);
    // taking input of integer
    int arr[n+1];
    printf("Enter the element of the array :\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // inserting an extra element
    int x;
    printf("Enter a number to insert :\n");
    scanf("%d", &x);
    insertInSortedIntegerArray(arr, n, x);
    // printing the array
    printf("Now the array is : \n");
    for(i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // inserting a number in fixed position
    int k;
    printf("Enter the number to insert and the index : \n");
    scanf("%d%d", &x, &k);
    insertPositionInSortedIntegerArray(arr, n, x, k);
    // printing the array
    printf("Now the array is : \n");
    for(i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // for string array
    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();
    // taking the input of string array
    string str[len+1], s;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);
    // taking input of an extra element
    printf("Enter a string to insert in the array : \n");
    getline(cin, s);
    insertInSortedStringArray(str, len, s);
    // printing the array
    printf("Now the array : \n");
    for(i = 0; i <= len; i++)
        cout << str[i] << endl;
    // taking input of the extra string and the position
    printf("Enter the string and the index to insert : \n");
    getline(cin, s);
    scanf("%d", &k);
    insertPositionInSortedStringArray(str, len, s, k);
    // printing the array
    printf("Now the array :\n");
    for(i = 0; i <= len; i++)
        cout << str[i] << endl;

    return 0;
}

void insertInSortedIntegerArray(int a[], int length, int d){
    // sorting the array
    int temp;
    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // inserting the extra element
    for(int i = 0; i < length; i++){
        if(d <= a[i]){
            for(int j = length; j > i; j--){
                a[j] = a[j-1];
            }
            a[i] = d;
            return;
        }
    }
    a[length] = d;
}

void insertPositionInSortedIntegerArray(int a[], int length, int d, int pos){
    // inserting the element in the fixed position
    for(int i = length; i > pos; i--)
        a[i] = a[i-1];
    a[pos] = d;
}

void insertInSortedStringArray(string a[], int length, string str){
    // sorting the array
    string tem;
    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(a[i] > a[j]){
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    // printing the sorted array
   for(int i = 0; i < length; i++)
        cout << "a[" << i << "]  = " << a[i] << endl;
    // now inserting the element
    for(int i = 0; i < length; i++){
        if(str <= a[i]){
            for(int j = length; j > i; j--)
                a[j] = a[j-1];
            a[i] = str;
            return;
        }
    }
    a[length] = str;
}

void insertPositionInSortedStringArray(string a[], int length, string str, int pos){
    // inserting the fixed string
    for(int i = length; i > pos; i--)
        a[i] = a[i-1];
    a[pos] = str;
}
