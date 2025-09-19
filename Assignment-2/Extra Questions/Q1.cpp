#include<iostream>
using namespace std;
int countpair(int arr,int size,int target){
     int count = 0;
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if ((arr[i]-arr[j])==target||(arr[i]-arr[j])==-1*target){
                count += 1;
            }
        }
    }
    return count;
}
