#include <iostream>
using namespace std;
void binsrch(int arr[],int size,int key){
    int s=0,e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            cout<<"Element Found";
            return;
        }
        else if (arr[mid]<key)
            s=mid+1;
        else
            e=mid-1;
    }
    cout<<"Element Not Found";
}
int main() {
    int arr[5]={1,2,5,8,9};
    binsrch(arr,5,3);
    return 0;
}