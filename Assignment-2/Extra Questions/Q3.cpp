#include <iostream>
#include <algorithm>
using namespace std;
void areAnagrams(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"Anagram pair";
    }
    else{
        cout<<"Not anagrams";
    };
}
