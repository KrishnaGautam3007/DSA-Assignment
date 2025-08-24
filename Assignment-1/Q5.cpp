#include <iostream>
using namespace std;

int main() {
    const int rows=3;
    const int cols=3;
    int arr[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<rows;i++){
        int rowSum=0;
        for (int j=0;j<cols;j++) {
            rowSum+=arr[i][j];
        }
        cout<<"Row "<<i+1<<": "<<rowSum<<endl;
    }
    for(int j=0;j<cols;j++){
        int colSum=0;
        for (int i=0;i<rows;i++){
            colSum+=arr[i][j];
        }
        cout<<"Column "<<j+1<<": "<<colSum<<endl;
    }

    return 0;
}