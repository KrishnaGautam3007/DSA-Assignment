#include <iostream>
using namespace std;
void distcnt(int arr[],int size){
    int distinct_count=0;
    for(int i=0;i<size;i++){
        bool isdist = true;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isdist = false;
                break;
            }
        }
        if (isdist) {
            distinct_count++;
        }
    }
    cout << "Total number of distinct elements = " << distinct_count << endl;
}
int main(){
    return 0;
}
