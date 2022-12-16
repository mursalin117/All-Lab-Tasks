#include <bits/stdc++.h>

using namespace std;
// crating a stack for number
int stackInt[100];
// creating a stack for operator and braces
char stackChar[100];
// initializing the top
int topInt = 0, topChar = 0;
 // function for pushing the number
 void pusInt(int data){
    if(topInt == 100)
        printf("Overflow\n");
    else{
        stackInt[topInt] = data;
        topInt++;
    }
 }
 // function for popping the number
 int popInt(){
    if(top == -1)
        printf("Underflow\n");
    else{
        int data = stackInt[topInt-1];
        topInt--;
        return data;
    }
 }
 // function for pushing the operator and braces
 void pusChar(char data){
    if(topChar == 100)
        printf("Overflow\n");
    else{
        stackChar[topChar] = data;
        topChar++;
    }
 }
 // function for popping the operator and braces
 char popChar(){
    if(top == -1)
        printf("Underflow\n");
    else{
        char data = stackChar[topChar-1];
        topChar--;
        return data;
    }
 }
 // precedence checking
 int precedence(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else return 3;
}
int main(){
    // for input of the expression
    string s;
    printf("Enter an arithmetic expression in infix notation :\n");
    getline(cin, s);
    // string processing
    s = "(" + s + ")";
    int len = s.length(), i, n, j;
    for(i = 0; i < len; i++){
        if(s[i] <= '0' && s[i] >= '9'){ // for checking the first digit
            n = s[i] - '0'; // making the first digit
            for(j = i+1; ; j++){ // if the multiple digit number occur
                if(s[j] <= '0' && s[j] >= '9'){ // checking for further more digit
                    n = 10 * n + (s[i] - '0'); // making the further more digit to number
                }
                else break; // if no more digit then escaping the 2nd loop
            }
            i = j; // for multi digit number the value of the i must be changed to j
            pushInt(n); // then pushing the number to integer stack
        }
        else if(s[i] == '(') // if the '(' is occurred
            pusChar(s[i]); // pushing it to the character stack
        // checking for operator
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            char com = popChar(); // popping from the character stack
            if(com != '('){
                if(precedence(s[i]) < precedence(com))
            }
        }
    }
}
