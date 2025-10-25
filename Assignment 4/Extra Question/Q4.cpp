#include <iostream>
#include <vector>
using namespace std;
int countStudents(vector<int>&students,vector<int>&sandwiches){
    int count0=0,count1=0;
    for (int i=0;i<students.size();i++){
        if(students[i]==0)count0++;
        else count1++;
    }
   for (int i=0;i<sandwiches.size();i++){
        if(sandwiches[i]==0){
            if(count0==0) break; 
            count0--;
        } 
        else{
            if(count1==0) break; 
            count1--;
        }
    }
    return count0+count1; 
}
int main() {
    vector<int>students={1,1,0,0};
    vector<int>sandwiches={0,1,0,1};
    cout<<countStudents(students,sandwiches);
    return 0;
}
