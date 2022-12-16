#include <bits/stdc++.h>

using namespace std;
// declaring the stack
char Stack[100];
// initializing the top value
int top = 0;
// function to push value to the stack
void push(char item){
    if(top == 100){ // checking if the stack is overflow
        printf("Overflow\n");
    }
    else{ // if the stack is not overflow
        Stack[top] = item; // inserting the item into the stack
        top++;
    }
}
// function for deleting item from stack
char pop(){
    if(top < 0){ // checking if the stack is underflow
        printf("Underflow\n");
        return '!';
        }
    else{ // if the stack is not underflow
        char data = Stack[top-1]; // deleting the top item
        top -= 1;
        return data;
    }
}
// function for checking the operator
bool operatorChecking(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') return true;
    else return false;
}
// function for precedence checking
int precedence(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else return 3;
}

int main(){
    // for input section
    string s; // string for taking the infix expression
    char p[100]; // for the postfix expression
    printf("Enter the expression in infix order : \n");
    getline(cin, s); // taking input of infix expression
    // for adding the '(' brace in the beginning and ')' in the end
    s = "(" + s + ")";
    cout << s << endl;
    // for string processing
    int i, t = 0, len = s.length();
    for(i = 0; i < len; i++){
            // checking for variant
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
            p[t] = s[i]; // adding it to p
            t++;
        }
        else if(s[i] == '('){ // checking for '(' brace
            push(s[i]); // pushing it to stack
        }
        // checking for operator
        else if(operatorChecking(s[i])){
            // deleting the top element of the stack
            char com = pop();
            // comparing the top element of the stack with the s[i]
            if(operatorChecking(com) && operatorChecking(s[i])){
                    // comparing the precedence of the operator
                    if(precedence(com) < precedence(s[i])) // if the precedence of last element is low
                        push(com); // pushing the last element of the stack again to the stack
                    else{ // if the precedence of the top item of stack is higher or equal
                        p[t] = com; // adding the top element to p
                        t++;
                    }
                    push(s[i]); // pushing the operator to the stack
            }
            else{ // in s[i] and com if one of them is not operator
                push(com); // pushing the top item of the stack to the stack again(it will not be operator '(')
                push(s[i]); // then pushing the operator
            }
        }
        else if(s[i] == ')'){ // if any ')' brace is appeared then
            while(true){
                char com = pop(); // repeatedly popping the top item of the stack
                if(com == '(') break; // until a '(' appears
                else{ // if '(' is not appear
                    p[t] = com; // adding the top element of the stack to p
                    t++;
                }
            }
        }
        else continue; // for other variant
    }
    p[t] = '\0';
    printf("The expression is : \n");
    cout << p << endl;
    return 0;
}


