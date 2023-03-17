#include<iostream>
using namespace std;
int main(){
    int s=0,f=0,ans=0;
    int arr[]={};
    //int t;
    //cin >> t;
    //for(int i=0;i<t;i++){
        int n=15;
        string b="11001110010110";
        cin >> n;
        cin >> b;
        for(int j=0;j<n;j++){
            if(b.at(j)-48==0){
                arr[s]=j+1;
                s++;
            }
        }
        for(int j=0;j<n;j++){
            arr[j]=f;
            int m=1;
            for(int k=0;k<n;k++){
                if(arr[k]==f*m){
                    ans=ans+(arr[k]/m);
                    arr[k]=0;
                    m++;
                }
            }
        }
    //}
    cout << ans;
}