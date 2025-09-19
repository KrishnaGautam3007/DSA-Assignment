#include <iostream>
using namespace std;
bool isSubstring(char a[],int lenA,char b[],int lenB){
    for(int i=0;i<=lenA-lenB;i++){
        bool match=true;
        for(int j=0;j<lenB;j++){
            if(a[i+j]!=b[j]){
                match=false;
                break;
            }
        }
        if(match){ 
            return true;
        }
    }
    return false;
}
bool checkSplit(char s[],int n){
    for (int i=1;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            int lenA=i;
            int lenB=j-i;
            int lenC=n-j;
            char A[100],B[100],C[100];
            for (int k=0;k<lenA;k++)A[k]=s[k];
            for (int k=0;k<lenB;k++)B[k]=s[i+k];
            for (int k=0;k<lenC;k++)C[k]=s[j+k];
            if ((isSubstring(A,lenA,B,lenB)&&isSubstring(C,lenC,B,lenB))||(isSubstring(B,lenB,A,lenA)&&isSubstring(C,lenC,A,lenA))||(isSubstring(A,lenA,C,lenC)&&isSubstring(B,lenB,C,lenC))){
                return true;
            }
        }
    }
    return false;
}
int main() {
    char s[100];
    cin>>s;
    int len=0;
    while(s[len] != '\0'){ 
        len++;
    }    
    if(checkSplit(s,len))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
