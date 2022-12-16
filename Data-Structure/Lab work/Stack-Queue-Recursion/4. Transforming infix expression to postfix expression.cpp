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
        //cout << data << endl;
        top -= 1;
        return data;
    }
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
        else if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*' || s[i] == '^'){
            // deleting the top element of the stack
            char com = pop();
            if((s[i] == '+' || s[i] == '-') && com != '('){ // if the operator is + or -
                p[t] = com; // adding the top element of stack to p
                t++;
                push(s[i]); // pushing the operator to stack
            }
            else if((s[i] == '*' || s[i] == '/') && com != '('){ // for oparotor * or /
                if(com != '+' && com != '-'){ // if the precedence is higher than or equal
                    p[t] = com; // adding the top element of the stack to p
                    t++;
                    push(s[i]); // pushing the operator to stack
                }
                else{
                    push(com); // if the precedence is lower then at first pushing the lower operator
                    push(s[i]); // then pushing the higher operator
                }
            }
            else if(s[i] == '^' && com != '('){ // if the operator is ^
                if(s[i] == com){ // and the top element of the stack is ^ that means checking for
                    p[t] = com;    // same or higher precedence then adding the top elements to
                    t++;               // p and then
                    push(s[i]); // pushing the operator
                }
                else{
                    push(com); // if the precedence is lower then at first pushing the lower operator
                    push(s[i]);  // then pushing the higher operator
                }
            }
            else{ // if any operator is occurred and at the top of the stack is not any operator
                push('('); // then we can get only '(' so at first pushing it
                push(s[i]); // then pushing the operator
            }
        }
        else if(s[i] == ')'){ // if any ')' brace is appeared then
            while(1){
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

