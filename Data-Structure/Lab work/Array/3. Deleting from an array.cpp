#include <bits/stdc++.h>

using namespace std;

void sortArray(string a[], int length);
int deleteFromSortedArray(string a[], int length, string str);
int deletePositionFromSortedArray(string a[], int length, int pos);

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
    // for sorting
    sortArray(str, len);
    // printing the array
    printf("Now the array : \n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;
    // taking input of the deleting string from a sorted array
    string s;
    printf("Enter the string to delete : \n");
    getline(cin, s);
    len = deleteFromSortedArray(str, len, s);
    // printing the array
    printf("Now the array : \n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;
    // taking input of the index to delete from the array
    int k;
    printf("Enter the index to delete : \n");
    scanf("%d", &k);
    len = deletePositionFromSortedArray(str, len, k);
    // printing the array
    printf("Now the array : \n");
    for(i = 0; i < len; i++)
        cout << str[i] << endl;

    return 0;
}
// the sorting function implementation
void sortArray(string a[], int length){
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
// the deleting function of the sorted array
int deleteFromSortedArray(string a[], int length, string str){
    for(int i = 0; i < length; i++){
        if(str == a[i]){
            for(int j = i; j < length -1; j++)
                a[j] = a[j+1];
            length = length-1;
            break;
        }
    }
    return length;
}
// the deleting function of position
int deletePositionFromSortedArray(string a[], int length, int pos){
    for(int i = pos; i < length-1; i++)
        a[i] = a[i+1];
    length = length-1;
    return length;
}
