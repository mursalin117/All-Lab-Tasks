// This code contains the code for finding the value of an
// arithmetic expression in postfix using stack
// for one digit and more
// It is also postfix evaluation

#include <bits/stdc++.h>

using namespace std;
// creating a stack
int Stack[100];
// initializing the top index value of the stack
int top = 0;
// function for pushing item
int push(int item){
    if(top == 100){
        printf("Overflow\n");
        return 0;
    }
    else{
        Stack[top] = item;
        top++;
    }
}
// function for popping item from the stack
int pop(){
    if(top < 0){
        printf("Underflow\n");
        return -100000;
        }
    else{
        int data = Stack[top-1];
        //cout << data << endl;
        top -= 1;
        return data;
    }
}

int main(){
    // input postfix arithmetic expression as a string
    string s;
    printf("Enter a string of arithmetic expression in postfix : \n");
    getline(cin, s);
    // pushing the elements to the stack
    int len = s.length(), i, j;
    for(i = 0; i < len; i++){
        // comparing the digit
        if(s[i] >= '0' && s[i] <= '9'){
            int n = s[i] - '0';
            for(j = i+1; ; j++){
                // comparing further more digit after getting one digit
                if(s[j] >= '0' && s[j] <= '9')
                    n = n * 10 + (s[j] - '0');
                else break;
            }
            // pushing the number to the stack
            push(n);
            //cout << n << endl;
            // changing the value of i after getting number of more than one digit
            i = j;
        }
        // checking for not digit character
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            // popping the 2nd number
            int a = pop();
            // popping the 1st number
            int b = pop();
            if(s[i] == '+') push(a + b); // for addition
            else if(s[i] == '-') push(b - a); // for subtraction
            else if(s[i] == '*') push(a * b); // for multiplication
            else if(s[i] == '/') push(b / a); // for division
            else push(pow(b, a)); // for power
        }
        else continue;
    }
    // printing the result
    int result = pop();
    printf("The result is = %d\n", result);
    return 0;
}
