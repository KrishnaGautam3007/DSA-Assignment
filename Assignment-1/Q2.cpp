#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int const size) {
    int temp[size];
    int count=0;
    for(int i=0;i<size;i++){
        int dup=0;
        for (int k=0;k<count;k++) {
            if (arr[i] == temp[k]) {
                dup++;
                break;
            }
        }
        if (dup!=0) {
            temp[count++] = arr[i];
        }
    }
    for (int i=0;i<count;i++) {
        arr[i] = temp[i];
    }
}