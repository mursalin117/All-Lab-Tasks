#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a[], int length);
int linearSearch(int a[], int length, int com);
int binarySearch(int a[], int length, int com);

int main()
{
    int len;
    printf("Enter the size of the integer array : \n");
    scanf("%d", &len);
    // for input
    int arr[len];
    int i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    // for linear search
    printf("Using linear search \n");
    int x;
    printf("Enter the integer to find : \n");
    scanf("%d", &x);
    // linear search
    int index = linearSearch(arr, len, x);
    if(index >= 0) cout << "Successful & " << x << "'s index is " << index << endl;
    else cout << "Unsuccessful" << endl;
    // for binary search
    printf("Using binary search \n");
    // at first sorting the array
    bubbleSort(arr, len);
    // printing the array
    printf("Now the array :\n");
    for(i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
    // input of the searching integer
    printf("Enter the integer to find : \n");
    scanf("%d", &x);
    // binary search
    index = binarySearch(arr, len, x);
    if(index >= 0) cout << "Successful & " << x << "'s index is " << index << endl;
    else cout << "Unsuccessful" << endl;

    return 0;
}
// bubble sort
void bubbleSort(int a[], int length){
    for(int i = 0; i < length-1; i++){
        for(int j = i+1; j < length; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// linear search
int linearSearch(int a[], int length, int com){
    int coun = 0;
    for(int i = 0; i < length; i++)
    {
        if(com == a[i]) break;
        else coun++;
    }
    if(coun == length) return -1;
    else return coun+1;
}
// binary search
int binarySearch(int a[], int length, int com){
    int Beg, End, Mid;
    Beg = 0;
    End = length-1;
    while(Beg <= End)
    {
        Mid = (Beg + End) / 2;
        if(com > a[Mid]) Beg = Mid+1;
        else if(com < a[Mid]) End = Mid-1;
        else break;
    }
    if(com == a[Mid]) return Mid+1;
    else return -1;
}

