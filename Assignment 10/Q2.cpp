#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {3, 4, 5, 6};

    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    vector<int> common;
  
    for(int num:set1){
        if(set2.find(num)!=set2.end()){
            common.push_back(num);
        }
    }
    for(int x:common){
        cout <<x<< " ";
    }
    return 0;
}
