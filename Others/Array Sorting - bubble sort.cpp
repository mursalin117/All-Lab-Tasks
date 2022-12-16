#include <bits/stdc++.h>

using namespace std;

void bubbleSortForInteger(int a[], int length);
void bubbleSortForString(string a[], int length);

int main()
{
    // for integer
    int n;
    printf("Enter the size of the integer array : \n");
    scanf("%d", &n);
    // for input
    int arr[n], i;
    printf("Enter the elements of the integer array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // for sorting
    bubbleSortForInteger(arr, n);
    // printing the array
    printf("Now the array :\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // for string
    int len;
    printf("Enter the size of the string array : \n");
    scanf("%d", &len);
    getchar();
    // for input
    string str[len];
    printf("Enter the element of the string array : \n");
    for(i = 0; i < len; i++)
        getline(cin, str[i]);
    // for sorting
    bubbleSortForString(str, len);
    // printing the array
    printf("Now the array : \n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    return 0;
}
// bubble sort for integer
void bubbleSortForInteger(int a[], int length){
    int ptr;
    for(int i = 0; i < length-1; i++){
        ptr = 0;
        while(ptr <= length-i-1){
            if(a[ptr] > a[ptr+1]){
                int temp = a[ptr];   // swap(arr[ptr], arr[ptr+1]);
                a[ptr] = a[ptr+1];    //
                a[ptr+1] = temp;      //
            }
            ptr = ptr + 1;
        }
    }
}
// bubble sort for string
void bubbleSortForString(string a[], int length){
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
