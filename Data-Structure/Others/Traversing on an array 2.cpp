#include <bits/stdc++.h>

using namespace std;

int findMax(int a[], int length);
int findMin(int a[], int length);
int total(int a[], int length);
double average(int a[], int length);
double findSinValue(int a[], int length);

int main(){
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int Max, Min, Total;
    double avg, sinValue;

    Max = findMax(arr, n);
    printf("The maximum value is : %d\n", Max);

    Min = findMin(arr, n);
    printf("The minimum value is : %d\n", Min);

    Total = total(arr, n);
    printf("The total value is : %d \n", Total);

    avg = average(arr, n);
    cout << "The average value is : " <<  avg << endl;

    printf("The sin value of the elements of the array is : \n");
    for(i = 0; i < n; i++){
        sinValue = (double)arr[i];
        cout <<  sin(sinValue) << endl;
    }
    return 0;
}

int findMax(int a[], int length){
    int m = a[0];
    for(int i = 1; i < length; i++){
        if(m < a[i]) m = a[i];
    }
    return m;
}

int findMin(int a[], int length){
    int m = a[0];
    for(int i = 1; i < length; i++){
        if(m > a[i]) m = a[i];
    }
    return m;
}

int total(int a[], int length){
    int t = 0;
    for(int i = 0; i < length; i++)
        t += a[i];
    return t;
}

double average(int a[], int length){
    int t = 0;
    for(int i = 0; i < length; i++)
        t += a[i];
    double avg;
    avg = (double)t / (double)length;
    cout << "avg in function = " << avg << endl;
    return avg;
}
