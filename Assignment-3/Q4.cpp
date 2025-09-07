#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int precedence(char op) {
    if(op=='^'){ 
        return 3;
    }
    if(op=='*'||op=='/'){ 
        return 2;
    }
    if(op=='+'||op=='-'){ 
        return 1;
    }
    return 0;
}
bool isOperator(char c) {
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
string infixToPostfix(string infix){
    stack<char> s;
    string postfix="";

    for(int i=0;i<infix.length();i++){
    char ch=infix[i];
    if(isalnum(ch)){
        postfix+=ch;
    }
    else if(ch == '('){
        s.push(ch);
    }
    else if(ch==')'){
        while(!s.empty()&&s.top()!='('){
            postfix+=s.top();
            s.pop();
        }
        if (!s.empty())s.pop();
    }
    else if (isOperator(ch)) {
        while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
            postfix+=s.top();
            s.pop();
        }
        s.push(ch);
    }
}


    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
