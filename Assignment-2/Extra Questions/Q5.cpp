class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    int possibleDups=0;
    int length=arr.size()-1;
    for (int i=0;i<=length-possibleDups;++i) {
        if(arr[i]==0){
            if(i==length-possibleDups){
                arr[length]=0;
                length-=1;
                break;
            }
            possibleDups++;
        }
    }
    for(int i=length-possibleDups;i>=0;--i){
        if(arr[i]==0){
            arr[i+possibleDups]=0;
            possibleDups--;
            arr[i+possibleDups]=0;
        } 
        else{
            arr[i+possibleDups]=arr[i];
        }
    }
    }
};
