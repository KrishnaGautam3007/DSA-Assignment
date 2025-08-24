#include<iostream>
using namespace std;
int menu(){
    cout<<"Press 1 to Create"<<endl<<"Press 2 to Display"<<endl
    <<"Press 3 to Insert"<<endl<<"Press 4 to Delete"<<endl<<"Press 5 to Linear Search"<<endl<<"Press 6 to Exit"<<endl;
    int n;
    cin>>n;
    return n;
}
void option(){
    while(true){
        int n=menu();
        switch (n)
        {
        case 1:
            cout<<"Enter Size of Array: ";
            static int size;
            cin>>size;
            static int* arr=new int[size];
            for(int i=0;i<size;i++){
                int el;
                cout<<"Enter the element: ";
                cin>>el;
                arr[i]=el;
            }
            break;
        case 2:
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        case 3:
            int pos;
            cout<<"Enter Position: ";
            cin>>pos;
            for(int i=size-1;i>=pos;i--){
                arr[i+1]=arr[i];
                if(i==pos){
                    int el;
                    cout<<"Enter Element: "<<endl;
                    cin>>el;
                    arr[i]=el;
                }
            }
            break;
        case 4:
            int place;
            cout<<"Enter Position: ";
            cin>>place;
            for(int i=place;i<size;i++){
                arr[i+1]=arr[i];
            }
            size--;
            break;
        case 5:
            int key;
            cout<<"Enter the Element to search: "<<endl;
            cin>>key;
            int count;
            for(int i=0;i<size;i++){
              if(arr[i]==key){
                  count++;
                  cout<<"Found";
                  break;
              }  
            }
            if(count!=0){
                cout<<"Not Found";
            }
            break;
        case 6:
            exit(0);
        default:
            cout<<"Wrong Input"<<endl;
            option();
            break;
        }
    }
}

int main(){
        option();
        return 0;
}