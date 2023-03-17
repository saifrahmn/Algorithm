/*#include<iostream>
using namespace std;
int main(){
    int n,x,y,j=0,v=0;
    cin >> n;
	cin >> x;
	cin >> y;
    int arr[]={};
    if(x!=0&&y!=0||x+y==0){
        cout << "-1";
    }
    else{
        while(j<=n-1){
            for(int i=0;i<=x-1;i++){
                arr[v]=j+1;
                v++;
            }
            j=j+(x+1);
        }
    }
    if(sizeof(arr)/sizeof(arr[0])!=n){
        cout << "-1";
    }
    else{
        for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
            cout << arr[i];
        }
    }
    
}
*/
#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    int t=x+y;
    if(t==0||t>x&&t>y){
        cout << "-1";
    }
}
