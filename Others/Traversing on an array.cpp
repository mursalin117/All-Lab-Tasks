#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    printf("Enter the size of the array : \n");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter the elements of the array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int Max, Min, Total;
    double avg, sinValue;

    Max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(Max < arr[i]) Max = arr[i];
    }
    printf("The maximum value is : %d\n", Max);

    Min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(Min > arr[i]) Min = arr[i];
    }
    printf("The minimum value is : %d\n", Min);

    Total = 0;
    for(i = 0; i < n; i++)
        Total += arr[i];
    printf("The total value is : %d \n", Total);

    avg = (double)Total/(double)n;
    printf("The average value is : %lf\n", avg);

    printf("The sin value of the elements of the array is : \n");
    for(i = 0; i < n; i++)
    {
        sinValue = (double)arr[i];
        printf("%lf\n", sin(sinValue));
    }
    return 0;
}
