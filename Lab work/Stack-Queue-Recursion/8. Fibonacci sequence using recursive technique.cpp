#include <bits/stdc++.h>

using namespace std;
// fibonacci function
int fibonacci(int n);

int main()
{
    // input of the number
    int n;
    printf("Enter the term of the fibonacci to calculate :\n");
    scanf("%d", &n);
    // calling the function
    int result = fibonacci(n);
    // printing the result
    printf("The %dth term is = %d\n", n, result);
    return 0;
}
// implementation of fibonacci function
int fibonacci(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else return (fibonacci(n -2) + fibonacci(n-1));
}
