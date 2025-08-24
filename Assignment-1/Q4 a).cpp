#include <iostream>
using namespace std;

void Reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}