#include <iostream>
using namespace std;

void transpose(int a[20][3], int b[20][3]) {
    int i, j, k = 1;
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];
    for(i = 0; i < a[0][1]; i++) {
        for(j = 1; j <= a[0][2]; j++) {
            if(a[j][1] == i) {
                b[k][0] = a[j][1];
                b[k][1] = a[j][0];
                b[k][2] = a[j][2];
                k++;
            }
        }
    }
}

void add(int a[20][3], int b[20][3], int c[20][3]) {
    int i = 1, j = 1, k = 1;
    if(a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
        c[0][2] = -1;
        return;
    }
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    while(i <= a[0][2] && j <= b[0][2]) {
        if(a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            i++; k++;
        } else if(b[j][0] < a[i][0] || (a[i][0] == b[j][0] && b[j][1] < a[i][1])) {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            j++; k++;
        } else {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2] + b[j][2];
            i++; j++; k++;
        }
    }
    while(i <= a[0][2]) {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++; k++;
    }
    while(j <= b[0][2]) {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++; k++;
    }
    c[0][2] = k-1;
}

void multiply(int a[20][3], int b[20][3], int c[20][3]) {
    int i, j, k, l, m = 1;
    int t[20][3];
    transpose(b, t);
    c[0][0] = a[0][0];
    c[0][1] = b[0][1];
    for(i = 0; i < a[0][0]; i++) {
        for(j = 0; j < b[0][1]; j++) {
            int sum = 0;
            for(k = 1; k <= a[0][2]; k++) {
                if(a[k][0] == i) {
                    for(l = 1; l <= t[0][2]; l++) {
                        if(t[l][0] == j && t[l][1] == a[k][1])
                            sum += a[k][2] * t[l][2];
                    }
                }
            }
            if(sum != 0) {
                c[m][0] = i;
                c[m][1] = j;
                c[m][2] = sum;
                m++;
            }
        }
    }
    c[0][2] = m-1;
}

void print(int a[20][3]) {
    for(int i = 0; i <= a[0][2]; i++)
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
}

int main() {
    int a[20][3] = {{3,3,3},{0,0,5},{1,1,8},{2,2,3}};
    int b[20][3] = {{3,3,3},{0,0,1},{1,1,2},{2,2,3}};
    int t[20][3], sum[20][3], prod[20][3];

    cout << "Matrix A:\n"; print(a);
    cout << "Matrix B:\n"; print(b);

    transpose(a,t);
    cout << "\nTranspose of A:\n"; print(t);

    add(a,b,sum);
    cout << "\nAddition (A+B):\n"; print(sum);

    multiply(a,b,prod);
    cout << "\nMultiplication (A*B):\n"; print(prod);

    return 0;
}
