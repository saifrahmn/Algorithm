#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,p;
        cin >> n;
        cin >> p;
        int arr[]={};
        for(int j=0;j<n;j++){5
            cin >> arr[j];
        }
        if(p>=n||p*2>n){
            cout << "No" << endl;
        }
        else{
            cout << "Yes"<<endl;
        }
    }
}