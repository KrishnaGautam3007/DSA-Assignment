#include <iostream>
using namespace std;

int main(){
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[3][2]={{7,8},{9,10},{11,12}};
    int res[2][2]={0};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int k=0;k<3;k++){ 
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

}