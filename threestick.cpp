/*
these program is a question of codeforces 
ques.1734A
*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    int n;
    int st[100];
    for(int j=0;j<t;j++){
            cin >> n;
            for(int i=0;i<=n-1;i++){
            cin >> st[i];
            }
            int len=n;
            int sum[len-2],min,num;
            for(int j=0;j<len;j++){
            min=st[j];
            for(int i=j;i<len;i++){
                if(min>st[i]){
                    num=min;
                    min=st[i];
                    st[i]=num; 
                }
            }     
        
            st[j]=min;
    }
        
        for(int i=0;i<len-2;i++){
            if(st[i]==st[i+1]){
                return (st[i+2]-st[i]);
            }
            else if(st[i+1]== (st[i])+1){
            sum[i]=1+(st[i+2]-st[i+1]);//here an error occurs while submitting the code on codeforces 
            }
            else{
                sum[i]=(st[i+2] - st[i]) + (st[i+1] - st[i]);
            }
        }
        min=0;
        for(int j=0;j<len-2;j++){
            min=sum[j];
            for(int i=j;i<len-2;i++){
                if(min>sum[i]){
                    num=min;
                    min=st[i];
                    sum[i]=num; 
                }
            }     
            st[j]=min;

    }
            cout << sum[0]+"\n";
    }
}
