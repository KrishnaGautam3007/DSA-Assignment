#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool Duplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for(int i=0;i<nums.size();i++) {
        if(seen.find(nums[i])!=seen.end()) {
            return true;  
        }
        seen.insert(num);  
    }
    return false; 
}
int main() {
    vector<int> nums = {1, 2, 3, 1};
    if(Duplicate(nums))
        cout << "true";
    else
        cout << "false";
    return 0;
}
