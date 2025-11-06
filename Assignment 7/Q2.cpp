#include <iostream>
using namespace std;

void selectionSortImproved(int arr[], int n)
{
int start=0,end=n-1;
while(start<end)
{
int minIndex=start;
int maxIndex=start;
for(int i=start;i<=end;i++)
{
if(arr[i]<arr[minIndex])
minIndex=i;
if(arr[i]>arr[maxIndex])
maxIndex=i;
}
int temp=arr[start];
arr[start]=arr[minIndex];
arr[minIndex]=temp;
if(maxIndex==start)
maxIndex=minIndex;
temp=arr[end];
arr[end]=arr[maxIndex];
arr[maxIndex]=temp;
start++;
end--;
}
}

int main()
{
int arr[7]={64,25,12,22,11,90,45};
n=7;
selectionSortImproved(arr,n);
cout<<"Sorted array: ";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
