#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public: void addvertices(int v,int v1);
    vector <list<int>> adj;
};
void graph::addvertices(int v,int v1){
    adj[v].push_back(v1);
}


int main(){
    int n,v1,v;
    graph g;
    cout << "Enter the nodes in connecting order"<< endl;
    for(int i=0;i<n;i++){
        cin >> v;
        cout<< "Now enter the node connected to " v<<endl;
        cin >> v1;
        g.addvertices(v,v1);


    }
    cout << g.adj;
}