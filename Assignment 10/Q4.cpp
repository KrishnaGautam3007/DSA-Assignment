#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
 vector<int> nums = {4,5,1,2,0,4};
 unordered_map<int,int>map;
 for(int num:nums){
    map[num]++; 
 }
 for(int num:nums){
     if(map[num]==1){
         cout<<num;
         break;
     }
 }
    return 0;
}
