#include <iostream>
#include <queue>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>temp){
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=temp;
    }
}
void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
}
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) left[i] = arr[l + i];
    for (int j = 0; j < n2; j++) right[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }
    while (i<n1) {
        arr[k++] = left[i++];
    }
    while (j<n2) {
        arr[k++] = right[j++];
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l<r) {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int partition(int arr[], int low, int high) {
    int pivot=arr[high];
    int i=low-1;
    for (int j =low;j<high;j++) {
        if (arr[j]<pivot) {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
void quickSort(int arr[], int low, int high) {
    if (low<high){
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
