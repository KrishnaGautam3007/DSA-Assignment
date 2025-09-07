#include <iostream>
#include <stack>
using namespace std;

void reverseString(string str) {
    stack<char>s;
    for(int i=0;i<str.length();i++){
    s.push(str[i]);
    }
    cout << "Reversed string: ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main() {
    string str="DataStructure";
    cout<<"Original string: "<<str<< endl;
    reverseString(str);
    return 0;
}
