#include <iostream>
using namespace std;

int main() {
    int const rows=2,cols=3;
    int arr1[rows][cols]={{1,2,3},{4,5,6}};
    int transpose[cols][rows];
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++){
            transpose[j][i] = arr1[i][j];
        }
    }
}