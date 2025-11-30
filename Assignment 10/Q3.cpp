#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
 vector<int> nums = {2, 3, 2, 4, 3, 2};
 unordered_map<int,int>map;
 for(int num:nums){
    map[num]++; 
 }
 for(auto &p:map) {
        cout<<p.first<<"-"<<p.second <<"times"<<endl;
    }
 
    return 0;
}
