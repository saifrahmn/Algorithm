#include<iostream>
using namespace std;
void minmax(int arr[],int low,int high, int min, int max){
    if(low==high){
        cout << "Low and high are the same";
    }
    else if(low == high-1){
        if(arr[low]<arr[high]){
            cout << "Low at index "<< low << "High at index"<< high;
        }
        else{
            cout << "low at index"<< high << "high at index"<< low;
        }
    }
    else{
        int mid=(high-low)/2;
        minmax(arr,low,mid,min,max); 
        minmax(arr,mid+1,low,min,max);
    }
}
int main(){
    int arr[]={14,5,-8,10,4,15,-9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=0,max=0;
     minmax(arr,1,n,min,max);
}