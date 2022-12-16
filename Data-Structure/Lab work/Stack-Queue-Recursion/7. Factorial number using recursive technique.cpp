#include <bits/stdc++.h>

using namespace std;
// function for determining factorial
long int factorial(long int fac);

int main(){
    // for input
    int n, result;
    printf("Enter a number to find the factorial : (< 17)\n");
    scanf("%ld", &n);
    // calling the factorial function
    result = factorial(n);
    // printing the result
    printf("The factorial is = %ld\n", result);
    return 0;
}
// function implementing for factorial
long int factorial(long int fac){
    if(fac == 0) return 1;
     return (fac * factorial(fac - 1));
}
