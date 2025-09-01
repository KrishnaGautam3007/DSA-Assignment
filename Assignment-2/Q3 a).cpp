#include <iostream>
using namespace std;
void findMissingLinear(int arr[],int size) {
    for (int i=0;i<size;i++) {
        if(arr[i]!=i+1){
            cout<<"Element Missing is "<<i+1;
            return;
        }
    }
    cout<<"All Elements present";
}

int main() {
    int arr[7]={1,2,3,5,6,7,8};
    findMissingLinear(arr,7);
    return 0;
}