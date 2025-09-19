#include <iostream>
using namespace std;


// A PART
int main(){
int matrix[3][3]={{3,5,8},{1,6,9},{3,5,0}};
int arr[3];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            arr[i]=matrix[i][j];
        }
    }
}
for(int i=0;i<3;i++){
    cout<<arr[i]<<endl;
}
}



// B PART
int main(){
int matrix[4][4]={{3,5,8,6},{1,6,9,7},{3,5,0,4},{1,2,3,4}};
int arr[15];

int k=0;


    for(int i=0;i<4;i++)
    
    { for(int j=0;j<4;j++)
        
        {
           if(i==j || i==j+1 || j==i+1){
              arr[k]=matrix[i][j];
              k++;
            }
        }
        
    }


for(int i=0;i<k;i++){
    cout<<arr[i]<<endl;
}

}





// C PART
int main(){
int matrix[4][4]={{3,5,8,6},{1,6,9,7},{3,5,0,4},{1,2,3,4}};
int arr[15];

int k=0;


    for(int i=0;i<4;i++)
    
    { for(int j=0;j<4;j++)
        
        {
           if(i>=j ){
              arr[k]=matrix[i][j];
              k++;
            }
        }
        
    }


for(int i=0;i<k;i++){
    cout<<arr[i]<<endl;
}

}



// D PART
int main(){
int matrix[4][4]={{3,5,8,6},{1,6,9,7},{3,5,0,4},{1,2,3,4}};
int arr[15];

int k=0;


    for(int i=0;i<4;i++)
    
    { for(int j=0;j<4;j++)
        
        {
           if(j>=i ){
              arr[k]=matrix[i][j];
              k++;
            }
        }
        
    }


for(int i=0;i<k;i++){
    cout<<arr[i]<<endl;
}

}




// E PART
int main(){
int matrix[4][4]={{3,5,8,6},{1,6,9,7},{3,5,0,4},{1,2,3,4}};
int arr[15];

int k=0;


    for(int i=0;i<4;i++)
    
    { for(int j=0;j<4;j++)
        
        {
           if(j>=i ){
              arr[k]=matrix[i][j];
              k++;
            }
        }
        
    }


for(int i=0;i<k;i++){
    cout<<arr[i]<<endl;
}

}
