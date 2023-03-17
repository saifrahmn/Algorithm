#include<iostream>
using namespace std;
int main(){
    int t,ans=0;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,c;
        int p[]={};
        cin >> n;
        cin >> c;
        for(int j=0;j<n;j++){
            cin >> p[j];
        }
        if(c<=1){
            for(int j=0;j<n;j++){
                int a=p[j];
                for(int k=j;k<n;k++){
                    if(a==p[k]){
                        ans = ans + c;
                    }
                }
            }
        }
    }
    cout << ans;
}