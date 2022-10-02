#include<iostream>
using namespace std;
int reverse(int x){
    int a=0,len=0,len1=0,k,k1;
        int n=x,d=x;
        while(x){
            x=x/10;
            len++;
        }
        k1=len-1;
        k=k1;
        int j,j1=len-1;
        j=j1;
        for(;;){
            if(d/10==0){
                int p=d;
                while(j<len-1){
                    p=p*10;
                    j++;
                }
                
                a=a+p;
                x=a;
                while(x){
                x=x/10;
                len1++;
                }
            
            if(len1==len){
            return a;
            }
            len1=0;
                j=j1-1;
                j1--;
                while(k>0){
                    d=d*10;
                    k--;
                }
                
                k=k1-1;
                k1--;
                
                d=n-d;
                n=d;
            }
            if(d/10!=0){d=d/10;}
        }
        return a;
}
int main(){
    int x;
    cin >> x;
    cout << reverse(x);
}
