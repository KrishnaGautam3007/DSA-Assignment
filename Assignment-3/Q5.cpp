#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int evaluatePostfix(string postfix) {
    stack<int> s;
    for (int i=0;i<infix.length();i++){
    char ch = infix[i];
    if(isalnum(ch)){
        postfix+= ch;
    }
    else if(ch=='('){
        s.push(ch);
    }
    else if(ch==')'){
        while(!s.empty()&&s.top()!='('){
            postfix+=s.top();
            s.pop();
        }
        if(!s.empty()){ 
            s.pop();
        }
    }
    else if(isOperator(ch)){
        while(!s.empty()&&precedence(s.top())>=precedence(ch)){
            postfix += s.top();
            s.pop();
        }
        s.push(ch);
    }
}
    return s.top();
}
int main() {
    string postfix;
    cout<<"Enter postfix expression (single-digit operands): ";
    cin>>postfix;

    cout<<"Evaluated result: "<<evaluatePostfix(postfix)<<endl;
    return 0;
}
