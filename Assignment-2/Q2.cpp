#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size){
    for (int i=0;i<size;i++) {
        for (int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}
int main() {
    int arr[7]={64,34,25,12,22,11,90};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}