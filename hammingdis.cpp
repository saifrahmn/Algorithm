#include<iostream>
#include<bits/stdc++.h>
int main(){
    std::string a,b;
    int count=0;
    std::cin>>a;
    std::cin>>b;
    for(int i=0;i<a.length();i++){
        if(a.at(i)==b.at(i)){
        }
        else{
            count++;
        }
    }
    std::cout<<count;
}
