#include <bits/stdc++.h>
using namespace std;

void concatenateStrings(string str1, string str2) {
    cout<<str1 + str2;
}
void reverseString(string str) {
    int i=0,j=str.size()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
string removeVowels(string str) {
    string result = "";
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if (ch=='a'&&ch=='e'&&ch=='i'&&ch=='o'&&ch=='u'){
            continue;
        }
        else{
            result+=ch;
        }
    }
    return result;
}


void sortStrings(string str) {
    for(int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            int ch1=str[j],ch2=str[j+1];
            if(ch1>ch2){
                int temp=str[j+1];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}

void toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}
int main() {
    string s1 = "Hello";
    string s2 = "World";
    cout << "(a) Concatenate: " << concatenateStrings(s1, s2) << endl;
    string s3 = "OpenAI";
    cout << "(b) Reverse: " << reverseString(s3) << endl;
    string s4 = "Programming";
    cout << "(c) Without vowels: " << removeVowels(s4) << endl;
    string arr[5] = {"banana", "apple", "grape", "mango", "cherry"};
    int n = 5;
    sortStrings(arr, n);
    cout << "(d) Sorted strings: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    char ch = 'G';
    cout << "(e) Lowercase of " << ch << " is " << toLowerCase(ch) << endl;

    return 0;
}
