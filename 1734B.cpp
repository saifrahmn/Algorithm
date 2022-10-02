#include<iostream>
using namespace std;

int main(){
    int t;
    int n;
    cin >> t;
    for(int i=0;i<=t-1;i++){
        cin >> n;
        for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
            
        }
        printf("\n");
    }
    }
}
