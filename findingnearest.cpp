#include<iostream>

int smallest(int sub[],int n){
    int small=INT16_MAX;
    int val;
    for(int i=0;i<n;i++){
        if(sub[i]<small){
            small=sub[i];
            val=i;
        }
    }
    return val;
}
int nearestNumber(){
    int n;
    std::cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int near;
    std::cin>> near;
    int sub[n];
    for(int i=0;i<n;i++){
        if(near>a[i]){
            sub[i]=near-a[i];
        }
        else{
            sub[i]=a[i]-near;
        }
    }
    return a[smallest( sub,n)];
    
}
int main(){

    std::cout<<nearestNumber() <<std::endl;
   

}