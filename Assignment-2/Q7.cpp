#include <iostream>
using namespace std;
void countinv(int arr[],int size){
    int inv_count=0;
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]>arr[j]){
                inv_count++;
            }
        }
    }
}
int main(){
    return 0;
}
